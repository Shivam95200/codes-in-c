#include<stdio.h>

int main()
{
 int number;
 printf("Enter number: ");
 scanf("%d", &number);

 /* Checking Even or Odd */
 if (number & 1)
 {
  printf("%d is Odd.", number);
 }
 else
 {
  printf("%d is Even.", number);
 }

 return 0;
}
