# _printf

The project, _printf is the first major project that is built in the holberton school, is about building a function as similar as possible to the original function present in the standard library of programming language C, this is a challenge of some difficulty since the original function behaves in very specific ways in certain cases.

This project was built by Alejandro López and Juan Marcos Cabezas

# Table of Contents
1. [Authors](#Authors)
2. [Features](#Features)
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
