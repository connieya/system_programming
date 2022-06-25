#include "stdio.h"
#include "string.h"

int main()
{
    wchar_t str[] = L"ABC";
    int size = sizeof(str);
    int len = wcslen(str);

    wprintf(L"Array Size : %d \n" , size);
    wprintf(L"String Length : %d \n",len);

    return 0;
}