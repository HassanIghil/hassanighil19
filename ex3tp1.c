#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 int n,A=1,B,i;
 printf("entrer un nombre n:\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    B=A;
        if(i%2==0)
         A=2*B;

        else 
        A=2*B+1;
 }
   printf("resultat est :%d\n",A);

 return 0;
}