#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fct1.h>
#include <stdlib.h>
#include <unistd.h>

int putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);

#endif
