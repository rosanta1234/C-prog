

#include <stdio.h>
int main()
{
	int i, s = 0;
	int n = 10;
	i = 1;

	while (i <= n) {
	
		// adding natural numbers 
		// up to given number n
		s += i;
		i++;
	}
	// printing the result
	printf("Sum = %d", s);
	return 0;
}
