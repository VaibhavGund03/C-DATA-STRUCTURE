// circular singly linkedlist porgram

#include<stdio.h>
#include<malloc.h>

typedef struct node{
    int info;
    struct node *next;
} NODE;

NODE* start, *temp, *newnode;
NODE *create(NODE* start) {
    int n, i;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data: ");
        scanf("%d", &newnode->info);
        newnode->next = NULL;

        if(start == NULL) {
            start = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

   
    temp->next = start;

    return start;
}

void display(NODE* start) {         
    temp = start;
    
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }

    do {
        printf("\n%d  %u", temp->info, temp->next);
        temp = temp->next;
    } while (temp != start); 
    

}

int main() {
    start = NULL;
    start = create(start);
    display(start);
    return 0;
}
