#include<stdio.h>
void Read (int A[10],int n);
void print (int A[10],int n);
void odd_even_sum(int A[10],int n);
main()
{
    int A[10];
    int n;
    printf("enter the limit\n");
    scanf("%d",&n);
    Read(A,n);
    print(A,n);
    odd_even_sum(A,n);
}
void Read (int A[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

}
void print (int A[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\n",A[i]);

}
void odd_even_sum(int A[10],int n)
{
    int i,osum=0,esum=0;
    for (i=0;i<n;i++)
    {
        if(A[i]%2==0)
        esum=esum+A[i];
        else
            osum=osum+A[i];
    }
    printf("Sum of odd elements=%d\n",osum);
    printf("Sum of even elements=%d\n",esum);


}
