/************************************************************************/
/*C语言实现 */ /*运行环境：VC++6.0                                                */
/************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
int PrnMainMenu(void);
void ProcessLoop(void);
void Atlanta(void);
void Boston(void);
void LosAngeles(void);
void Miami(void);
void NewYork(void);

main() /*主函数*/
{
    ProcessLoop();
    return 0;
}
void ProcessLoop(void)
{
    int iChoice;
    iChoice = PrnMainMenu();
    while (iChoice != 6)
    {
        switch (iChoice)
        {
        case 1:
            Atlanta();
            break;
        case 2:
            Boston();
            break;
        case 3:
            LosAngeles();
            break;
        case 4:
            Miami();
            break;
        default:
            NewYork();
            break;
        }
        iChoice = PrnMainMenu();
    }
    return;
}
int PrnMainMenu(void)
{
    int iChoice;
    system("clear"); /*_clearscreen(0); */
    printf("\n\t%s", "wynfield metro airport");
    printf("\n\n\t                   main menu");
    printf("\n\n\n\t                   Select one:");
    printf("\n\n\t                   1.Atlanta");
    printf("\n\n\t                   2.Boston");
    printf("\n\n\t                   3.Los Angeles");
    printf("\n\n\t                   4.Miami");
    printf("\n\n\t                   5.New York");
    printf("\n\n\t                   6.Quit");
    printf("\n\n\n\n\n\n\t           Enter choice(1-6)===>");
    scanf("%d", &iChoice);
    fflush(stdin);
    while (iChoice < 1 || iChoice > 6)
    {
        printf("\nERROR...re-enter choice(1-6)===>");
        scanf("%d", &iChoice);
        fflush(stdin);
    }
    return iChoice;
}
void Atlanta(void)
{
    char cWait;
    system("clear");
    printf("\n\t%s", "wynfield metro airport");
    printf("\n\n\t            Atlanta Flight Schedule");
    printf("\n\n\n\t   ------------------------------");
    printf("\n\n\t    Flight#         Departure");
    printf("\n\n\t    101             7:15 p.m");
    printf("\n\n\t    214             9:20 p.m");
    printf("\n\n\n\t      Press Enter to continue...");
    // cWait = getch();
    return;
}
void Boston(void)
{
    char cWait;
    system("clear");
    printf("\n\t%s", "wynfield metro airport");
    printf("\n\n\t           Boston Flight Schedule");
    printf("\n\n\n\t   ------------------------------");
    printf("\n\n\t    Flight#         Departure");
    printf("\n\n\t    117             5:55 p.m");
    printf("\n\n\t    201             6:30 p.m");
    printf("\n\n\n\t      Press Enter to continue...");
    // cWait = getch();
    return;
}
void LosAngeles(void)
{
    char cWait;
    system("clear");
    printf("\n\t%s", "wynfield metro airport");
    printf("\n\n\t           LosAngeles Flight Schedule");
    printf("\n\n\n\t   --------------------------------");
    printf("\n\n\t    Flight#         Departure");
    printf("\n\n\t    122             3:10 p.m");
    printf("\n\n\t    205             4:30 p.m");
    printf("\n\n\n\t      Press Enter to continue...");
    // cWait = getch();
    return;
}
void Miami(void)
{
    char cWait;
    system("clear");
    printf("\n\t%s", "wynfield metro airport");
    printf("\n\n\t           Miami Flight Schedule");
    printf("\n\n\n\t   ------------------------------");
    printf("\n\n\t    Flight#         Departure");
    printf("\n\n\t    102             1:25 p.m");
    printf("\n\n\t    204             4:00 p.m");
    printf("\n\n\n\t      Press Enter to continue...");
    // cWait = getch();
    return;
}
void NewYork(void)
{
    char cWait;
    system("clear");
    printf("\n\t%s", "wynfield metro airport");
    printf("\n\n\t           NewYork Flight Schedule");
    printf("\n\n\n\t   ------------------------------");
    printf("\n\n\t    Flight#         Departure");
    printf("\n\n\t    104             2:00 p.m");
    printf("\n\n\t    119             5:16 p.m");
    printf("\n\n\t    200             7:20 p.m");
    printf("\n\n\n\t      Press Enter to continue...");
    // cWait = getch();
    return;
}