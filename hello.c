#include <stdio.h>
#include <string.h>

int func(char buff[]){
    char buffer[64];
    printf("Address: %p\n", (void*)&buffer);
    strcpy(buffer, buff);
    printf("Buffer contents copied\n");
}

int main(int argc, char **argv)
{
    if (argc < 2){
        printf("Not enough args\n");
    }else{
        func(argv[1]);
    }
}