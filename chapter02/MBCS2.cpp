#include "stdio.h"

int main()
{
    char str [] = "한글입니다.";
    int i;

    for (i =0; i<5; i++)
        fputc(str[i], stdout); // 1바이트 데이터를 출력하는 함수

    fputs("\n", stdout);

    for(i=0; i<10; i++) {
        fputc(str[i],stdout);
    }

    fputs("\n", stdout);
    return 0;
}