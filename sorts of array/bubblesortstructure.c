// bubble sort by using structure of array.

#include <stdio.h>

struct employee {
    int emp_no;
    char name[30];
    int age;

};


void bubble_sort(struct employee a[10],int n) {
    int pass, i;
    struct employee temp;
    for (pass = 1; pass <n;pass++) {
        for(i=0;i<n-pass;i++)
        {
            if(a[i].age>a[i+1].age){
             temp=a[i];
             a[i]=a[i+1];
             a[i+1]=temp;

            }
        }

    }
}

int main(){
    int i,n;
    struct employee a[10];
    printf("enter hte number of element");
    scanf("%d",&n);
    
    printf("\n enter the array element id name age :-");
    for(i=0;i<n;i++)

    scanf("%d %s %d",&a[i].emp_no,&a[i].name,&a[i].age);
    bubble_sort(a,n);
    printf("sorted srrrsy is:-");
    for(i=0;i<n;i++)
    printf("\n%d\t%s\t%d",a[i].emp_no,a[i].name,a[i].age);
return 0;


    }
