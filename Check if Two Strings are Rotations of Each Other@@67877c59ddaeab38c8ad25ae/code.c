#include <stdio.h>
#include <string.h>

int main() {
    char ch[100], ch1[100];

    // Read the two input strings
    scanf("%s", ch);
    scanf("%s", ch1);

    // Make a copy of ch to reverse
    char rev[100];
    strcpy(rev, ch);

    // Reverse rev
    int n = strlen(rev);
    for (int i = 0; i < n / 2; i++) {
        char temp = rev[i];
        rev[i] = rev[n - 1 - i];
        rev[n - 1 - i] = temp;
    }

    // Compare reversed ch with ch1
    if (strcmp(rev, ch1) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
