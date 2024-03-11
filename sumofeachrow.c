#include<stdio.h>
void read(int a[10][10],int m,int n);
void print(int a[10][10],int m,int n);

void sum_row(int a[10][10],int m,int n);
main()
{

int a[10][10],m,n,m1;
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
sum_row(a,m,n);
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
void sum_row(int a[10][10],int m,int n)
{
    int i,j,rs[10];
    for(i=0;i<m;i++)
    {
        rs[i]=0;
        for(j=0;j<n;j++)
        {
            rs[i]=rs[i]+a[i][j];

        }
        printf("row sum=%d\n",rs[i]);
    }
}
