# <img src="https://www.holbertonschool.com/assets/holberton-logo-simplified-71b02868461c07d54553e4a7cc05d1926681a6755cc19030b0458f2d70ae9909.png" width="30"> 0x10: printf

**Authors: [Thomas Wang](https://www.linkedin.com/in/thomaspwang/) and [Tope Agboola](https://www.linkedin.com/in/olatopeagboola/)**

<img src ="http://s2.quickmeme.com/img/4f/4f9e885668edd8f562142dbff6379b6a7edd6864afd158acbc88f533c87592f2.jpg" width
="300">

## Printf
### Synopsis

Write your own printf function

## Table of Contents

* [Resources](#resources)
* [Requirements](#requirements)
* [Compilation](#compilation)

## Resources

man 3 `printf`. [Secrets of printf](http://www.cypress.com/file/54761/download)

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS using `gcc 4.8.4` (`C90`)
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc... is forbidden
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
- In the following examples, the `main.c` files are showed as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one showed in the examples
- The prototypes of all your functions should be included in your header file called `holberton.h`
- Don't forget to push your header file
- All your header files should be include guarded
- Authorized functions and macros:
  - `write` (`man 2 write`)
  - `malloc` (`man 3 malloc`)
  - `free` (`man 3 free`)
  - `va_start` (`man 3 va_start`)
  - `va_end` (`man 3 va_end`)
  - `va_copy` (`man 3 va_copy`)
  - `va_arg` (`man 3 va_arg`)
- Note that we will not provide the `_putchar` function for this project

## Compilation
- Your code will be compiled this way:
- ```$ gcc -Wall -Werror -Wextra -pedantic *.c```
- As a consequence, be careful not to push any c file containting a `main` function in the root directory of your project (you could have a test folder containing all your `tests` files including `main` functions)
- Our main files will include your main header file (`holberton.h`): `#include holberton.h`
- You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`. Example of test file that you could use:
<pre><code>alex@ubuntu:~/c/printf$ cat main.c 
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
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$</pre></code>

- We strongly encourage you to work all together on a set of tests
- If the task does not specify what to do with an edge case, do the same as `printf`

## Project Breakdown

| Task # | Type | Short description |
| ---: | --- | --- |
| 0 | Mandatory | Write a function that produces output according to a format
| 1 | Mandatory | Handle the following conversion specifiers: `d`, `i` |
| 2 | Mandatory | Create a man page for you function |
| 3 | Advanced | Handle the following custom conversion specifiers: `b` - the unsigned int argument is converted to binary |
| 4 | Advanced | Handle the following conversion specifiers: `u`, `o`, `x`, `X` |
| 5 | Advanced | Use a local buffer of 1024 chars in order to call `write` as little as possible. |
| 6 | Advanced | Handle the following custom conversion specifier: `S`. `\x` |
| 7 | Advanced | Handle the following conversion specifier: p. |
| 8 | Advanced | Handle the following flag characters for non-custom conversion specifiers: `+`, `#` |
| 9 | Advanced | Handle the following length modifiers for non-custom conversion specifiers: `l`, `h` |
| 10 | Advanced | Handle the field width for non-custom conversion specifiers. |
| 11 | Advanced | Handle the precision for non-custom conversion specifiers. |
| 12 | Advanced | Handle the 0 flag character for non-custom conversion specifiers. |
| 13 | Advanced | Handle the `-` flag character for non-custom conversion specifiers. |
| 14 | Advanced | Handle the following custom conversion specifier: `r` |
| 15 | Advanced | Handle the following custom conversion specifier: `R` |
| 16 | Advanced | All the above options work well together. |
