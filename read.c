#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h> 
#define _GNU_SOURCE  
// need to add this for getline and stuff ^^^^^
#define ARRAY_SIZE 1



int main(void){
    char buffer[ARRAY_SIZE];
    size_t n;
    int fd = open("/usr/lib/locale/locale-archive", O_RDONLY); 

    while((n = read(fd, buffer, ARRAY_SIZE)) != 0){}

}

