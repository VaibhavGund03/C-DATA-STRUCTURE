// singly linked list example

#include<stdio.h>
#include<malloc.h>

typedef struct node{
    int info;
    struct node *next;

}NODE;

NODE*start,*temp,*newnode;
NODE *create(NODE*start){
    int n,i;
    printf("enter the number of node :-");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode =(NODE * )malloc(sizeof(NODE));
        printf("enter the data = ");
        scanf("%d",&newnode->info);
        newnode->next=NULL;
        if(start ==NULL){
            start=temp=newnode;

        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    return start;

}
void display (NODE*start){
    for(temp=start;temp!=NULL;temp=temp->next){
        printf("\n%d  %u",temp->info,temp->next);

    }
}
int main(){
    start = NULL;
    start = create(start);
    display(start);
    return 0;
}