#include<stdio.h>

int main()
{
 float a[100], temp;
 int i, j, n;
 
 printf("Enter n (>2):");
 scanf("%d", &n);
 /* Reading Array */
 printf("Enter numbers:\n");
 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i);
  scanf("%f",&a[i]);
 }
 /* Sorting array in ascending order */
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(a[i]>a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
 /* Displaying result */
 printf("Second smallest = %f ",a[1]);

 return(0);
}
