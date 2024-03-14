#include<stdio.h>
void read(int[100][100],int,int);
void display(int[100][100],int,int);
void display_upp(int a[100][100],int , int);
void sum_upp(int [100][100],int,int);
void display_low(int a[100][100],int , int);
void sum_low(int [100][100],int,int);
main()
{

    int a[100][100];
    int r,c;
    printf("enter the number of rows and colums\n");
    scanf("%d%d",&r,&c);
    read(a,r,c);
    display(a,r,c);
    display_upp(a,r,c);
    sum_upp(a,r,c);
    display_low(a,r,c);
    sum_low(a,r,c);
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
            printf("%d    ",a[i][j]);
        }
        printf("\n");
    }
}
void display_upp(int a[100][100],int r , int c)
{
    int i,j;
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (i<j)
            {
                printf("%d   ",a[i][j]);
            }
        }
    }
}
void sum_upp(int a[100][100], int r,int c)
{
    int i,j,s=0;
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (i<j)
            {
              s=s+a[i][j];
            }
        }
        printf("\n");
    }
}
void display_low(int a[100][100],int r , int c)
{
    int i,j;
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (i>j)
            {
                printf("%d   ",a[i][j]);
            }
        }
    }
}
void sum_low(int a[100][100], int r,int c)
{
    int i,j,s=0;
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (i>j)
            {
              s=s+a[i][j];
            }
        }
        printf("\n");
    }
}
