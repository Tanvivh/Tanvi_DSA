#include<stdio.h>

void Read (int A[10],int n);
void print (int A[10],int n);
void search(int A[10],int n);
main()
{
    int A[10];
    int n;
    printf("enter the limit\n");
    scanf("%d",&n);
    Read(A,n);
    print(A,n);
    search(A,n);
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
void search(int A[10],int n)
{
    int i,occ=0,key=3;
    for(i=0;i<n;i++)
    {
       if(key==A[i])
       {

       occ++;}

       else
        printf("Not found\n");
    }
    printf("occ=%d",occ);
}






