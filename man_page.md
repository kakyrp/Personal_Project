# _PRINTF FUNCTIONS

# NAME
_PRINTF - function similar to printf.

# SYNOPSIS
- This is the function to evaluate each of the characters given and decide if it needs to write it on the output or if it needs to evaluate and replace with one of the values in the va_list given.

# DESCRIPTION
- With this function we can evaluate every character given as a parameter, and using the standard ouput directly, writing without needing to use malloc - free, because the function doesn't need memory assigment to work. Decision taken, due to the amount of time to do this project. Function always returns the number of characters sent to the standards output buffer, if NULL given then prints (null) and return 6 (equivalent to the characters used by "(null)").

# OPTIONS
- All evaluations fo to the variadic parameter and is read F.I.F.O (First In, First Out)
- %s: Evaluates to char array.
- %c: Evaluates to char.
- %i: Evaluates to integer.
- %d: Evaluates to digit.
- %p: Evaluates to memory address.
- %%: Evaluates to a single percentage char.
- %x, %X: Evaluates to hexadecimal. The case affects the case output.
- %o: Evaluates to octal.
- %u: Evaluates to unsigned integer.
- If given an unknown format prints back the format given. (See below %r or pirate format).


# ENVIRONMENT
- Count: The number of bytes writen to the output buffer. Each byte represents a character.
- Index: Is the actual index of the input string, received as format.
- Format: The array of char to evaluate.

# FILES
- _printf.c
- helpers.c
- listManager_helper.c
- numerical_helpers.c
- string_helpers.c

# BUGS
- None known.

# EXAMPLES
```C
/** String test*/
    printf("1. String TEST\n\n");
    _printf("_Printf: I Am Rock!");
	/** Result: I Am Rock!*/

/** Length Test*/
    printf("\n\n2. Welcome to the specialized Patronal Feast of Saint Judeah of Zion \n\n");
    len1 = _printf("I Am Rock!");
    printf("\nLength of Printf: %i", len1);
/** I Am Rock! Length of Printf: 10; Length of _Printf: 10 */

    /** Integer Test*/
    printf ("\n\n3. The corpse is Integer\n\n");
    _printf("Carbon tests put it on %i years old.", 3100);

    /** Decimal Test*/
    printf ("\n\n4. You, Decimal!\n\n");
	_printf("Pi is %d.", 314);

    /** Negative Integer Test*/
    printf ("\n\n5. Don't be so Negative\n\n");
    _printf("Cold is %i degrees! Oh Wait that's Absolute Zero.", -255);

    /** String Insertions*/
    printf("\n\n6. Because Rick Astley will:\n\n");
    _printf("Never Gonna '%s', and Never '%s'", "Give You Up", "Gonna Let You Down");

    /** Double Percentage Test*/
    printf ("\n\n7. What is that in the sky!?\n\n");
    _printf("I see double %% Rainbows!");

    /** Unsigned Int*/
    printf ("\n\n8. Sign, Don't Sign, I Don't care.\n\n");
	_printf("And if that gets unsigned you will be [%u] times screwed\n", ui);

    /** Char!*/
    printf("\n\n9. Char! Char! Char!\n\n");
    _printf("Gimme a %c, Gimme an %c, Gimme a %c, Gimme a %c", 'K', 'A', 'K', 'Y');

    /** What's Your address?*/
    printf("\n\n10. What's Your Name? What's Your Number?\n\n");
    _printf("I would like to [%p] to meet you\n", addr);

    /** Hexadecimal is a color*/
    printf("\n\n11. Hexadecimal is just a color\n\n");
    _printf("Red is:[%x, %X]\n", ui, ui);
    
/** Octavarium*/
    printf("\n\n12. Octavarium Octal\n\n");
    _printf("I never, wanted, to become [%o] someone like him\n", ui);

    /** PIRATE FORMAT*/
    printf("\n\n13. Shimber Me Timbers\n\n");
    _printf("\"And the first thing she said is: Who are %r?\"Adele\n");

    printf("\n\n\nEND OF TEST\n");
```

# AUTHORS
- María de los Ángeles "Kaky" Rodríguez Petrella

# SEE ALSO
- Printf for more information.