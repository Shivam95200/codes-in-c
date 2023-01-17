#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Str1[100];
  	int i;
 
  	printf("\n Please Enter a String that you want to Convert into Uppercase :  ");
  	gets(Str1);
  	
  	for (i = 0; Str1[i]!='\0'; i++)
  	{
  		if(Str1[i] >= 'a' && Str1[i] <= 'z')
  		{
  			Str1[i] = Str1[i] -32;
		}
  	}

  	printf("\n The given String in Upper Case = %s", Str1);
  	
  	return 0;
}

