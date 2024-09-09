#include<stdio.h>
#include<malloc.h>

typedef struct node{
    int info;
    struct node*next;
    
}NODE;
NODE*start,*newnode,*temp;
NODE*create(NODE*start){
    int n,i;
    printf("enter no of nodes :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode =(NODE *)malloc(sizeof(NODE));
        printf("enter the data :");
        scanf("%d",&newnode->info);
        newnode->next=NULL;
        if(start ==NULL)
        start =temp=newnode;
    else{
        temp->next=newnode;
        temp=newnode;
        
    }
    }
}