#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define _GNU_SOURCE  

FILE *open_file(char * name){
    FILE *f = fopen(name, "r");
    if (f == NULL){
        perror(name);
        exit(1);
    }
    return f;
}

int main(int argc, char *argv[]){
    char *line = NULL;
    size_t n;
    char *word = NULL;
    FILE *file;
    if(argc == 1){
        file = stdin;
    }
    else{
        file = open_file(argv[1]);
    }
    while ((getline(&line, &n, file)) > 0){
        word = strtok(line, " ");
        while(word != NULL){
            printf("%s \n", word);
            word = strtok(NULL, " ");
        }
    }
    free(line);
    
}
