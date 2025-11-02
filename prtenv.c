#include <stdio.h>
#include <stdlib.h>

void main(){
    char* shell = getenv("MYBASH");
    if (shell)
        printf("MYBASH: %x\n", (unsigned int)shell);
}
