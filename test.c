#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    const char *file_path = "/usr/local/netsd/cdp.conf";
    int fd;

    // Attempt to create the file with read/write permissions for the owner
    fd = open(file_path, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

    if (fd == -1) {
        perror("Error creating file");
        return 1;
    }

    printf("File %s created successfully.\n", file_path);

    // Close the file descriptor
    if (close(fd) == -1) {
        perror("Error closing file");
        return 1;
    }

    return 0;
}