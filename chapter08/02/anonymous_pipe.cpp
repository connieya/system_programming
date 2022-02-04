#include "stdio.h"
#include "tchar.h"
#include "windows.h"

int _tmain(int argc , TCHAR * argv[])
{
    HANDLE  hReadPipe , hWritePipe; // Pipe Handle

    CreatePipe(&hReadPipe , &hWritePipe , NULL , 0);

}