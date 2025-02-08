#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void printWithDelay(const char *str, unsigned int delay) {
    while (*str) {
        putchar(*str++);
        fflush(stdout);
        usleep(delay * 1000);  // Convert to microseconds
    }
}

void printHeart() {
    printf("\033[1;31m");  // Set text color to bright red
    printf("    .::::::::..     ..::::::::.    \n");
    printf("  .:::::::::::::. .:::::::::::::.  \n");
    printf(" ::::::::::::::::.:::::::::::::::: \n");
    printf(" ::::::::::::::::::::::::::::::::: \n");
    printf(" ::::::::::::::::::::::::::::::::' \n");
    printf("  `:::::::::::::::::::::::::::::'  \n");
    printf("    `:::::::::::::::::::::::::'    \n");
    printf("      `::::::::::::::::::::::'     \n");
    printf("        '::::::::::::::::::'       \n");
    printf("          '::::::::::::::'         \n");
    printf("            '::::::::::'           \n");
    printf("              '::::::'             \n");
    printf("                '::'               \n");
    printf("                 `'                \n");
    printf("\033[0m");  // Reset text color
}

int main() {
    system("clear");  // Clear screen (use "cls" for Windows)
    
    printHeart();
    printf("\n");
    
    printWithDelay("My dearest valentine...\n\n", 100);
    usleep(1000000);  // Pause for dramatic effect
    
    printWithDelay("Every moment with you makes my heart skip a beat,\n", 50);
    printWithDelay("Your smile brightens my darkest days,\n", 50);
    printWithDelay("And your love fills my life with complete joy.\n\n", 50);
    
    usleep(500000);
    
    printWithDelay("Will you be my Valentine?\n\n", 100);
    
    printf("\033[1;31m");  // Red color
    printWithDelay("With all my love,\n", 50);
    printWithDelay("[Your Name]\n", 50);
    printf("\033[0m");  // Reset color
    
    return 0;
}
