#include <stdio.h>
#include "main.h"

int main(void)
{
    /* Test from checker requirements */
    _printf("Let's print a simple sentence.\n");
    _printf("%c", 'S');
    _putchar('\n');
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    _printf("%%");
    _putchar('\n');
    _printf("%c", '\0');
    _putchar('\n');
    _printf("%");
    _putchar('\n');
    _printf("%!\n");
    _printf("%K\n");
    
    return 0;
}
