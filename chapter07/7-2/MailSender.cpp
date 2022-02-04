#include "stdio.h"
#include "tchar.h"
#include "windows.h"

#define SLOT_NAME  _T("\\\\.\\mailslot\\mailbox")

int _tmain(int argc, TCHAR * argv[])
{
    HANDLE hMailSlot;
    TCHAR message[50];
    DWORD byteWritten;  // number of bytes write

    hMailSlot = CreateFile(
            SLOT_NAME,  // 메일 슬롯의 이름(주소)
            GENERIC_WRITE, // 사용되는 용도
            FILE_SHARE_READ,
            NULL,
            OPEN_EXISTING, // 생성 방식
            FILE_ATTRIBUTE_NORMAL,
            NULL
            );
    if (hMailSlot == INVALID_HANDLE_VALUE)
    {
        _fputts(_T("Unable to create mailslot! \n") ,stdout);
        return 1;
    }

    while (1)
    {
        _fputts(_T("MY CMD>"),stdout);
        _fgetts(message , sizeof(message) / sizeof(TCHAR) , stdin);

        if (!WriteFile(hMailSlot , message , _tcslen(message) * sizeof(TCHAR) , &byteWritten , NULL)){
            _fputts(_T("Unable to write!") , stdout);
            CloseHandle(hMailSlot);
            return 1;
        }

        if (!_tcscmp(message, _T("exit")))
        {
            _fputts(_T("Good Bye!"), stdout);
            break;
        }
    }
    CloseHandle(hMailSlot);
    return 0;
}