#include <stdio.h>

int main() {
  
    FILE *file = fopen("output.txt", "w");  

    if (file == NULL) {
        printf("Error!\n");
        return 1;
    }

    fprintf(file, "Hello, this is a test file.\n");
    printf("Data written successfully.\n");

    
    fclose(file);  
    return 0;
}
