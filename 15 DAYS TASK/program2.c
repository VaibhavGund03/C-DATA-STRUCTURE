
// 1.write a c program to print the colour full text.

#include <stdio.h>

int main() {
    // ANSI escape codes for colors
    printf("\033[1;31m");  // Bold Red
    printf("This is red text\n");
    
    printf("\033[0;32m");  // Green
    printf("This is green text\n");
    
    printf("\033[0;33m");  // Yellow
    printf("This is yellow text\n");
    
    printf("\033[0;34m");  // Blue
    printf("This is blue text\n");
    
    printf("\033[0;35m");  // Magenta
    printf("This is magenta text\n");
    
    printf("\033[0;36m");  // Cyan
    printf("This is cyan text\n");
    
    printf("\033[0;37m");  // White
    printf("This is white text\n");
    
    printf("\033[1;30m");  // Bold Black (Gray)
    printf("This is bold black (gray) text\n");
    
    printf("\033[1;33m");  // Bold Yellow
    printf("This is bold yellow text\n");
    
    printf("\033[1;34m");  // Bold Blue
    printf("This is bold blue text\n");
    
    printf("\033[1;35m");  // Bold Magenta
    printf("This is bold magenta text\n");
    
    printf("\033[1;36m");  // Bold Cyan
    printf("This is bold cyan text\n");

    // Reset text color to default
    printf("\033[0m");

    return 0;
}
