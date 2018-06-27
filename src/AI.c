#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>
#include "AI.h"


int stringCompare(char *str1 ,char *str2)
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
    
	
   if (count1 != count2)       // to make sure 2 string have same length
  { 
    return 0;
  }
  else
  { 

    int start = 0;    
   
    while(start < count1)
    {
      if(toupper(str1[start]) == toupper(str2[start]))
      {
        start++;               //counter to get out the loop
      }
      else
      {
        return 0;
      }
      
      
    }
    
    return 1;
  }
 }
  
  
char *speakToAiMachine(char *msg)
{
  
  if(stringCompare(msg,"hi") || stringCompare(msg,"hey") || stringCompare(msg,"hello") || stringCompare(msg,"greetings"))
  { 
    return "Hi there! My name is TheMachine. What is yours?";
  }
  else if(stringCompare(msg,"bye"))
  {
    return "Goodbye. Have a nice day";
  }
  else if(stringContain(msg,"My Name is ") == 1)
  {
	char*reply;
    reply = malloc(strlen(concatenateStrings("My name is",extractName(msg))));
    reply = concatenateStrings("Nice to meet you,",extractName(msg));
	
    return reply;  
  }
  else
  {
    return 0;
  }
}


char *extractName(char *name)
{
	char *name_copy;
	int i=0;
	name_copy = malloc(strlen(name)+1);
	
	for(i=0; i<strlen(name)-11; i++)
	{
		name_copy[i] = name[i+11];
	}
	
	name_copy[i] = '\0';
	
	return name_copy;
	
}

int stringContain(char *str1, char *str2)
{
	int i =0;
	while(i<11) 
	{
		if (toupper(str1[i]) == toupper(str2[i]))
		{
			i++;
		}
		else
		{
			return 0;
		}
	}
	
	return 1;
}

char *concatenateStrings(char *str1,char *str2)
{
  char *newstr;
  newstr = malloc(strlen(str1)+strlen(str2)+1);
  
  strcpy(newstr,str1);
  strcat(newstr," ");
  strcat(newstr,str2);
  
  
  return newstr;
}


