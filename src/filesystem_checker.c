#include "filesystem_checker.h"

int dir_exists(char* dir_name)
{
    DIR* dir = opendir(dir_name);
    if(dir)
    {
        // Directory exists
        return 1;
    }
    else if(ENOENT == errno)
    {
        // Directory does not exist
        return 0;
    }
    else
        errx(EXIT_FAILURE, "opendir");
    return -1;
}

int file_exists(char* file_name)
{
    if (access(file_name, F_OK) == 0)
    {
        // file exists
        return 1;
    }
    else
    {
        // file doesn't exist
        return 0;
    }
    return -1;
}

// Checks if all mendatory files and directories are created and setup for use
void file_check()
{

}
