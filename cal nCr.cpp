#include <stdio.h>
 
int fact(int num);
 
int main()
{
    int n, r, ncr_var;
 
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\nEnter the value of r:");
    scanf("%d", &r);
    /* ncr is also represented as C(n,r), the formula is:
     * C(n,r) = n! / ( r!(n - r)! ). For 0 <= r <= n.
     */
    ncr_var = fact(n) / (fact(r) * fact(n - r));
    printf("\nThe value of C(%d,%d) is: %d",n,r,ncr_var);
}
/* This function is used to find the 
 * factorial of given number num
 */
int fact(int num)
{
    int k = 1, i;
    // factorial of 0 is 1
    if (num == 0)
    {
        return(k);
    }
    else
    {
        for (i = 1; i <= num; i++)
    {
            k = k * i;
	}
    }
    return(k);
}
