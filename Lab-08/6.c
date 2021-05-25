//fibonacci series

#include <stdio.h>
void fact(int n);
void main()
{             int n;
	printf("Enter the number = ");
	scanf("%d",&n);
	fact(n);  }
void fact(int n)
{             int i, t1 = 0, t2 = 1, nextTerm;
	printf("Fibonacci Series: ");
	for (i = 1; i <= n; ++i) {
	printf("%d, ", t1);
	nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;    }
	printf("\n");   }
