#include<stdio.h>
void read(int[100][100],int,int);
void display(int[100][100],int,int);
void sum_row(int [100][100],int,int);
main()
{

    int a[100][100];
    int r,c;
    printf("enter the number of rows and colums\n");
    scanf("%d%d",&r,&c);
    read(a,r,c);
    display(a,r,c);
    sum_row(a,r,c);
}
void read(int a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void display(int a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void sum_row(int a[100][100],int r,int c)
{
    int i,j,s=0;
    for (i=0;i<r;i++)
    {
        s=0;
        for(j=0;j<c;j++)
        {
            s=s+a[i][j];
        }
        printf("sum of %d=%d\n",i,s);
    }
}
