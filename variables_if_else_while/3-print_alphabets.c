#include <stdio.h>

int main(void)
{
char lower = 'a';
char upper = 'A';
while (lower <= 'z')
putchar (lower++);
putchar('\n');
while (upper <= 'Z')
putchar (upper++);
putchar('\n');
return (0);
}
