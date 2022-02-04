#include "stdio.h"
#include "tchar.h"
#include "windows.h"

int _tmain(int argc, TCHAR *argv[]) {
    STARTUPINFO si = {0,};
    PROCESS_INFORMATION pi;
    si.cb = sizeof(si);

    TCHAR command[] = _T("C:\\c_cpp_study\\system_programming\\cmake-build-debug\\chapter06_6-3_KernelObjProb2.exe");
    CreateProcess(
            NULL, command, NULL, NULL, TRUE,
            0, NULL, NULL, &si, &pi
    );
    CloseHandle(pi.hProcess);

    return 0;
}