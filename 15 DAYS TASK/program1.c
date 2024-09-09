#include <stdio.h>

void printWithColor(int number, const char* color) {
    printf("%s%d\033[0m", color, number); // Reset color at the end
}

int main() {
    int runnableNumber = 42; // Example number
    
    // ANSI color codes
    const char* RED = "\033[1;31m";
    const char* GREEN = "\033[1;32m";
    const char* YELLOW = "\033[1;33m";
    const char* BLUE = "\033[1;34m";
    const char* MAGENTA = "\033[1;35m";
    const char* CYAN = "\033[1;36m";

    printf("Runnable number in different colors:\n");
    printWithColor(runnableNumber, RED);
    printf(" (Red)\n");
    
    printWithColor(runnableNumber, GREEN);
    printf(" (Green)\n");

    printWithColor(runnableNumber, YELLOW);
    printf(" (Yellow)\n");

    printWithColor(runnableNumber, BLUE);
    printf(" (Blue)\n");

    printWithColor(runnableNumber, MAGENTA);
    printf(" (Magenta)\n");

    printWithColor(runnableNumber, CYAN);
    printf(" (Cyan)\n");

    return 0;
}
