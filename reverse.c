#include<stdio.h>
int rev(int n);
main()
{
    int n,r;
    scanf("%d",&n);
   r= rev(n);
   printf("reverse=%d\n",r);
}
int rev(int n)
{
    int rev=0,ld;
    while(n>0)
    {


       ld=n%10;
    rev=rev*10+ld;
    n=n/10;

    }
    return rev;
}
