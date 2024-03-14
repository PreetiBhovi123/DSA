#include<stdio.h>
void read(float[], int);
void display(float[],int);
main()
{
    int n;
    float m[100];
    printf("enter tne value of n\n");
    scanf("%d",&n);
    read(m,n);
    display(m,n);

}
void read(float m[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&m[i]);
    }
}
void display(float m[100], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%f\n",m[i]);
    }
}
