#include <stdio.h>

struct employee {
    int emp_id, salary;
    char emp_name[20];
};

void get(struct employee a[20], int b);
void display(struct employee a[20], int b);
int linearSearch(struct employee a[20], int b, int key);

int main() {
    int b, key, ans;
    struct employee a[20];

    printf("Enter the number of employees: \n");
    scanf("%d", &b);

    get(a, b);
    display(a, b);

    printf("Enter the employee ID to search: \n");
    scanf("%d", &key);

    ans = linearSearch(a, b, key);

    if (ans == -1)
        printf("Employee does not exist\n");
    else {
        printf("Employee is present at position %d\n", ans + 1);
        printf("Employee name: %s\n", a[ans].emp_name);
    }

    return 0;
}

void get(struct employee a[20], int b) {
    int i;
    for (i = 0; i < b; i++) {
        printf("Enter the name, emp_id and salary of employee %d: \n", i + 1);
        scanf("%s %d %d", a[i].emp_name, &a[i].emp_id, &a[i].salary);
    }
}

void display(struct employee a[20], int b) {
    int i;
    printf("Employee details are:\n");
    for (i = 0; i < b; i++)
        printf("Name: %s, ID: %d, Salary: %d\n", a[i].emp_name, a[i].emp_id, a[i].salary);
}

int linearSearch(struct employee a[20], int b, int key) {
    int i;
    for (i = 0; i < b; i++) {
        if (a[i].emp_id == key) {
            return i;
        }
    }
    return -1;
}
