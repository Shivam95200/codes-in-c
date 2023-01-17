#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int cpy=n;
	int sum=0;
	for(int i=1;i<n;i++){
		int rev=n%10;
		sum=sum*10+rev;
		n=n/10;
		if(n==0)
		break;
	}
	if(sum==cpy)
	printf("palindrome");
	else
	printf("not palindrome");
	return 0;
}
