// 
#include <stdio.h>
#include <unistd.h>  // sleep();

void gotoxy(int x, int y) {
    printf("%c[%d;%df", 0x1B, y, x);
}
void setColor(int color) {
    printf("\033[1;%dm", color);
}
int main() {

    printf("\033[2J");

    gotoxy(1, 1);
    printf("Run");

    for (int i = 1; i <=20; i++) {
        
        gotoxy(1, i + 1);
       
        setColor(31 + (i % 7));

        printf("%d\n", i);

        sleep(1);
    }

    
    setColor(0);

    return 0;
}
