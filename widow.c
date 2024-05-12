#include <windows.h>
 
int main(void) {

// int MessageBoxW(
//   [in, optional] HWND    hWnd,
//   [in, optional] LPCWSTR lpText,
//   [in, optional] LPCWSTR lpCaption,
//   [in]           UINT    uType
// );


return MessageBoxW(
        NULL,
        L"Baby Steps for Mal Engg",    
        L"Mal Engg. 101",
        0x00000003L | MB_ICONASTERISK 
    );
}   