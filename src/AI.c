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
  {
    return 0;
  }
}
