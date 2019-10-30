# _printf

The project, _printf is the first major project that is built in the holberton school, is about building a function as similar as possible to the original function present in the standard library of programming language C, this is a challenge of some difficulty since the original function behaves in very specific ways in certain cases.

This project was built by Alejandro López and Juan Marcos Cabezas

# Table of Contents
1. [Authors](#Authors)
2. [Features](#Features)
3. [How Use](#How-Use)
3. [Tasks](#Tasks)
4. [General Test Cases](#general-Test-Cases)

# Authors
 👤 **Alejandro López**

- Twitter: [@alejolo311](https://twitter.com/alejolo311)
- Github: [@alejolo311](https://github.com/alejolo311)

👤 **Juan Marcos Cabezas**

- Twitter: [@juanmarcab](https://twitter.com/juanmarcab)
- Github: [@juanmarcoscabezas](https://github.com/juanmarcoscabezas)

# Features
- The main function uses structures to call the function corresponding to the case, this allows greater code scalability.
- As in the original printf, the function has a buffer that stores and prints the output strings every 1024 bytes.
- Just like the original printf, the returns of our function are the number of characters printed, when the input is incorrect the return is error -1


# How Use

## How to compile

### Requirements

 - compile on Ubuntu 14.04 LTS
 - compile with gcc 4.8.4

### Main Example 

```c
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

```


### Flags

`$ gcc -Wall -Werror -Wextra -pedantic *.c`

##

# Tasks
## Task 0

| Specifier | Function name                    |
|:-------------:|:------------------------------:|
| %c      | `print_char()`       |
| %s   | `print_string()`     |
| %%   | `print_percen()`     |

## %c

- %c is about being able to print the individual characters that were passed as a parameter to the function.

### Test Cases
- [x] _printf("%c", NULL);
- [x] _printf("%c", 'A');
- [x] _printf("%c", 'A');

## %s

- %s is about being able to print strings, which are received as parameters to eh function.


### Test Cases
- [x] _printf("%s", "holberton");
- [x] _printf("%ss", "holberton");
- [x] _printf("%s", "");
- [x] _printf("%s");


## %%

- %% is about being able to print the the char % because being the indefinifier of printf specifiers could generate conflicts at the time of printing.

### Test Cases

- [x] _printf("%%");

[Files](https://github.com/alejolo311/printf/blob/master/_functions_0.c)

## Task 1

| Specifier | Function name                    |
|:-------------:|:------------------------------:|
| %d   | `print_d()`       |
| %i   | `print_i()`     |

## %d

- %d is about being able to print the integers that can be handled in the int variable, the smallest number is -2147483648 and the max is 2147483647

### Test Cases
- [x] _printf("%d",-2147483648);
- [x] _printf("%d", 2147483647);


## %i

- %i is about being able to print the integers that can be handled in the int variable, the smallest number is -2147483648 and the max is 2147483647


### Test Cases
- [x] _printf("%i",-2147483648);
- [x] _printf("%i", 2147483647);


[Files](https://github.com/alejolo311/printf/blob/master/_functions_1.c)

## Task 2

- [x] The Manual.

[Files](https://github.com/alejolo311/printf/blob/master/man_3_printf)


## Task Checklist

- [x] Task 1
- [x] Task 2
- [x] Task 3
- [x] Task 4
- [x] Task 5
- [x] Task 6
- [x] Task 7
- [ ] Task 8
- [ ] Task 9
- [ ] Task 10
- [ ] Task 11
- [ ] Task 12
- [ ] Task 13
- [x] Task 14
- [x] Task 15
- [ ] task 16 

# General Test Cases

- [x] printf(NULL);
- [x] printf("%");
