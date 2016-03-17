/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	char *newstring;
	int index = 0, len, newindex = 0;
		while (str[index] != '\0')
			index++;
		len = index;
		while (str[index] != ' '&&str[index]!='\0')
			index--;
		newstring = (char*)malloc(sizeof(char)*(len - index));
		while (index <= len)
		{
			newstring[newindex] = str[index];
			index++;
			newindex++;
		}
		return newstring;
	}

