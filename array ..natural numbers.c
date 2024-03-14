#include<stdio.h>
#define SIZE 5
void main()
{
    int num[SIZE], i;
    for (i=0;i<5;i++)
        scanf("%d",&num[i]);
}
{
    printf("the array numbers are");
    for(i=0;i<5;i++)
    {
        printf("%d",num[i]);
    }
}
