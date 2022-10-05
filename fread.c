#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define ARRAY_SIZE 1

int main(void){
    char buffer[ARRAY_SIZE];
    FILE *file = fopen("/usr/lib/locale/locale-archive", "r"); 
    ssize_t n;
    while((n = fread(buffer, 1, ARRAY_SIZE, file)) != 0){}
}