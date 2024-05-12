#include <windows.h>
#include <stdio.h>

int main(void) {

// BOOL CreateProcessW(
//   [in, optional]      LPCWSTR               lpApplicationName,
//   [in, out, optional] LPWSTR                lpCommandLine,
//   [in, optional]      LPSECURITY_ATTRIBUTES lpProcessAttributes,
//   [in, optional]      LPSECURITY_ATTRIBUTES lpThreadAttributes,
//   [in]                BOOL                  bInheritHandles,
//   [in]                DWORD                 dwCreationFlags,
//   [in, optional]      LPVOID                lpEnvironment,
//   [in, optional]      LPCWSTR               lpCurrentDirectory,
//   [in]                LPSTARTUPINFOW        lpStartupInfo,
//   [out]               LPPROCESS_INFORMATION lpProcessInformation
// );

STARTUPINFOW si = { 0 };
PROCESS_INFORMATION pi = { 0 };


    if(!CreateProcessW(
        L"C:\\Windows\\System32\\notepad.exe",
        NULL,
        NULL,
        NULL,
        FALSE,
        BELOW_NORMAL_PRIORITY_CLASS,
        NULL,
        NULL,
        &si,
        &pi )){
        printf("(-) Failed to create process, error %ld\n", GetLastError());
        return EXIT_FAILURE;
    }

    printf("(+) Process created %ld\n", pi.dwProcessId);
    return EXIT_SUCCESS;   
}