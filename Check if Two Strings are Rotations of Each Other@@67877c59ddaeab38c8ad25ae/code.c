#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Read both inputs as words (no spaces)
    scanf("%s", str1);
    scanf("%s", str2);

    int len = strlen(str1);

    // Reverse str1 into a new array
    char reversed[100];
    for (int i = 0; i < len; i++) {
        reversed[i] = str1[len - 1 - i];
    }
    reversed[len] = '\0';  // null-terminate the string

    // Debug output
    // printf("Reversed: %s\n", reversed);
    // printf("Second   : %s\n", str2);

    // Compare reversed string with second input
    if (strcmp(reversed, str2) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
