// insertaiton sort by using rand function

#include<stdio.h>
#include<stdlib.h>
void insertaiton_sort(int a[] ,int n)
{
int j,i, key,count;
for(j=1;j<n;j++)
{
    count=0;
    key=a[j];
    for(i=j-1;i>=0;i--)

    {
        count++;
        if(a[i]>key)
        {
            a[i+1]=a[i];

        }
        else 
        break;
     }
     a[i+1] =key;
     printf("count is: %d",count);

    }
}
int main()
{
    int a[20],i,n;
    printf("\n enter the number of element :-");
    scanf("%d",&n);
    printf("\n enter array element :- ");
    for(i=0;i<n;i++)
     a[i]= rand()%100;
    printf("unsorterd array....");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
  insertaiton_sort(a,n);
  printf("sorted array is :- ");
   for(i=0;i<n;i++)
    printf("%d\t",a[i]);



return 0;

}