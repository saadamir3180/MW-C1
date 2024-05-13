#include <windows.h>
#include <stdio.h>


#define okay(msg, ...) printf("[+] " msg "\n", ##__VA_ARGS__)
#define info(msg, ...) printf("[*] " msg "\n", ##__VA_ARGS__)
#define warn(msg, ...) printf("[-] " msg "\n", ##__VA_ARGS__)


DWORD PID = NULL;

int main(int argc, char* argv[]){
    
    if(argc < 2){
        //argument count less than 2
        warn("Usage: %s <PID>", argv[0]);
        // argv[0] is always the name of th eprogram itself

         return EXIT_FAILURE;
    }

    PID = atoi(argv[1]);
    info("%s trying to open a handle to process: (%ld\n)", argv[0], PID);

    return EXIT_SUCCESS;
}