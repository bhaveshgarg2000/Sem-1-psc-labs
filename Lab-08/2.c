//multiplication

#include<stdio.h>
void mult(int);
int main()
{  int n;
printf("Input the number(Table to be calculated) : ");
scanf("%d",&n);
printf("\nMultiplication Table for %d is : \n",n);
mult(n);
return 0;  }
void mult(int n)
{  int j;
for(j=1;j<=10;j++)
{   printf("%d*%d = %d\n",n,j,n*j);   }  }
