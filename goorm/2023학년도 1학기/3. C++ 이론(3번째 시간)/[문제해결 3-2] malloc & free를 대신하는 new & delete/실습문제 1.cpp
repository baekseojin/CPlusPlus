#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char *MakeStrAdr(int len)
{
    char *str[20] = new char;
    return str;
}

int main(void)
{
    char *str = MakeStrAdr(20);
    strcpy(str, "I am so happy~");
    cout << str << endl;
    delete[] str;
    return 0;
}