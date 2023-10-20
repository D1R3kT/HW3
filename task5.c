//Дано действительное число а. Пользуясь только умножением получить a^4 и a^10 за четыре операции

#include<stdio.h>

int main() {

int a = 2;

int b = a * a;

int c = b * b;

int d = c * c;

int result = d * b;

printf("%d\n", c);
printf("%d\n", result);

return 0;
}
