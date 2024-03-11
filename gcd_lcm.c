#include<stdio.h>
int gcd(int m,int n);
main()
{

    int m,n,g,lcm;
    printf("enter value of m and n\n");
    scanf("%d %d",&m,&n);
    g=gcd(m,n);
    lcm=(m*n)/g;
    printf("gcd of two numbers=%d\n",g);
    printf("lcm of two numbers=%d",lcm);

}
int gcd(int m,int n)
{
    int t;
    while(n>0)
    {
        t=m%n;
        m=n;
        n=t;
    }
    return m;
}
