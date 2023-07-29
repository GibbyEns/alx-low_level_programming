#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define ELF_CHECK_FAILED 98

void check_elf_magic(unsigned char *e_ident);
void print_elf_magic(unsigned char *e_ident);
void print_elf_class(unsigned char *e_ident);
void print_elf_data(unsigned char *e_ident);
void print_elf_version(unsigned char *e_ident);
void print_elf_osabi(unsigned char *e_ident);
void print_elf_abi(unsigned char *e_ident);
void print_elf_type(unsigned int e_type, unsigned char *e_ident);
void print_elf_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf_file(int fd);

int main(int argc, char *argv[])
{
    const int ELF_HEADER_SIZE = sizeof(Elf64_Ehdr);
    const int ELF_HEADER_READ = 1;
    const int FILE_OPEN_ERROR = 2;

    int fd;
    ssize_t read_result;
    Elf64_Ehdr header;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error");
        exit(FILE_OPEN_ERROR);
    }

    read_result = read(fd, &header, ELF_HEADER_SIZE);
    if (read_result != ELF_HEADER_READ)
    {
        perror("Error");
        close_elf_file(fd);
        exit(EXIT_FAILURE);
    }

    check_elf_magic(header.e_ident);
    printf("ELF Header:\n");
    print_elf_magic(header.e_ident);
    print_elf_class(header.e_ident);
    print_elf_data(header.e_ident);
    print_elf_version(header.e_ident);
    print_elf_osabi(header.e_ident);
    print_elf_abi(header.e_ident);
    print_elf_type(header.e_type, header.e_ident);
    print_elf_entry(header.e_entry, header.e_ident);

    close_elf_file(fd);
    return 0;
}

void check_elf_magic(unsigned char *e_ident)
{
    if (e_ident[EI_MAG0] != ELFMAG0 ||
        e_ident[EI_MAG1] != ELFMAG1 ||
        e_ident[EI_MAG2] != ELFMAG2 ||
        e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        exit(ELF_CHECK_FAILED);
    }
}

void print_elf_magic(unsigned char *e_ident)
{
    printf(" Magic: ");
    for (int i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x", e_ident[i]);
        if (i != EI_NIDENT - 1)
            printf(" ");
    }
    printf("\n");
}

void print_elf_class(unsigned char *e_ident)
{
    printf(" Class: ");
    switch (e_ident[EI_CLASS])
    {
    case ELFCLASSNONE:
        printf("none\n");
        break;
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
        break;
    }
}

// Implement other print functions (print_elf_data, print_elf_version, etc.) similarly

void close_elf_file(int fd)
{
    if (close(fd) == -1)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }
}
