#include<stdio.h>
void read(int a[10][10],int m,int n);
void print(int a[10][10],int m,int n);
void add(int a[10][10],int b[10][10],int c[10][10],int m,int n);
main()
{

int a[10][10],m,n;
int b[10][10] ,c[10][10];
printf("Enter the order of the matrix\n");
scanf("%d%d",&m,&n);
if(m!=n)
{
    printf("not a square matrix\n");
    exit(0);
}
printf("Enter elements of a matrix\n");
read(a,m,n);
print(a,m,n);
read(b,m,n);
print(b,m,n);
add(a,b,c,m,n);
}
void read(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {


    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    }

}

void print(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    printf("%d \t",a[i][j]);
    printf("\n");

}}
void add(int a[10][10],int b[10][10],int c[10][10],int m,int n)

{
    int i,j;

    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
       c[i][j]=a[i][j]+b[i][j];
    }
    }
    print(c,m,n);
    }


