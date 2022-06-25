#include "stdio.h"
#include "string.h"

int main()
{
    char str[] = "ABC한글";
    int size = sizeof(str);
    int len =  strlen(str);

    printf("array size  : %d \n" , size );
    printf("str size  : %d \n", len);

    return 0;
}