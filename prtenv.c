#include <stdio.h>
#include <stdlib.h>

void main(){
    char* bash = getenv("MYBASH");
    char* arg = getenv("MYARG");
    if (bash)
        printf("MYBASH: %x\n", (unsigned int)bash);
    if (arg)
        printf("MYARG: %x\n", (unsigned int)arg);
}
