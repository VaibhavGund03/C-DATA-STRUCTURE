// linear search in array string.

#include <stdio.h>
#include<string.h>

void get(char a[10][20], int n);
void display(char a[10][20], int n);
int linearSearch(char a[10][20], int n, char key[20]);

int main() {
   char a[10][20];
   int n;
   char key[20];
   int ans;
   int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    get(a, n);
    display(a, n);
    printf("\nEnter the key to search: ");
    scanf("%s", &key);

    ans = linearSearch(a, n, key);

    if (ans == -1)
        printf("Element does not exist\n");
    else
        printf("Element is present at position %d\n", ans );

    return 0;
}

void get(char a[10][20], int n) {
    int i;
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%s", &a[i]);
    }
}

void display(char a[10][20], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%s ", a[i]);
    }
 
}

int linearSearch(char a[10][20], int n, char key[20]) {
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(a[i] , key)==0)
            return i;
    }
    return -1;
}
