#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
char getCharacter(short int x, short int y);
void printPacman(int x , int y);
void remove (int x , int y);
void clear(int x, int y, char pCharacter);
void ghost1(int x, int y);

int main()
{

    int x = 4, y = 4;
    int gx = 1, gy = 1;
    int g1x = 3, g1y = 3;

    char pCharacter = ' ';
    string direction = "RIGHT";
    string dir = "DOWN";
    system("Color F1");
    system("cls");

    bool gameRunning = true;
    printMaze();
    ghost1(gx, gy);
    char nextPosition;
    while (gameRunning)
    {
         
        Sleep(300);

          if (GetAsyncKeyState(VK_LEFT))
        {
            nextPosition = getCharacter(x - 1, y);
            if (nextPosition == ' ')
            {

                remove(x, y);
                x = x - 1;
                printPacman(x, y);
            }
            if (nextPosition == '.')
            {
                remove(x, y);
                x--;
                printPacman(x, y);
            }
            if (nextPosition == 'G')
            {
                gameRunning = false;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            nextPosition = getCharacter(x + 1, y);
            if (nextPosition == ' ')
            {

                remove(x, y);
                x = x + 1;
                printPacman(x, y);
            }
            if (nextPosition == '.')
            {
                remove(x, y);
                x++;
                printPacman(x, y);
          }
            if (nextPosition == 'G')
            {
                gameRunning = false;
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            nextPosition = getCharacter(x, y - 1);
            if (nextPosition == ' ')
            {

                remove(x, y);
                y = y - 1;
                printPacman(x, y);
            }
            if (nextPosition == '.')
            {
                remove(x, y);
                y--;
                printPacman(x, y);
            }
            if (nextPosition == 'G')
            {
                gameRunning = false;
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            nextPosition = getCharacter(x, y + 1);
            if (nextPosition == ' ')
            {

                remove(x, y);
                y = y + 1;
                printPacman(x, y);
            }
            if (nextPosition == '.')
            {
                remove(x, y);
                y++;
                printPacman(x, y);
            }

            if (nextPosition == 'G')
            {
                gameRunning = false;
            }
        }

        if (GetAsyncKeyState(VK_ESCAPE))
        {

            gameRunning = false;
        }

        if (direction == "RIGHT")
        {
            char nextPosition = getCharacter(gx + 1, gy);
            if (nextPosition == '%' || nextPosition == '|')
            {
                direction = "LEFT";
            }
            else if (nextPosition == ' ' || nextPosition == '.')
            {
                clear(gx, gy, pCharacter);
                gx = gx + 1;
                pCharacter = nextPosition;
                ghost1(gx, gy);
            }
            
        }

        if (direction == "LEFT")
        {
            char nextPosition = getCharacter(gx - 1, gy);
            if (nextPosition == '%' || nextPosition == '|')
            {
                direction = "RIGHT";
            }
            else if (nextPosition == ' ' || nextPosition == '.')
            {
                clear(gx, gy, pCharacter);
                gx = gx - 1;
                pCharacter = nextPosition;
                ghost1(gx, gy);
            }
        }
        if (dir == "DOWN")
        {
            char nextPosition = getCharacter(g1x, g1y + 1);
            if (nextPosition == '%' || nextPosition == '|' || nextPosition=='#')
            {
                dir = "UP";
            }
            else if (nextPosition == ' ' || nextPosition == '.')
            {
                clear(g1x, g1y, pCharacter);
                g1y = g1y + 1;
                pCharacter = nextPosition;
                ghost1(g1x, g1y);
            }
        }
        if (dir == "UP")
        {
            char nextPosition = getCharacter(g1x, g1y - 1);
            if (nextPosition == '%' || nextPosition == '|' || nextPosition=='#')
            {
                dir = "DOWN";
            }
            else if (nextPosition == ' ' || nextPosition == '.')
            {
                clear(g1x, g1y, pCharacter);
                g1y = g1y - 1;
                pCharacter = nextPosition;
                ghost1(g1x, g1y);
            }
         
        }
    }
}

void printMaze()
{
 cout<<"#####################################################################"  <<endl;
cout <<"||.. ...................................................  .......  ##"   <<endl;
cout <<"||.. %%%%%%%%%%%%%%               %%%%%%%%%%%%%%   |%|..   %%%%    ##"   <<endl;
cout <<"||..     |%|   |%|       |%|...   |%|        |%|   |%|..    |%|    ##"   <<endl;
cout <<"||..     |%|   |%|       |%|...   |%|        |%|   |%|..    |%|    ##"   <<endl;
cout <<"||..     %%%%%%%%    . . |%|...   %%%%%%%%%%%%%%      ..   %%%%..  ##"   <<endl;
cout <<"||..     |%|         . . |%|...  ............... |%|  ..        .  ##"   <<endl;
cout <<"||..     %%%%%%%%%%  . . |%|...  %%%%%%%%%%%%%   |%|  ..   %%%%%.  ##"   <<endl;
cout <<"||..              |%|. . |%|...  |%| ......      |%|  ..     |%|.  ##"   <<endl;
cout <<"||..    ........  |%|.           |%| ......|%|        ..     |%|.  ##"   <<endl;
cout <<"||..|%| |%|%%%|%|.|%|. |%|   P       ......|%|        .. |%| |%|.  ##"   <<endl;
cout <<"||..|%| |%|   |%|. .   %%%%%%%%%%%   ......|%|        .. |%|.      ##"   <<endl;  
cout <<"||..|%| |%|   |%|. .        ...|%|     %%%%%%%        .. |%|.      ##"   <<endl;
cout <<"||..|%|             .       ...|%|               |%|   . |%|.      ##"   <<endl;
cout <<"||..|%| %%%%%%%%%%          ...|%|%%%%%%%%%%%    |%|  .  |%|%%%%%% ##"   <<endl;
cout <<"||............................................   |%|  .............##"   <<endl;
cout <<"||..   .......................................            .........##"   <<endl;
cout <<"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  .....|%|  |%|  ..|%|        ##"   <<endl;
cout <<"||..|%|  |%|   |%|..           ...|%|    %%%%%%  |%|  ..|%|        ##"   <<endl;
cout <<"||..|%|            .           ...|%|            |%|  ..|%|        ##"   <<endl; 
cout <<"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%    |%|  ..|%|%%%%%%  ##"   <<endl;
cout <<"||............................................   |%|   ..........  ##"   <<endl;
cout <<"||..........................................              .......  ##"   <<endl;
cout <<"#####################################################################" <<endl;
}


void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharacter(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
                                                                                            : ' ';
}
void ghost1(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
void clear(int x, int y, char pCharacter)
{
    gotoxy(x, y);
    cout << pCharacter;
}
void remove(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}
