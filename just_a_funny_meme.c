#include <windows.h>
#include <stdio.h>

#define okay(msg, ...) printf("[+] " msg "\n", ##__VA_ARGS__)
#define info(msg, ...) printf("[*] " msg "\n", ##__VA_ARGS__)
#define warn(msg, ...) printf("[-] " msg "\n", ##__VA_ARGS__)

// hungarian notation by microsoft
DWORD PID = NULL;
HANDLE hProcess, hThread = NULL;

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        // argument count less than 2
        warn("Usage: %s <PID>", argv[0]);
        // argv[0] is always the name of th eprogram itself

        return EXIT_FAILURE;
    }

    PID = atoi(argv[1]);
    info("%s trying to open a handle to process: (%ld)\n", argv[0], PID);

    // HANDLE OpenProcess(
    //   [in] DWORD dwDesiredAccess,
    //   [in] BOOL  bInheritHandle,
    //   [in] DWORD dwProcessId
    // );

    hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, PID);


    if(hProcess == NULL)
    {
        warn("%s Failed to get a handle to process: (%ld), erorr: %ld", argv[0],  PID, GetLastError());
        return EXIT_FAILURE;
    }else{
        info("%s got a handle to process: (%ld)", argv[0], PID);
    }

    return EXIT_SUCCESS;
}