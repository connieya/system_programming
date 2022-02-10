#include "stdio.h"
#include "tchar.h"
#include "windows.h"

int _tmain(int argc, TCHAR* argv[])
{
    TCHAR string [] =
    _T("Hey , get a life")
    _T("You don't even have two pennies to rub together.");

    TCHAR seps[] = _T(" ,.!");
    // 토근 분리 조건 , 문자열 설정 및 첫 번째 토큰 반환
    TCHAR * token = _tcstok(string , seps);

    // 계속해서 토근을 반환 및 출력
    while (token != NULL)
    {
        _tprintf(_T(" %s\n"), token);
        token = _tcstok(NULL , seps);
    }
    return 0;
}