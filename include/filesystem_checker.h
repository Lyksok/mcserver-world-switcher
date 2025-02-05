#ifndef FILESYSTEM_CHECKER_H
#define FILESYSTEM_CHECKER_H

#include <unistd.h>
#include <dirent.h>
#include <err.h>
#include <errno.h>
#include <stdlib.h>

int dir_exists(char* dir_name);
int file_exists(char* file_name);

#endif /* FILESYSTEM_CHECKER_H */
