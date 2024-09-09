// c program to scroll the number until the loop
#include <stdio.h>
#include <unistd.h> // for usleep() function
// ANSI escape codes for colors
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"
int main() {
    int i = 1;
    int delay = 200000;  
    char *colors[] = {RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN};
    int num_colors = sizeof(colors) / sizeof(colors[0]);

    while (1) {  // Infinite loop to scroll numbers continuously
        printf("\r");  
      
        for (int j = 0; j < 50; j++) {
            printf("%s%d ", colors[(i + j) % num_colors], (i + j) % 100);
        }

        fflush(stdout);  // Flush the output to display immediately
        usleep(delay);   // Wait for the specified time
        i++;  // Increment the starting number
    }

    return 0;
}
