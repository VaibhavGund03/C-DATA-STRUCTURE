// c program to create a student form with input  name, age,grade,course
#include <stdio.h>
#include <stdlib.h>  // For system("clear") and getchar()

// ANSI escape codes for colors
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"
#define RESET   "\x1B[0m"

struct Student {
    char name[50];
    int age;
    char grade[5];
    char course[50];
};

int main() {
    struct Student student;

    // Form header
    printf(CYAN "========== Student Registration Form ==========\n" RESET);

    printf(GREEN "Enter your name: " RESET);
    fgets(student.name, sizeof(student.name), stdin);

    
    printf(YELLOW "Enter your age: " RESET);
    scanf("%d", &student.age);
    getchar(); 

  
    printf(MAGENTA "Enter your grade : " RESET);
    fgets(student.grade, sizeof(student.grade), stdin);
     

   
    printf(BLUE "Enter your course: " RESET);
    fgets(student.course, sizeof(student.course), stdin);

    
    printf(GREEN "\nPress 'Enter' to submit the form..." RESET);
    getchar();  

  
    system("clear");  
  

    printf(CYAN "========== Submission Successful ==========\n" RESET);
    printf(RED "Name: " RESET "%s", student.name);
    printf(RED "Age: " RESET "%d\n", student.age);
    printf(RED "grade: " RESET "%s", student.grade);
    printf(RED "Course: " RESET "%s", student.course);

    return 0;
}
