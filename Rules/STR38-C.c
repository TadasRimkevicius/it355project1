#include <stdio.h>
#include <wchar.h>

int main(){
    wchar_t myString[] = L"This is my wide string";
    wprintf(L"%ls\n", myString);
}

