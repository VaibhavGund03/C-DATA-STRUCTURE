#include <stdio.h>
#include <string.h>

void bubble_sort(char a[][100], int n) {
    int pass, i, swapcount, count = 0;
    char temp[100];
    for (pass = 1; pass < n; pass++) {
        count = 0;
        swapcount = 0;
        for (i = 0; i < n - 1; i++) {
            count++;
            if (strcmp(a[i], a[i + 1]) > 0) {
                strcpy(temp, a[i]);
                strcpy(a[i], a[i + 1]);
                strcpy(a[i + 1], temp);
                swapcount = 1;
            }
            
        }
        printf("\nComparisons: %d Pass: %d", count, pass);
        if (swapcount == 0)
            break;
    }
}

int main() {
    char a[20][100];
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%s", a[i]);

    bubble_sort(a, n);

    printf("\nSorted array is:\n");
    for (i = 0; i < n; i++)
        printf("%s\t", a[i]);

    return 0;
}
