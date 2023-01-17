#include<stdio.h>
int main()
{
	int i,j,ar[10],temp;
	printf("Enter array of 10:-\n");
	for(i=0;i<=9;i++)
	{
		printf("ar[%d]=",i);	
		scanf("%d",&ar[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9-i;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;				
			}
		}
	}
	printf("Sorted array:-");
	for(i=0;i<=9;i++)
	{
		printf("\n%d",ar[i]);			
	}
}
