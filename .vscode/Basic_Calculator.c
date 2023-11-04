#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y);
void mainMenu();

void mainMenu()
{
    printf("╔══════════════════════╗\n");
    printf("║      MAIN MENU       ║\n");
    printf("╠══════════════════════╣\n");
    printf("║ 1. Addition          ║\n");
    printf("║ 2. Subtraction       ║\n");
    printf("║ 3. Multiplication    ║\n");
    printf("║ 4. Division          ║\n");
    printf("║ 5. End Program       ║\n");
    printf("╚══════════════════════╝\n");
}

void addition()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    printf("╔══════════════════════╗\n");
    printf("║  WELCOME TO ADDITION ║\n");
    printf("╠══════════════════════╣\n");
    printf("║Enter first number: 10║\n");
    printf("║Enter second number:10║\n");
    printf("║The sum of 10 and 10  ║\n");
    printf("║is 20                 ║\n");
    printf("╚══════════════════════╝\n");
}