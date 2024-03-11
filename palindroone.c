#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void pal(int l,int k);
int main()
{

    int l,k;
    scanf("%d%d",&l,&k);
    if(l<=0||k<=0||l<k)
        printf("Invalid L and K");
    else
      pal(l,k);
        return 0;

}
void pal(int l,int k)
               {
                   int rev,t,d;
                   while(l<=k)
                   {
                       t=l;rev=0;
                       while(t>0)
                       {
                           d=t%10;
                           rev=rev*10+d;
                           t=t/10;
                       }

                       if(rev==l)
                           printf(" palindrome = %d\n",l);
                       l++;

                   }
               }
