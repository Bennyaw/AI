#include <stdio.h>
#include <string.h>
#include "AI.h"


int stringCompare(char *str1 ,char *str2)
{
	if ((str1 == 0 || str1 == '\0') || (str2 == 0 || str2 == '\0'))
	{
	return 2; // 2 means error input
	}
	else
	{
		int count1 = 0;
		int count2 = 0;

		while (str1[count1] != '\0') //count strlength1
		{
			count1++;
		}

		while (str2[count2] != '\0') //count strLength2
		{
			count2++;
		}
	}

		char *c1, *c2;
		c1 = malloc(count1+1);
		c2 = malloc(count2+1);



}

char *speakToAiMachine(char *msg)
{
	return NULL;
}
