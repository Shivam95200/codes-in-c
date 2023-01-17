#include<stdio.h>
#include<conio.h>
/* Function prototype to check prime number */
int check_prime(int n);

/* Main function */
int main()
{
	 int number, i, flag=0;

	 // Inputs
	 printf("Enter integer number: ");
	 scanf("%d", &number);

	 // Function call and taking decision
	 if(check_prime(number)==1)
	 {
	  	printf("%d is PRIME.", number);
	 }
	 else
	 {
	  	printf("%d is NOT PRIME.", number);
	 }

	 return(0);
}


int check_prime(int n)
{
    int i, flag=0;
    for(i=2;i<=n/2; i++)
	 {
		  if(n%i==0)
		  {
			   return 0;
		  }
	 }
	 return 1;
}
