// binary linear search.
#include <stdio.h>

int search(int a[], int n, int key) {
    int mid, top, bottom;
    top = 0;
    bottom = n - 1;

    while (top <= bottom) {
        mid = (top + bottom) / 2;
        if (a[mid] == key)
            return mid;
        else if (key < a[mid])
            bottom = mid - 1;
        else
            top = mid + 1;
    }
    return -1;
}

int main() {
    int a[20], i, n, key, ans;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the sorted array elements: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the key to search: ");
    scanf("%d", &key);

    ans = search(a, n, key);

    if (ans == -1)
        printf("Element does not exist\n");
    else
        printf("Element is present at %d position\n", ans + 1);

    return 0;
}
