#include "stdio.h"
#include "string.h"

int main()
{
    wchar_t str1[] = L"ABC";
    char str2[] = "ABC";
    int size = sizeof(str1);
    printf("str1 array size = %d \n", size); // 8  널문자 까지 포함
    size = sizeof(str2);
    printf("str2 array size = %d \n", size); // 4
    int len = wcslen(str1);
    printf("str1 str length = %d \n", len); // 3
    len = strlen(str2);
    printf("str2 str length = %d \n", len); // 3

}