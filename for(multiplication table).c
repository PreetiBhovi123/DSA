#include<stdio.h>
void MT(int);
main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    MT(n);
}
void MT(int n)
{
    int i,t;
    for(i=1;i<=10;i++)
    {
        t=i*n;
        printf("%d*%d=%d\n",i,n,t);
    }
}
