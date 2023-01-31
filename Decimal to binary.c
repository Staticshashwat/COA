#include<stdio.h>
int main()
{
    int n,r,m;
    int sum=0;
    printf("enter the number");
    scanf("%d",&n);
    m=1;
    while(n!=0)
    {
        r=n%2;
        n=n/2;
        sum=sum+r*m;
        m=m*10;
    }
    printf("binary number is=%d",sum);
    
}
