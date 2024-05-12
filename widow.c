#include <windows.h>
 
int main(void) {

return MessageBoxW(
        NULL,
        L"Baby Steps for Mal Engg",    
        L"Mal Engg. 101",
        0x00000003L | MB_ICONASTERISK 
    );
}   