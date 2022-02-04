#include "stdio.h"
#include "tchar.h"
#include "windows.h"

int _tmain(int argc, TCHAR *argv[]) {
    int TIME = 80;
    SetPriorityClass(
            GetCurrentProcess(), BELOW_NORMAL_PRIORITY_CLASS
    );
    while (TIME)
    {
        for(DWORD i=0; i<10000; i++)
            for (DWORD i=0; i<10000; i++);

        _fputts(
                _T("below process \n"),
                stdout
        );

        TIME--;
    }
    return 0;
}