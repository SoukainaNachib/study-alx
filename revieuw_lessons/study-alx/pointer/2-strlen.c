#include "main.h"
#include <stdio.h>
#include <string.h>

int _strlen(char *s){
	int str;
	for(str=0; *s != '\0' ; str++){
		s++;
	}
		return (str);

}
