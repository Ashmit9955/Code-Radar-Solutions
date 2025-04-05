#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];
    
    // Take input with fgets to allow spaces and ensure full lines
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters, if present
    str1[strcspn(str1, "\r\n")] = '\0';
    str2[strcspn(str2, "\r\n")] = '\0';

    // Reverse str1 into a new array
    int len = strlen(str1);
    char reversed[101];
    for (int i = 0; i < len; i++) {
        reversed[i] = str1[len - 1 - i];
    }
    reversed[len] = '\0';

    // Compare reversed str1 with str2
    if (strcmp(reversed, str2) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
