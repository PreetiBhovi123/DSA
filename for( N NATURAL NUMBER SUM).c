#include<stdio.h>
int sum(int);
main()
{
    int n,s;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    s=sum(n);
    printf("sum=%d",s);
}
int sum(int n)
{
    int s=0,i;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    return s;
}
