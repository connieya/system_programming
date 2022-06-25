#include "stdio.h"

int wmain(int argc , wchar_t * argv[])
{
    int i;
    for (i=1; i<argc; i++)
    {
        fputws(argv[i],stdout);
        fputws(L"\n",stdout);
    }
    return 0;
}