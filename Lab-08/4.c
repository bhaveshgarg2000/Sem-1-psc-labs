//even natural no and their sum

#include<stdio.h>
void even(int n);
void main()
{  int n;
	printf("Enter the number = ");
	scanf("%d",&n);
	even(n);        }
void even(int n)
{        int i,s=2,res=0;
	printf("The even number = ");
	for(i=1;i<=n;i++)
{        printf("%d ",s);
		res=res+s;
		s=s+2;   	}
	printf("\nSum of the number = %d",res);   }
