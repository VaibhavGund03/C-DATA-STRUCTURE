#include <stdio.h>
#include <string.h>

int search(char a[][20], int n, char key[20]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i], key) == 0)
            return i;
    }
    return -1;
}

int main() {
    char a[20][20]; 
    int n, ans;
    char key[20];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++)
        scanf("%s", a[i]);

    printf("Enter the key to search: ");
    scanf("%s", key);

    ans = search(a, n, key);

    if (ans == -1)
        printf("String does not exist\n");
    else
        printf("String is present at position %d\n", ans + 1);

    return 0;
}
