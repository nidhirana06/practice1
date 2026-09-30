// objective: TO FIND FACTORIAL OF GIVEN NO.
// !5 -> 
#include <stdio.h>

int main()
{
	int a, b, c, n;
	
	printf("Enter value to find factorial :");
	
	scanf("%d", &a);
	
	printf("\n\nFactors of %d are :", a);
	
	n = c = a;
	for(b = 1; b <= c; b++)
	{
		printf("\n%d * %d", a, b);		
		n = a*b;
		a -= 1;
	}
	printf("\nTotal : %d", n);
	
	return 0;
}
