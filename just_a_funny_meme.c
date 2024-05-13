#include <windows.h>
#include <stdio.h>


#define okay(msg, ...) printf("[+] " msg "\n", ##__VA_ARGS__)
#define info(msg, ...) printf("[*] " msg "\n", ##__VA_ARGS__)
#define warn(msg, ...) printf("[-] " msg "\n", ##__VA_ARGS__)


int main(int argc, char* argv[]){
    
    printf("\n");
    okay("okay macro woking fine");
    info("info macro woking fine");
    warn("warn macro woking fine");
    return EXIT_SUCCESS;
}