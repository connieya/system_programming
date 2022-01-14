#include "stdio.h"
#include "stdlib.h"
#include "tchar.h"
#include "locale"
#include "windows.h"

#define STR_LEN 256
#define CMD_TOKEN_NUM 10

TCHAR ERROR_CMD []
 = _T("'%s' 은(는) 실행할 수 있는 프로그램이 아닙ㄴ비다. \n");

int CmdProcessing(void);
TCHAR * StrLower(TCHAR *);

int tmain(int argc, TCHAR *  argv[])
{
    // 한글 입력을 가능하게 하기 위해
    _tsetlocale(LC_ALL , _T("korean"));

    DWORD isExit;
    while (1)
    {
        isExit = CmdProcessing();
        if (isExit == TRUE)
        {
            _fputts(_T("명령어 처리를 종료합니다. \n"), stdout);
            break;
        }
    }
    return 0;
}