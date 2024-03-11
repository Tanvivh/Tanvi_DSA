#include<stdio.h>
#include<stdlib.h>
void read(int A[10][10],int m,int n);
void display(int A[10][10],int m,int n);
int calsum(int A[10][10],int m,int n);
main()
{
int A[10][10],i,j,psum=0,m,n;
printf("Enter order of the matrix\n");
scanf("%d%d",&m,&n);
if(m!=n)
{
printf("Invalid size of the matrix\n");
exit(0);
}
printf("Enter elements of the matrix\n");
read(A,m,n);
printf("Entered matrix is:\n");
display(A,m,n);
psum=calsum(A,m,n);
printf("Sum of principle diagonal elements is=%d\n",psum);
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
printf("\n");
}
return;
}
int calsum(int A[10][10],int m,int n)
{
int i,j,usum=0,lsum=0,psum=0;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
psum=psum+A[i][j];
else if(i<j)
usum=usum+A[i][j];
else
lsum=lsum+A[i][j];
}
}
printf("Sum of upper triangular elements is=%d\n",usum);
printf("Sum of lower triangular elements is=%d\n",lsum);
return(psum);
}
