#include <stdio.h>

int main()
{
	char old_name[] = "fixi.txt";

	
	char new_name[] = "Don't open.txt";
	int value;

	
	value = rename(old_name, new_name);

	
	if (!value) {
		printf("%s", "File name changed successfully");
	}
	else {
		perror("Error");
	}
	return 0;
}
