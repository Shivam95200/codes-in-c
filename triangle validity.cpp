#include<stdio.h>
 
int main()
{
	int side1, side2, side3;
 
  	printf("\n Please Enter Three Sides of a Triangle : ");
  	scanf("%d%d%d", &side1, &side2, &side3);
  	
  	if( (side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2) )
  	{
  		printf("\n This is a Valid Tringle");
 	}
	else
	{
		printf("\n This is an Invalid Triangle");
	}  
 	return 0;
 }
