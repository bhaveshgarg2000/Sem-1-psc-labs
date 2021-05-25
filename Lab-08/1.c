//cube of a number

#include<stdio.h>
int cube(int a);
int main()
{   int a,c;
printf("Enter a number : ");
scanf("%d",&a);
c=cube(a);
printf("cube of %d is %d",a,c);
return 0;   }

int cube(int a)
{  return(a*a*a);   }


