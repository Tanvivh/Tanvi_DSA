#include<stdio.h>
#include<math.h>
void fib(int n);
main()
{
    int n;
    scanf("%d",&n);
    fib(n);

}
void fib(int n)
{
int a=-1,b=1,i,c;
for(i=1;i<=n;i++)
{
    c=a+b;
    printf("%d\n",c);
    a=b;
    b=c;
}
}
