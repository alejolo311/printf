#ifndef HEADER_FILE
#define HEADER_FILE

typedef struct pf_struct {
	char *s;
	void (*f)(char *s);
} pf;
int _printf(const char *format, ...);
int _putchar(char s);




#endif
