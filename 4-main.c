#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui = (unsigned int)INT_MAX + 1024;
    void *addr = (void *)0x7ffe637541f0;


    /** [Passed] String test*/
    printf("1. String TEST\n\n");
    printf("Printf: I Am Rock!");
    printf("\n");
    _printf("_Printf: I Am Rock!");

    /*[] Length Test*/
    printf("\n\n2. Welcome to the specialized Patronal Feast of Saint Judeah of Zion \n\n");
    len = printf("I Am Rock!");
    printf("\n");
    len2 = _printf("I Am Rock!");
    printf("\nLength of Printf: %i; Length of _Printf: %i", len, len2);

    /* [Passed] Integer Test*/
    printf ("\n\n3. The corpse is Integer\n\n");
    len = printf("Carbon tests put it on %i years old.", 3100);
    printf("\n");
    len2 = _printf("Carbon tests put it on %i years old.", 3100);
    printf("\nLength of Printf: %i; Length of _Printf: %i", len, len2);

    /* [Passed] Decimal Test*/
    printf ("\n\n4. You, Decimal!\n\n");
    len = printf("Pi is %d.", 314);
    printf("\n");
    len2 = _printf("Pi is %d.", 314);
    printf("\nLength of Printf: %i; Length of _Printf: %i", len, len2);

    /* [Passed] Negative Integer Test*/
    printf ("\n\n5. Don't be so Negative\n\n");
    len = printf  ("Cold is %i degrees! Oh Wait that's Absolute Zero.", -255);
    printf("\n");
    len2 = _printf("Cold is %i degrees! Oh Wait that's Absolute Zero.", -255);
    printf("\nLength of Printf: %i; Length of _Printf: %i", len, len2);

    /* [Passed] String Insertions*/
    printf("\n\n6. Because Rick Astley will:\n\n");
    len = printf("Never Gonna '%s', and Never '%s'", "Give You Up", "Gonna Let You Down");
    printf("\n");
    len2 = _printf("Never Gonna '%s', and Never '%s'", "Give You Up", "Gonna Let You Down");
    printf("\nLength of Printf: %i; Length of _Printf: %i", len, len2);

    /* [Passed] Double Percentage Test*/
    printf ("\n\n7. What is that in the sky!?\n\n");
    len = printf(  "I see double %% Rainbows!");
    printf("\n");
    len2 = _printf("I see double %% Rainbows!");
    printf("\nLength of Printf: %i; Length of _Printf: %i", len, len2);

    /* [Passed] Unsigned Int*/
    printf ("\n\n8. Sign, Don't Sign, I Don't care.\n\n");
    len = printf("And if that gets unsigned you will be [%u] times screwed\n", ui);
    printf("\n");
    len2 = _printf("And if that gets unsigned you will be [%u] times screwed\n", ui);
    printf("\nLength of Printf: %i; Length of _Printf: %i", len, len2);
    

    /* [Passed] Char!*/
    printf("\n\n9. Char! Char! Char!\n\n");
    len = printf("Gimme a %c, Gimme an %c, Gimme a %c, Gimme a %c", 'K', 'A', 'K', 'Y');
    printf("\n");
    len2 = _printf("Gimme a %c, Gimme an %c, Gimme a %c, Gimme a %c", 'K', 'A', 'K', 'Y');
    printf("\nLength of Printf: %i; Length of _Printf: %i", len, len2);

    /* [Passed] What's Your address?*/
    printf("\n\n10. What's Your Name? What's Your Number?\n\n");
    len = printf("I would like to [%p] to meet you\n", addr);
    printf("\n");
    len2 = _printf("I would like to [%p] to meet you\n", addr);
    printf("\nLength of Printf: %i; Length of _Printf: %i", len, len2);

    /* [Passed] Hexadecimal is a color*/
    printf("\n\n11. Hexadecimal is just a color\n\n");
    len = printf("Red is:[%x, %X]\n", ui, ui);
    printf("\n");
    len2 = _printf("Red is:[%x, %X]\n", ui, ui);
    printf("\nLength of Printf: %i; Length of _Printf: %i", len, len2);
    
    /*Octavarium*/
    printf("\n\n12. Octavarium Octal\n\n");
    len = printf("I never, wanted, to become [%o] someone like him\n", ui);
    printf("\n");
    len2 = _printf("I never, wanted, to become [%o] someone like him\n", ui);
    printf("\nLength of Printf: %i; Length of _Printf: %i", len, len2);

    /* PIRATE FORMAT*/
    printf("\n\n13. Shimber Me Timbers\n\n");
    /*printf("\"And the first thing she said is: Who are %r?\"Adele\n");*/
    printf("\n");
    len = _printf("\"And the first thing she said is: Who are %r?\"Adele\n");
    printf("\nLength of _Printf: %i;", len);

    printf("\n\n\nEND OF TEST\n");


    
    return (0);
}