#include <stdio.h>
#include <conio.h>
#include <windows.h>


void gotoxy(int x, int y);
void logIn();
void mainMenu();
void loginBorder();
void colorPatternone();
void colorPatterntwo();
void colorPatternthree();
void colorPatternfour();

void colorQ();
void colorP();
void colorS();
void pattern();
void pattern2();
void pattern3();
void pattern4();
void Quadratic();
void pascals();
boolean tryAgain();

void Mborder();
void Sborder();
void arraySorting();
void printArray();
int myArray[10];

void pattern1();
int main()
{       
    
    int choice = 0;
    int index = 1;
    system("chcp 65001 >null");
    gotoxy(50, 12);
    printf("╔═══════════════════════════════════════════╗");
    gotoxy(50, 13);
    printf("║  Log-In To The System : ( ˘͈ ᵕ ˘͈♡)         ║");
    logIn();
    mainMenu();
    colorPatternone();
    while (1) // up-H | right-M | down-P | left-K
    {
        choice = getch();

        switch (choice)
        {
        case 80:
            if (index >= 9)
                index = 9;
            else
                index++;
            break;

        case 72:
            if (index <= 1)
                index = 1;
            else
                index--;
            break;

        case 13:
            switch (index)
            {
            case 1:
                pattern1(); 
                break;
            case 2:
                pattern2();
                break;
            case 3:
                pattern3();
                break;
            case 4:
                pattern4();
                break;
            case 7:
                Quadratic();
                break;
            case 8:
                pascals();
                break;
            case 9:
                arraySorting();
                break;
            }
            
        }

        mainMenu();

        switch (index)
        {
        case 1:
            colorPatternone();
            break;
        case 2:
            colorPatterntwo();
            break;
        case 3:
            colorPatternthree();
            break;
        case 4:
            colorPatternfour();
            break;
        case 7:
            colorQ();
            break;
        case 8:
            colorP();
            break;
        case 9:
            colorS();
            break;
        }
    }


    return 0;
}
void SetPosition(int X, int Y)
{
HANDLE Screen;
Screen = GetStdHandle(STD_OUTPUT_HANDLE);
COORD Position={X, Y};

SetConsoleCursorPosition(Screen, Position);
}
void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int checkCredentials(char *username, char *password)
{

    if (strcmp(username, "jownieann.malate@dbtc-cebu.edu.ph") == 0 && strcmp(password, "jownieann2001") == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void logIn()
{
    char username[50];
    char password[50];
    int i = 0;
    char ch;
    loginBorder();
    gotoxy(55, 16);
    printf("Enter your username: ");
    scanf("%s", username);

    gotoxy(55, 17);
    printf("Enter your password: ");

    while (1)
    {
        ch = getch();

        if (ch == '\r')
        {
            password[i] = '\0';
            break;
        }
        else if (ch == '\b')
        {
            if (i > 0)
            {
                i--;
                printf("\b \b");
            }
        }
        else
        {
            password[i++] = ch;
            printf("💗");
        }
    }

    if (checkCredentials(username, password))
    {
        gotoxy(55, 19);
        printf("\033[32mLog in successful. Press any Key to Continue.\033[0m");
        getch();
        system("cls");
        mainMenu();
    }
    
    else
    {
        gotoxy(55, 19);
        printf("\033[1;31mInvalid Password or User. Press any Key to Try Again\033[0m");
        getch();
        
        system("cls");
        gotoxy(50, 12);
    printf("╔═════════════════════════════════╗");
    gotoxy(50, 13);
    printf("║  Log-In To The System :         ║");
        logIn();
    }
}

void mainMenu()
{
   
    gotoxy(3, 3);printf("╔══════════════════════╗\n");
    gotoxy(3, 4);printf("║                      ║\n");
    gotoxy(3, 5);printf("║       Hello!         ║\n");
    gotoxy(3, 6);printf("║      JOWNIE ANN      ║\n");
    gotoxy(3, 7);printf("║                      ║\n");
    gotoxy(3, 8);printf("║                      ║\n");
    gotoxy(3, 9);printf("║                      ║\n");
    gotoxy(3, 10);printf("║                      ║\n");
    gotoxy(3, 11);printf("║                      ║\n");
    gotoxy(3, 12);printf("║                      ║\n");
    gotoxy(3, 13);printf("║                      ║\n");
    gotoxy(3, 14);printf("╠══════════════════════╣\n");
    gotoxy(3, 15);printf("║  PATTERN             ║\n");
    gotoxy(3, 16);printf("║   Pattern 1          ║\n");
    gotoxy(3, 17);printf("║   Pattern 2          ║\n");
    gotoxy(3, 18);printf("║   Pattern 3          ║\n");
    gotoxy(3, 19);printf("║   Pattern 4          ║\n");
    gotoxy(3, 20);printf("╠══════════════════════╣\n");
    gotoxy(3, 21);printf("║                      ║\n");
    gotoxy(3, 22);printf("║  Quadriatic Formula  ║\n");
    gotoxy(3, 23);printf("║  Pascals Triangle    ║\n");
    gotoxy(3, 24);printf("║  Sorting             ║\n");
    gotoxy(3, 25);printf("║                      ║\n");
    gotoxy(3, 26);printf("║                      ║\n");
    gotoxy(3, 27);printf("║                      ║\n");
    gotoxy(3, 28);printf("║                      ║\n");
    gotoxy(3, 29);printf("║                      ║\n");
    gotoxy(3, 30);printf("║                      ║\n");
    gotoxy(3, 31);printf("║                      ║\n");
    gotoxy(3, 32);printf("║                      ║\n");
    gotoxy(3, 33);printf("║                      ║\n");
    gotoxy(3, 34);printf("║                      ║\n");
    gotoxy(3, 35);printf("║                      ║\n");
    gotoxy(3, 36);printf("║                      ║\n");
    gotoxy(3, 37);printf("║                      ║\n");
    gotoxy(3, 38);printf("║                      ║\n");
    gotoxy(3, 39);printf("║                      ║\n");
    gotoxy(3, 40);printf("╚══════════════════════╝\n");
    
    
}
void colorQ()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(3, 22);
    printf("  > Quadriatic Formula");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorP()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(3, 23);
    printf("  > Pascals Triangle  ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorS()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(3, 24);
    printf("  > Sorting           ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}

void colorPatternone()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(3, 16);
    printf(" >  Pattern 1          ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorPatterntwo()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(3, 17);
    printf(" >  Pattern 2          ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorPatternthree()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(3, 18);
    printf(" >  Pattern 3          ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}
void colorPatternfour()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
    gotoxy(3, 19);
    printf(" >  Pattern 4          ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLACK_PEN);
}


void pattern1()
{
        gotoxy(50, 13);printf("╔══════════════════════════╗");
        gotoxy(50, 14);printf("║        PATTERN 1         ║");
        gotoxy(50, 15);printf("║                          ║");
        gotoxy(50, 16);printf("║        * * * * *         ║");
        gotoxy(50, 17);printf("║         *     *          ║");
        gotoxy(50, 18);printf("║          *   *           ║");
        gotoxy(50, 19);printf("║           * *            ║");
        gotoxy(50, 20);printf("║            *             ║");
        gotoxy(50, 21);printf("║                          ║");
        gotoxy(50, 22);printf("║                          ║");
        gotoxy(50, 22);printf("║    \033[32mPress any Key to\033[0m      ║");
        gotoxy(50, 23);printf("║        \033[32mContinue...\033[0m       ║");
        gotoxy(50, 24);printf("╚══════════════════════════╝\n");
    getch();
    system("cls");
    
}
void pattern2()
{
        gotoxy(50, 13);printf("╔══════════════════════════╗");
        gotoxy(50, 14);printf("║        PATTERN 2         ║");
        gotoxy(50, 15);printf("║                          ║");
        gotoxy(50, 16);printf("║        * * * * *         ║");
        gotoxy(50, 17);printf("║        *       *         ║");
        gotoxy(50, 18);printf("║        *       *         ║");
        gotoxy(50, 19);printf("║        *       *         ║");
        gotoxy(50, 20);printf("║        * * * * *         ║");
        gotoxy(50, 21);printf("║                          ║");
        gotoxy(50, 22);printf("║    \033[32mPress any Key to\033[0m      ║");
        gotoxy(50, 23);printf("║        \033[32mContinue...\033[0m       ║");
        gotoxy(50, 24);printf("╚══════════════════════════╝\n");
    getch();
    system("cls");
}

void pattern3()
{
    
        gotoxy(50, 13);printf("╔══════════════════════════╗");
        gotoxy(50, 14);printf("║        PATTERN 3         ║");
        gotoxy(50, 15);printf("║                          ║");
        gotoxy(50, 16);printf("║        J                 ║");
        gotoxy(50, 17);printf("║        JO                ║");
        gotoxy(50, 18);printf("║        JOW               ║");
        gotoxy(50, 19);printf("║        JOWN              ║");
        gotoxy(50, 20);printf("║        JOWNI             ║");
        gotoxy(50, 21);printf("║        JOWNIE            ║");
        gotoxy(50, 22);printf("║        JOWNIE            ║");
        gotoxy(50, 23);printf("║        JOWNIE A          ║");
        gotoxy(50, 24);printf("║        JOWNIE AN         ║");
        gotoxy(50, 25);printf("║        JOWNIE ANN        ║");
        gotoxy(50, 26);printf("║    \033[32mPress any Key to\033[0m      ║");
        gotoxy(50, 27);printf("║        \033[32mContinue...\033[0m       ║");
        gotoxy(50, 28);printf("╚══════════════════════════╝\n");
    getch();
    system("cls");    
}



void Quadratic()
{
    system("cls");
    mainMenu();
    Mborder();
        gotoxy(50, 11);printf("╔══════════════════════════╗");
        gotoxy(50, 12);printf("║  QUADRIATIC FORMULA   :  ║");
                    int a = 0, b = 0, c = 0;
                    float x = 0; 

                    gotoxy(57, 16);printf("Please enter the value of a: ");
                    scanf("%d", &a);

                    gotoxy(57, 18);printf("Please enter the value of b: ");
                    scanf("%d", &b);

                    gotoxy(57, 20);printf("Please enter the value of c: ");
                    scanf("%d", &c);

                x = ((-(b) + sqrt((b * b) - (4 * a * c))) / (2 * a));

                    gotoxy(60, 22);printf("\x1B[34m+\033[0m  Positive Output: %f", x);
            
                x = 0;

                x = ((-(b) - sqrt((b * b) - (4 * a * c))) / (2 * a));

                gotoxy(60, 24);printf("\033[1;31m-\033[0m  Negative Output: %f", x);
                gotoxy(67, 28);printf("  \033[32mPress any Key to Continue...\033[0m");
                getch();
                system("cls");
                
}
boolean tryAgain()
{
    char retry = ' ';
    boolean isTryAgain = 1;

    do
    {
        printf("Try again? (y/n)");
        retry = getch();

        if (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y')
            printf("Invalid input");

        else if (retry == 'y' || retry == 'Y')
        {
            isTryAgain = 1;
            break;
        }

        else
        {
            isTryAgain = 0;
            break;
        }

    } while (retry != 'n' && retry != 'N' && retry != 'y' && retry != 'Y');

    return isTryAgain;
}
void loginBorder()
{
    
    gotoxy(50, 14);
    printf("╠═══════════════════════════════════╩════════════════════════════════╗\n");
    gotoxy(50, 15);
    printf("║                                                                    ║\n");
    gotoxy(50, 16); 
    printf("║                                                                    ║\n");
    gotoxy(50, 17);
    printf("║                                                                    ║\n");
    gotoxy(50, 18);
    printf("║                                                                    ║\n");
    gotoxy(50, 19);
    printf("║                                                                    ║\n");
    gotoxy(50, 20);
    printf("║                                                                    ║\n");
    gotoxy(50, 21);
    printf("║                                                                    ║\n");
    gotoxy(50, 22);
    printf("╚════════════════════════════════════════════════════════════════════╝\n");
}
void Mborder()
{   gotoxy(50, 13);printf("╠══════════════════════════╩═══════════════════════════════════════╗");
    gotoxy(50, 14);printf("║                                                                  ║\n");
    gotoxy(50, 15);printf("║                                                                  ║\n");
    gotoxy(50, 16);printf("║                                                                  ║\n");
    gotoxy(50, 17);printf("║                                                                  ║\n");
    gotoxy(50, 18);printf("║                                                                  ║\n");
    gotoxy(50, 19);printf("║                                                                  ║\n");
    gotoxy(50, 20);printf("║                                                                  ║\n");
    gotoxy(50, 21);printf("║                                                                  ║\n");
    gotoxy(50, 22);printf("║                                                                  ║\n");
    gotoxy(50, 23);printf("║                                                                  ║\n");
    gotoxy(50, 24);printf("║                                                                  ║\n");
    gotoxy(50, 25);printf("║                                                                  ║\n");
    gotoxy(50, 26);printf("║                                                                  ║\n");
    gotoxy(50, 27);printf("║                                                                  ║\n");
    gotoxy(50, 28);printf("║                                                                  ║\n");
    gotoxy(50, 29);printf("║                                                                  ║\n");
    gotoxy(50, 30);printf("╚══════════════════════════════════════════════════════════════════╝\n");
    
}
void Sborder()
{
    gotoxy(50, 13);printf("╠══════════════════════════╩═══════════════════════════════════════════════════════════════╗");
    gotoxy(50, 14);printf("║                                                                                          ║\n");
    gotoxy(50, 15);printf("║                                                                                          ║\n");
    gotoxy(50, 16);printf("║                                                                                          ║\n");
    gotoxy(50, 17);printf("║                                                                                          ║\n");
    gotoxy(50, 18);printf("║                                                                                          ║\n");
    gotoxy(50, 19);printf("║                                                                                          ║\n");
    gotoxy(50, 20);printf("║                                                                                          ║\n");
    gotoxy(50, 21);printf("║                                                                                          ║\n");
    gotoxy(50, 22);printf("║                                                                                          ║\n");
    gotoxy(50, 23);printf("║                                                                                          ║\n");
    gotoxy(50, 24);printf("║                                                                                          ║\n");
    gotoxy(50, 25);printf("║                                                                                          ║\n");
    gotoxy(50, 26);printf("║                                                                                          ║\n");
    gotoxy(50, 27);printf("║                                                                                          ║\n");
    gotoxy(50, 28);printf("║                                                                                          ║\n");
    gotoxy(50, 29);printf("║                                                                                          ║\n");
    gotoxy(50, 30);printf("╚══════════════════════════════════════════════════════════════════════════════════════════╝\n");
}
void pattern4()
{
    int num, i = 0 ;
    system("cls");
    mainMenu();
     do
    {   Mborder();
        gotoxy(50, 11);printf("╔══════════════════════════╗");
        gotoxy(50, 12);printf("║  MULTIPLICATION TABLE :  ║");
        gotoxy(52, 14);printf("Enter a number to be Multiplied: ");
        scanf("%d", &num);
        gotoxy(52, 15);printf("Multiplication Table for %d\n", num);
        gotoxy(52,16);printf("  %d x %d = %d\n", num, i, num * i++);
        gotoxy(52,17);printf("  %d x %d = %d\n", num, i, num * i++);
        gotoxy(52,18);printf("  %d x %d = %d\n", num, i, num * i++);
        gotoxy(52,19);printf("  %d x %d = %d\n", num, i, num * i++);
        gotoxy(52,20);printf("  %d x %d = %d\n", num, i, num * i++);
        gotoxy(52,21);printf("  %d x %d = %d\n", num, i, num * i++);
        gotoxy(52,22);printf("  %d x %d = %d\n", num, i, num * i++);
        gotoxy(52,23);printf("  %d x %d = %d\n", num, i, num * i++);
        gotoxy(52,24);printf("  %d x %d = %d\n", num, i, num * i++);
        gotoxy(52,25);printf("  %d x %d = %d\n", num, i, num * i++);
        gotoxy(52,26);printf("  %d x %d = %d\n", num, i, num * i++);
        gotoxy(52,28);printf("  \033[32mPress any Key to Continue...\033[0m");
        break;
    } while (i--);   
    getch();
    system("cls");
}
void pascals()
{
      
        gotoxy(50, 13);printf("╔══════════════════════════════════════════════════════╗");
        gotoxy(50, 14);printf("║                                                      ║");
        gotoxy(50, 15);printf("║                   PASCALS TRIANGLE                   ║");
        gotoxy(50, 16);printf("║                                                      ║");
        gotoxy(50, 17);printf("║                                                      ║");
        gotoxy(50, 18);printf("║                          1                           ║");
        gotoxy(50, 19);printf("║                        1   1                         ║");
        gotoxy(50, 20);printf("║                      1   2   1                       ║");
        gotoxy(50, 21);printf("║                    1   3   3   1                     ║");
        gotoxy(50, 22);printf("║                   1   4   6   4   1                  ║");
        gotoxy(50, 23);printf("║                 1   5  10  10   5   1                ║");
        gotoxy(50, 24);printf("║               1   6  15  20  15   6   1              ║");
        gotoxy(50, 25);printf("║             1   7  21  35  35  21   7   1            ║");
        gotoxy(50, 26);printf("║           1   8  28  56  70  56  28   8   1          ║");
        gotoxy(50, 27);printf("║         1   9  36  84 126 126  84  36   9   1        ║");
        gotoxy(50, 28);printf("║                                                      ║");
        gotoxy(50, 29);printf("║               \033[32mPress any Key to\033[0m                       ║");
        gotoxy(50, 30);printf("║                \033[32mContinue...\033[0m                           ║");
        gotoxy(50, 31);printf("╚══════════════════════════════════════════════════════╝\n");
    getch();
    system("cls");
}
void arraySorting()
{
    
    int index = 0;
    int i = 0, j = 0, temp = 0;

    
    do 
    {   Sborder();
        gotoxy(50, 11);printf("╔══════════════════════════╗");
        gotoxy(50, 12);printf("║  SORTING ARRAYS :        ║");
        gotoxy(55, 14);printf("Enter number for index %d: ", index++);
        scanf("%d", &myArray[0]);
        gotoxy(55, 15);printf("Enter number for index %d: ", index++);
        scanf("%d", &myArray[1]);
        gotoxy(55, 16);printf("Enter number for index %d: ", index++);
        scanf("%d", &myArray[2]);
        gotoxy(55, 17);printf("Enter number for index %d: ", index++);
        scanf("%d", &myArray[3]);
        gotoxy(55, 18);printf("Enter number for index %d: ", index++);
        scanf("%d", &myArray[4]);
        gotoxy(55, 19);printf("Enter number for index %d: ", index++);
        scanf("%d", &myArray[5]);
        gotoxy(55, 20);printf("Enter number for index %d: ", index++);
        scanf("%d", &myArray[6]);
        gotoxy(55, 21);printf("Enter number for index %d: ", index++);
        scanf("%d", &myArray[7]);
        gotoxy(55, 22);printf("Enter number for index %d: ", index++);
        scanf("%d", &myArray[8]);
        gotoxy(55, 23);printf("Enter number for index %d: ", index++);
        scanf("%d", &myArray[9]);
    }
    while (index < 10);

    gotoxy(52, 25);printf("The Array Contains: ");
    printf("%d, ", myArray[0]);
    printf("%d, ", myArray[1]);
    printf("%d, ", myArray[2]);
    printf("%d, ", myArray[3]);
    printf("%d, ", myArray[4]);
    printf("%d, ", myArray[5]);
    printf("%d, ", myArray[6]);
    printf("%d, ", myArray[7]);
    printf("%d, ", myArray[8]);
    printf("%d, ", myArray[9]);

    for ( i = 0;  i < 10; i++)
    {
        for ( j = 0;  j < 10; j++)
        {
            if (myArray[i] < myArray[j])
            {
                temp = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = temp;
            }
        }
    }

    printArray(0);
    gotoxy(67, 28);printf("               \033[32mPress any Key to Continue...\033[0m");
                getch();
                system("cls");
}
void printArray(int index)
{
    // Print Values in the Array
    gotoxy(52, 26); printf("The Array is Sorted: ");

    for (index = 0; index < 10; index++)
    {
        if(index < 9)
         printf("%d, ", myArray[index]);
        else
            printf("%d;", myArray[index]);
       
    }
}