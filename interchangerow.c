#include<stdio.h>
void read(int a[10][10],int m,int n);
void print(int a[10][10],int m,int n);
void interchange_rows(int a[10][10],int m,int n);
void interchange_col(int a[10][10],int m,int n);
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
interchange_rows(a,m,n);
interchange_col(a,m,n);

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
void interchange_rows(int a[10][10],int m,int n)
{
    int i,j,p,q,temp;
    printf("Enter the number of two rows to be interchanged\n");
    scanf("%d %d",&p,&q);
    for(i=0;i<m;i++)
    {
       temp=a[p-1][i];
       a[p-1][i]=a[q-1][i];
       a[q-1][i]=temp;

    }
    printf("After interchanging\n");
    print(a,m,n);
}

void interchange_col(int a[10][10],int m,int n)
{
    int i,j,p,q,temp;
    printf("Enter the number of two columns to be interchanged\n");
    scanf("%d %d",&p,&q);
    for(j=0;j<m;j++)
    {
        temp=a[j][p-1];
       a[j][p-1]=a[j][q-1];
       a[j][q-1]=temp;


    }
    printf("After interchanging\n");
    print(a,m,n);
}
