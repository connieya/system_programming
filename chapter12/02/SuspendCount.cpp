#include "stdio.h"
#include "tchar.h"
#include "windows.h"
#include "process.h"

unsigned int WINAPI ThreadProc(LPVOID lpParam) {
    while (1) {
        _tprintf(_T("Running State ! \n"));
        Sleep(1000);
    }
    return 0;
}

int _tmain(int argc, TCHAR *argv[]) {
    DWORD dwThreadId;
    HANDLE hThread;
    DWORD susCnt; // suspend count 를 확인하기 위한 변수

    hThread = (HANDLE)
            _beginthreadex(
                    NULL, 0,
                    ThreadProc,
                    NULL,
                    CREATE_SUSPENDED,
                    (unsigned *) &dwThreadId
            );
    if(hThread == NULL)
        _tprintf(_T("Thread creation fault ! \n"));

    susCnt = ResumeThread(hThread);
    _tprintf(_T("suspend count :  %d \n"), susCnt);
    Sleep(10000);

    susCnt = SuspendThread(hThread);
    _tprintf(_T("suspend count : %d \n"),susCnt);
    Sleep(10000);

    susCnt = SuspendThread(hThread);
    _tprintf(_T("suspend count : %d \n"),susCnt);
    Sleep(10000);

    susCnt = ResumeThread(hThread);
    _tprintf(_T("suspend count :  %d \n"),susCnt);

    susCnt = ResumeThread(hThread);
    _tprintf(_T("suspend count :  %d \n"),susCnt);

    WaitForSingleObject(hThread , INFINITE);
    return 0;
}