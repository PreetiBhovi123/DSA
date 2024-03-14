#include<stdio.h>
#include<math.h>
float simple_interest(float,float,float);
main()
{
    float p,t,r,si;
    int i=1,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("Enter the value of p,t,r\n");
        scanf("%p%t%r",&p,&t,&r);
        si=simple_interest(p,t,r);
        printf("Simple Interest=%f/n",si);
        i++;
    }
}
float simple_interest(float p,float t,float r);
(
    float si;
    si=(p*t*r)/100;
    return si;

)
