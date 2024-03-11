#include<stdio.h>
int factorial(int n);
main()
{


    int n,f;
    printf("enter n value\n");
    scanf("%d",&n);
    f=factorial(n);
    printf("factorial of %d no=%d\n",n,f);

}

int factorial(int n)
{
    int i=1,f=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    return f;
}
