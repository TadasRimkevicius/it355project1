#include <stdio.h>
#include <wchar.h>

int main(){
    // create a wide string
    wchar_t myString[] = L"This is my wide string";
    // use wprintf instead of printf
    wprintf(L"%ls\n", myString);
}

