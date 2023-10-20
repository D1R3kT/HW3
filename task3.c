// Написать программу демонстрирующую переполнение по типу char и вывести на экран и число и символ

#include <stdio.h>

int main() {

char a = 'A';
printf ("%c\n", a);

a = a + 258;
printf ("%c\n", a);

return 0;
}
