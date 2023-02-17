#include <stdio.h>

/**
 *  * main - entry point
 *   *
 *    * Return: always returns 0
 *     */
int main(void)
{
	    for (int i = 0; i < 8; i++) {
		            for (int j = i+1; j < 9; j++) {
				                for (int k = j+1; k < 10; k++) {
							                int num = i * 100 + j * 10 + k;
									                if (num == 789) {
												                    putchar('7');
														                        putchar('8');
																	                    putchar('9');
																			                    } else {
																						                        putchar(i + '0');
																									                    putchar(j + '0');
																											                        putchar(k + '0');
																														                }
											putchar(',');
	putchar(' ');
}
}
}
return 0;
}
