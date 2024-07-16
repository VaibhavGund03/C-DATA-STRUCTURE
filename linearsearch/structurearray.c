// linear search for int array
#include<stdio.h>
struct student{
    int roll_no;
    char name[20];

};
void get(struct student a[20],int n);
void display(struct student a[20],int n);
int linearSearch(struct student a[20],int n ,int key);
int main(){
    int i,n,key,ans;
    struct student a[20];
    printf("enter the number of element =\n");
    scanf("%d",&n);
    get(a,n);
    display(a,n);
    printf("enter the key to search = \n");
    scanf("%d",&key);
    ans = linearSearch(a,n,key);

    if(ans==-1)
    printf("element does not exist!\n");
else{
    printf("element is present at %d position\n",ans);
    printf("student name :%s\n",a[ans].name);


}
return 0;
}
void get(struct student a[20],int n){

    int i;
    printf("enter the number of student :-\n ");
    for(i=0;i<n;i++){
        printf("enter the roll no and name\n");
        scanf("%d %s",&a[i].roll_no,a[i].name);

    }
}
void display(struct student a[20],int n){
    int i;
    printf("student details are..\n");
    for(i=0;i<n;i++)
        printf("\n %d \t %s",a[i].roll_no,a[i].name);

    
}
   int linearSearch(struct student a[20],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(a[i].roll_no==key){
            return i;

        }
       
    }
    return -1;
   } 
    
