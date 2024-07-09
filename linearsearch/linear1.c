// linear search by using call by function

#include<stdio.h>

    void get(int a[20],int n);
    void display(int a[20],int n);
    int linearSearch(int a[20],int n ,int key);

int main(){
    int a[20],n,key,ans;
    printf("enter the number of element :- ");
scanf("%d",&n);

    get(a,n);
    display(a,n);
    printf("\n inter the key to search:- ");
    scanf("%d",&key);

    ans = linearSearch(a,n,key);

    if(ans== -1)
      printf("element does not exist");
    else
    printf("element is present at %d position ",ans+1);
return 0;

}
void get(int a[20],int n){
    int i;
    printf("\n enter the array element := ");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    
}

void display(int a[20],int n){
    int i;
      for(i=0;i<n;i++){
      printf("%d ",a[i]);
      }
      printf(" ");

}
int linearSearch( int a[20],int n ,int key){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key)
        return i;
    }
    return -1;

}