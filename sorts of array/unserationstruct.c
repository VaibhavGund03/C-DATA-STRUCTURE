#include<stdio.h>
#include<stdlib.h>
struct employee{
    int emp_no;
    char name[30];
    int age;

};
void insertaiton_sort(struct employee a[],int n)
{
    int j,i,count;
    for(j=1;j<n;j++){
        count =0;
        key =a[j];
        for(i=j-1;i>=0;i--){
            count++;
            if(a[i].key)
            {
                a[i+1]=a[i];

            }
            else 
            break;

        }
        a[i+1] =key;
        printf("count is :%d",count);

    }
}
int main(){
    int a [20],i,n;
    printf("enter the number of element:-");
    scanf("%d",&n);
    printf("\n enter array element");

    for(i=0;i<n;i++)
    a[i] = rand()%100;
printf("unsorted array...");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
insertaiton_sort(a,b);
printf("sorted array is :-");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
