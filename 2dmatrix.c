#include<stdio.h>
#include<stdlib.h>
void read(int A[10][10],int m,int n);
void display(int A[10][10],int m,int n);
int sum(int A[10][10],int m ,int n);
main()
{
 int A[10][10],i,n,m,p;
 printf("Enter size of the array:\n");
 scanf("%d %d",&m,&n);
if(m!=n)
{
printf("Invalid size of the matrix\n");
exit(0);
}
 read(A,m,n);

 display(A,m,n);

 p=sum(A,m,n);
printf("principle diagonal sum is %d:",p);
}

void read(int A[10][10],int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
    scanf("%d",&A[i][j]);
}

void display(int A[10][10],int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
   {
for(j=0;j<n;j++)
 printf("%d\t",A[i][j]);
 printf("\n");}
}

int sum(int A[10][10],int m ,int n)
{
    int i,j,s=0;

        for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        if(i==j)
        s=s+A[i][j];

    return s;

}
