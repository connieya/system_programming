#include "stdio.h"
#include "windows.h"

int wmain(int argc , wchar_t * argv[])
{
    LPSTR str1 = "SBCS Style String 1";
    LPWSTR str2 = L"WBCS Style String 1";

    CHAR arr1[] = "SBCS Style String 2";
    WCHAR  arr2[] = L"WBCS S tyle String 2";

    LPCSTR cStr1 = arr1;
    LPCWSTR cStr2 = arr2;

    printf("%s\n",str1);
    printf("%s\n",arr1);

    wprintf(L"%s\n",str2);
    wprintf(L"%s\n",arr2);

    return 0;
}