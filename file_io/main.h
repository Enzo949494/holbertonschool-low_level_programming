#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int close_file_free_buff(int file_descriptor, char *buff, int returnal);
int close_file_no_free(int file_descriptor, int returnal);
int main_copy(int argc, char *argv[]);
int open_file(const char *filename, int flags, mode_t mode);
void copy_content(int fd_from, int fd_to);
void write_to_file(int fd_to, char *buffer, ssize_t nwrite);
void error_exit(int code, const char *message, const char *arg);
int main(int argc, char *argv[]);

#define BUFFER_SIZE 1024

#endif /* MAIN_H */
