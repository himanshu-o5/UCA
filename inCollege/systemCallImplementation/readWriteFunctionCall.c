#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // OPEN will Open/Create the file in buffer. FD is File Descriptor.
    // This will return +ve int for success and -1 for error.
    int fd = open("foo.txt", O_RDWR | O_CREAT); 
    printf("%d\n", fd);
    
    // Allocate some memory for storing the text of the file.
    char* res = (char*) calloc(100, sizeof(char)); 

    // Getting the text and the length of the text.
    int size = read(fd, res, 20); // This will read first 20 characters from the file.
    res[size] = '\0';


    printf("%s\n", res);

    // Make sure you are in write mode for writing in a file.
    char str[] = "\nSample text for file\n";
    size = write(fd, str, strlen(str));
    printf("%d", size);

    // To close the file from the buffer, use close(fd) function.
    close(fd);

    return 0;
}
