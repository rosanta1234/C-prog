
#include <stdbool.h> 
#include <stdio.h> 

bool checkYear(int year) 
{ 

	if (year % 400 == 0) 
		return true; 

 
	else if (year % 100 == 0) 
		return false; 

	else if (year % 4 == 0) 
		return true; 
	// if no above condition is satisfied, then it is not 
	// a leap year 
	return false; 
} 

// Driver code 
int main() 
{ 
	int year = 2000; 

	if (checkYear(year)) { 
		printf("Leap Year"); 
	} 
	else { 
		printf("Not a Leap Year"); 
	} 
	return 0; 
}
