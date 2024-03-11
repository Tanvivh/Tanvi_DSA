#include<stdio.h>
#include<math.h>
main()
{
    int a,b;

    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
   a=a*b;
   b=a/b;
   a=a/b;
    printf("after swap a=%d b=%d",a,b);

}

