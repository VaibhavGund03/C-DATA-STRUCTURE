// c program to get the rows number from the user and print the colourfull pattern 
#include<stdio.h>
//ANSI CODES
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN "\x1B[36m"
# define RESET "\x1B[0m"

// main function 
int main(){
    // declaration 
    int rows,i,j;

    // input process

    printf("Enter the number of rows :- ");
    scanf("%d",&rows);
// loop for print the pattern
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            // conditions for colours

            if(j% 6==1){
                printf(RED "*"RESET);

           }  else if(j% 6 ==2){
                printf(GREEN "*"RESET);
              }
               else if(j% 6 ==3){
                 printf(YELLOW "*"RESET);

                } 

                else if(j% 6 ==2){
                 printf(BLUE "*"RESET);

                } 
                else if(j% 6 ==2){
                 printf(MAGENTA "*"RESET);
                }

                else {
                 printf(CYAN "*"RESET);

                }    
            }
            printf("\n");

        } 
        return 0;
    }

