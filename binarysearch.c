#include<stdio.h>
#include<stdlib.h>
void read(int A[30],int n);
void display(int A[30],int n);
void Binary(int A[30],int n,int key);
main()
{
 int A[30],i,n,key,b=0;
 printf("Enter size of the array:\n");
 scanf("%d",&n);

 read(A,n);
 printf("Elements of the array are:\n");
 display(A,n);
 printf("\nEnter key element:\n");
 scanf("%d",&key);
 b=binary(A,n,key);
 if(b==1)
 printf("Search is successful!!!");
 else
 printf("Search not successful!!!");

}

void read(int A[30],int n)
{
 int i;
 for(i=0;i<n;i++)
    scanf("%d",&A[i]);
}

void display(int A[30],int n)
{
 int i;
 for(i=0;i<n;i++)
 printf("%d\t",A[i]);
}

int binary(int A[30],int n,int key)
{
 int low=0,high=n-1,mid;

 while(low<=high)
 {
 mid=(low+high)/2;
 if(key==A[mid])
    return (1);
 else if(key<A[mid])
high=mid-1;
 else
 low=mid+1;
 }

}
