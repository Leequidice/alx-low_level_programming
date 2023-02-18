#include <stdio.h>

/**
 *  * main - entry point
 *   *
 *    * Return: always returns 0
 */
int main(void)
{
for (int i = 0; i < 100; i++) {
for (int j = i; j < 100; j++) {
int n1 = i / 10;
int n2 = i % 10;
int n3 = j / 10;
int n4 = j % 10;
	if (i == j) {
	continue;
}
if (i > j) {
int temp = i;
	i = j;
	j = temp;
	n1 = i / 10;
	n2 = i % 10;
	n3 = j / 10;
	n4 = j % 10;
}
putchar(n1 + '0');
putchar(n2 + '0');
putchar(' ');
putchar(n3 + '0');
putchar(n4 + '0');
if (i != 99 || j != 98) {
putchar(',');
putchar(' ');
}
}
}
return 0;
}
