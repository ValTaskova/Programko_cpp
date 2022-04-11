#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include <cstdio>


bool gameOver;

//premenne a konstanty
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, nTail, score;
int tailX[100], tailY[100];
int flag;  

void Setup();
void Draw();
void Input();
void Logic();

int main()
{
    system("Color 0A");
    Setup();
    while (gameOver != true)
    {
        Draw();
        Input();
        Logic();
        
        //zrychlovanie hry podla skore
        if (score >= 0 && score <= 50)
            Sleep(100);
        else if(score > 50 && score <= 100)
            Sleep(50);
        else if(score > 100 && score <= 150)
            Sleep(25);
        else
            Sleep(10);
    }

    return 0;
}

void Setup()
{
    //premenne a konstanty pre zakladne nastavenia
    score = 0;
    gameOver = false;
    flag = 0;
    fruitX = (rand() % (width - 4) + 2);    //pre unicode znaky
    fruitY = (rand() % (height - 4) + 2);

    /*fruitX = (rand() % (width - 2) + 1);    //pre ASCII znaky
    fruitY = (rand() % (height - 2) + 1);*/

    x = width / 2;
    y = height / 2;
    nTail = 0;
}

void Draw()
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IOFBF, 1000);
	
    system("cls");
	
    std::string wall = u8"█";
    std::string snake = u8"◉";
    std::string tail = u8"●";
    std::string fruit = u8"❤";
 
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            //vykreslenie hranic mapy, hadika, ovocia, a vnutra mapy
            if(i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                std::cout << wall;
            }
            else if(i == y && j == x) {
                std::cout << snake;
            }
            else if (i == fruitY && j == fruitX) {
                std::cout << fruit;
            }
            else {
                bool print = false;

                for(int k = 0; k < nTail; k++) {
                    if (i == tailY[k] && j == tailX[k]) {
                        std::cout << tail;
                        print = true;
                    }

                }

                if (print == false) 
                    std::cout << ' ';
            }
        
            
        }
        std::cout << std::endl;
    }
 
    std::cout << std::endl;
    std::cout << "Skore: " << score << std::endl;
    std::cout << "Pre ukoncenie hry stlacte x";
}

void Input()
{
        //priradenie WSAD klaves k smerom UP, DOWN, LEFT, RIGHT a klavesy X      
        //pre ukoncenie hry
         if (_kbhit()) {
    
            switch (_getch())
            {
            case 'w':
                flag = 1;
                break;
            case 'a':
                flag = 2;
                break;
            case 's':
                flag = 3;
                break;
            case 'd':
                flag = 4;
                break;
            case 'x':
                gameOver = true;
                break;
            }
        }  
}

void Logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {	//kod, aby chvost nasledoval hlavu
        prev2X = tailX[i];
        prev2Y = tailY[i];

        tailX[i] = prevX;
        tailY[i] = prevY;

        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        x--;
        break;
    case 3:
        y++;
        break;
    case 4:
        x++;
        break;
    default:
        break;
    }
    
    //co sa stane, ked hadik narazi do hranic mapy
    //ukoncenie hry
    if (x < 0 || y < 0 || x > width || y > height) {
        gameOver = true;
    }

    //ukaze sa na druhej strane
    /*
    if (x >= width)
        x = 0; 
    else if (x < 0) 
        x = width - 1;

    if (y >= height)
        y = 0; 
    else if (y < 0)
        y = height - 1;
    */
 
    for (int i = 0; i < nTail; i++) {
        //co sa stane, ked hadik narazi do svojho chvosta
        if (tailX[i] == x && tailY[i] == y || prevX == x && prevY == y)
            gameOver = true;
    }    
 
    //co sa stane, ked hadik zje ovocie 
    if(x == fruitX && y == fruitY) {
        score += 10;
        fruitX = (rand() % (width - 3)) + 1;
        fruitY = (rand() % (height - 3)) + 1;
        nTail++;
    }
}
