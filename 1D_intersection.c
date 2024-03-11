#include<stdio.h>
void read(int a[10],int n);
void print(int a[10],int n);
int intersection(int a[10],int b[10],int c[10],int n,int m);
main()
{
    int a[10],b[10],c[10],m,n,k;
    printf("enter size of set 1\n");
    scanf("%d",&m);
    read(a,m);
    printf("enter size of set 2\n");
    scanf("%d",&n);
    read(b,n);
    k=intersection(a,b,c,n,m);
    printf("intersection among two sets\n");
    print(c,k);

}
void read(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void print(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
int intersection(int a[10],int b[10],int c[10],int n,int m)
{
    int i,j,k=0;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        if(a[i]==b[j])
    {
        c[k]=a[i];
        k++;
    }
return k;

}





//call print in main other option,k shld be returned
