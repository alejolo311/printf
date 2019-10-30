# _printf

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
- Support Standard Markdown / CommonMark and GFM(GitHub Flavored Markdown);
- Full-featured: Real-time Preview, Image (cross-domain) upload, Preformatted text/Code blocks/Tables insert, Code fold, Search replace, Read only, Themes, Multi-languages, L18n, HTML entities, Code syntax highlighting...;
- Markdown Extras : Support ToC (Table of Contents), Emoji, Task lists, @Links...;
- Compatible with all major browsers (IE8+), compatible Zepto.js and iPad;
- Support identification, interpretation, fliter of the HTML tags;
- Support TeX (LaTeX expressions, Based on KaTeX), Flowchart and Sequence Diagram of Markdown extended syntax;
- Support AMD/CMD (Require.js & Sea.js) Module Loader, and

# Tasks
## Task 0

| Specifier | Function name                    |
|:-------------:|:------------------------------:|
| %c      | `print_char()`       |
| %s   | `print_string()`     |
| %%   | `print_percen()`     |

## %c

- Support Standard Markdown / CommonMark and GFM(GitHub Flavored Markdown);
- Full-featured: Real-time Preview, Image (cross-domain) upload, Preformatted text/Code blocks/Tables insert, Code fold, Search replace, Read only, Themes, Multi-languages, L18n, HTML entities, Code syntax highlighting...;
- Markdown Extras : Support ToC (Table of Contents), Emoji, Task lists, @Links...;

### Test Cases
- [x] _printf("%c", NULL);
- [x] _printf("%c", 'A');
- [x] _printf("%c", 'A');

## %s

- Support Standard Markdown / CommonMark and GFM(GitHub Flavored Markdown);
- Full-featured: Real-time Preview, Image (cross-domain) upload, Preformatted text/Code blocks/Tables insert, Code fold, Search replace, Read only, Themes, Multi-languages, L18n, HTML entities, Code syntax highlighting...;
- Markdown Extras : Support ToC (Table of Contents), Emoji, Task lists, @Links...;

### Test Cases
- [x] _printf("%s", "holberton");
- [x] _printf("%ss", "holberton");
- [x] _printf("%s", "");
- [x] _printf("%s");


## %%

- Support Standard Markdown / CommonMark and GFM(GitHub Flavored Markdown);
- Full-featured: Real-time Preview, Image (cross-domain) upload, Preformatted text/Code blocks/Tables insert, Code fold, Search replace, Read only, Themes, Multi-languages, L18n, HTML entities, Code syntax highlighting...;
- Markdown Extras : Support ToC (Table of Contents), Emoji, Task lists, @Links...;

### Test Cases
- [x] _printf("%%");

[Files](https://github.com/alejolo311/printf/blob/master/_functions_0.c)

## Task 1

| Specifier | Function name                    |
|:-------------:|:------------------------------:|
| %d   | `print_d()`       |
| %i   | `print_i()`     |

## %d

- Support Standard Markdown / CommonMark and GFM(GitHub Flavored Markdown);
- Full-featured: Real-time Preview, Image (cross-domain) upload, Preformatted text/Code blocks/Tables insert, Code fold, Search replace, Read only, Themes, Multi-languages, L18n, HTML entities, Code syntax highlighting...;
- Markdown Extras : Support ToC (Table of Contents), Emoji, Task lists, @Links...;

### Test Cases
- [x] Task 1
- [x] Task 2
- [x] Task 3
- [x] Task 4
- [x] Task 5
- [x] Task 6
- [x] Task 7

## %i

- Support Standard Markdown / CommonMark and GFM(GitHub Flavored Markdown);
- Full-featured: Real-time Preview, Image (cross-domain) upload, Preformatted text/Code blocks/Tables insert, Code fold, Search replace, Read only, Themes, Multi-languages, L18n, HTML entities, Code syntax highlighting...;
- Markdown Extras : Support ToC (Table of Contents), Emoji, Task lists, @Links...;

### Test Cases
- [x] Task 1
- [x] Task 2
- [x] Task 3
- [x] Task 4
- [x] Task 5
- [x] Task 6
- [x] Task 7

[Files](https://github.com/alejolo311/printf/blob/master/_functions_1.c)

## Task 2

- Support Standard Markdown / CommonMark and GFM(GitHub Flavored Markdown);

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

# General Test Cases

- [x] printf(NULL);
- [x] printf("%");
