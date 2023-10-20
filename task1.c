// Выяснить, что делает компилятор преобразования к "старшему" знаковому и беззнаковому типу знаковые и беззнаковые переменные 
//"младшего" типа

#include <stdio.h>

int main() {

unsigned char a = 123;
unsigned int b = (unsigned int) a;

printf("%d\n", b);

signed char c = -123;
signed int d = (signed int) c;

printf("%d\n", d);

return 0;
} 
