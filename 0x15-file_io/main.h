#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include <stdint.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_from_to(char *file_from, char *file_to);
void helper(char *file_from, char *file_to, int fd_from, int fd_to, char *buf);
void print_elf(Elf64_Ehdr *my_elf_header);
void check_os(int ei_osabi);
uint32_t swapEndian(uint32_t value);
uint64_t swapEndian64(uint64_t value);
void print_type(int elf_type);
void print_class(int elf_class);
void print_data(int data);
void print_version(int elf_version);
void print_entry(int elf_class, int data, uint64_t add);


#endif
