#include <stdio.h>

int main() {
    int i = 0, j = 0;
    char a[30], b[50], sd, ed;

    // Input data
    printf("Enter data into 1st array: ");
    scanf("%s", a);

    // Input starting delimiter
    printf("Enter starting delimiter: ");
    fflush(stdin); // Clear input buffer
    sd = getchar();

    // Input ending delimiter
    printf("Enter ending delimiter: ");
    fflush(stdin); // Clear input buffer
    ed = getchar();

    // Perform character stuffing
    b[i++] = sd; // Start with the starting delimiter

    // Copy characters from array 'a' to 'b', while checking for end of string
    for (j = 0; a[j] != '\0'; j++) {
        b[i++] = a[j];
    }

    b[i++] = ed; // End with the ending delimiter
    b[i] = '\0'; // Null-terminate the string

    // Output stuffed data
    printf("Stuffed data: %s\n", b);

    return 0;
}
