#include "stdio.h"
#include "tchar.h"
#include "windows.h"

int _tmain(int argc, TCHAR * argv[])
{
    int TIME = 80;
    STARTUPINFO siNORMAL = {0,};
    PROCESS_INFORMATION piNORMAL;
    TCHAR commandOne [] =
    _T("chapter09_02_normal.exe");

    STARTUPINFO siBELOW = {0,};
    PROCESS_INFORMATION  piB;
    TCHAR commandTwo [] =
    _T("chapter09_02_below.exe");

    siNORMAL.cb = sizeof(siNORMAL);
    siBELOW.cb = sizeof(siBELOW);

    SetPriorityClass(
            GetCurrentProcess(), ABOVE_NORMAL_PRIORITY_CLASS
            );

    CreateProcess(
            NULL , commandOne,
            NULL , NULL , TRUE,
            0 , NULL , NULL,
            &siNORMAL , &piNORMAL
            );

    CreateProcess(
            NULL , commandTwo,
            NULL , NULL , TRUE,
            0 , NULL , NULL,
            &siBELOW, &piB
    );
    while (TIME)
    {
        for(DWORD i=0; i<10000; i++)
            for (DWORD i=0; i<10000; i++);

        _fputts(
                _T("above process \n"),
                stdout
                );

        TIME--;
    }
    return 0;
}