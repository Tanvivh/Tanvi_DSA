#include<stdio.h>

int count_neg(int N);
main()
{
    int N,c;
    printf("Enter value for N\n");
    scanf("%d",&N);
    c=count_neg(N);
    printf("Count of negative num=%d\n",c);

}
int count_neg(int N)
{
    int c=0,i,num;
    for(i=1;i<=N;i++)
    {
        scanf("%d",&num);
        if(num<0)
        c++;

    }
    return c;
}
