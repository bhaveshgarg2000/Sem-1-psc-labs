//display odd no and sum of odd natural no

#include<stdio.h>
void odd(int n);
void main()
{   int n;
printf("ENter the number = ");
scanf("%d",&n);
odd(n);   }
void odd(int n)
{   int i,s=1,res=0;
 printf("The odd number = ");
for(i=1;i<=n;i++){
printf("%d ",s);
res=res+s;
s=s+2;  }
printf("\nSum of the number = %d",res);   }

