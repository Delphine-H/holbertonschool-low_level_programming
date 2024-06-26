#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_file_description(int fd_from, int fd_to);

#endif
