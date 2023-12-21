#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 int n=101,m,cp=0,r;
 double s;
 while(cp<4)
 {
    r=0;
    m=n;
    s=0;
 while(m!=0)
 {
    r=m%10;
    s=s+pow(r,3);
    m=m/10;
 }
 if(s==n)
{
    printf("%d est un nombre d Amstrong \n",n);
    cp++;
}
    n++;
 }
 return 0;
}
