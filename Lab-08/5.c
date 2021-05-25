//factorial

#include<stdio.h>
void main()
{   int num,res;
printf("Enter the number=");
scanf("%d",&num);
printf("factoial = %d \n",fact(num));   }
int fact(int a)
{   int i,f=1;
for(i=1;i<=a;i++){
f=f*i;    }
return f; }

