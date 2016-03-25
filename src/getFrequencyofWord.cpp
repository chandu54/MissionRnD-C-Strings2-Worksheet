/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<malloc.h>
#include<string.h>
char result[25];
char* subfunction(char*str, int i, int j)
{
	int index = 0;
	while (i <= j)
	{
		result[index] = str[i];
		index++;
		i++;
	}
	result[index] = '\0';
	return result;
}
int count_word_in_str_way_1(char *str, char *word){
	int len = strlen(word), i = 0, c = 0, j, k;
	char *subword;
	subword=(char*)malloc(sizeof(char)*len);
	while (str[i] != '\0')
	{
		if (str[i] == word[0])
		{
			j = i + len - 1;
			strcpy(subword, subfunction(str, i, j));
			k = strcmp(word, subword);
			if (k == 0)
				c++;
		}
		i++;
	}
	return c;
}
int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

