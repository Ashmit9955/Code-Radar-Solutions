#include <stdio.h>
#include <string.h>

int main() {
    char ch[20];
    char ch1[20];

    fgets(ch, sizeof(ch), stdin);
    fgets(ch1, sizeof(ch1), stdin);

    // Handle both \n and \r\n line endings
    ch[strcspn(ch, "\r\n")] = '\0';
    ch1[strcspn(ch1, "\r\n")] = '\0';

    int n = strlen(ch);

    // Reverse ch in place
    for (int i = 0; i < n / 2; i++) {
        char temp = ch[i];
        ch[i] = ch[n - 1 - i];
        ch[n - 1 - i] = temp;
    }

    // Debug output
    printf("Reversed ch: %s\n", ch);
    printf("Original ch1: %s\n", ch1);

    if (strcmp(ch, ch1) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
