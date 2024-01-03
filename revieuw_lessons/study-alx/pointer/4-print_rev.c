#include "main.h"

void print_rev(char *s)
{
	
	while(*s !='\0'){
		s++;
	}

	while(*s >= 0){
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
