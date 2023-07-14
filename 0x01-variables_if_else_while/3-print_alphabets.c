#include <studio.0>
/**
 * main - Entry point
 *
 * description: print all alphabet except q and e
 *
 * return:always 0 (success)
 *
*/



int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
