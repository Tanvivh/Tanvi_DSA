#include<stdio.h>

int main()
{

int a,b;
char op;
float res;
printf("Enter the operator and two operands\n");
scanf("%c %d %d",&op,&a,&b);

switch(op)
{
    case '+':res=a+b;
             break;

    case '-':res=a-b;
             break;

     case '*':res=a*b;
             break;

     case '%':res=a%b;
             break;

     case '/':if (b==0)
            {

            printf("Divide by zero error\n");
             exit(0);
            }
         else
             res=(float)a/b;
             break;

    default:printf("Invalid arithmetic operator\n");
    exit(0);
}

  printf("result=%f\n",res);

}
