#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h> 
#define arraySize 1



int main(void){
    char buffer[arraySize];
    int n;
    int fd = open("/usr/lib/locale/locale-archive", O_RDONLY); 

    while((n = read(fd, buffer, arraySize)) != 0){}

}

