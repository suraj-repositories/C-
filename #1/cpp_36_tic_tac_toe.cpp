#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);
int main()
{

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    do{
        drawBoard(spaces);
        playerMove(spaces, player);
        computerMove(spaces, computer);
    }while(!checkTie(spaces) && !checkWinner(spaces, player, computer));

    std::cout << "\n************ THANKS FOR PLAYING ************\n";
    return 0;
}

void drawBoard(char *spaces)
{
    std::cout << "     |     |    " << std::endl;
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << std::endl;
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |    " << std::endl;
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << std::endl;
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |    " << std::endl;
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << std::endl;
    std::cout << "     |     |    " << std::endl;
}

void playerMove(char *spaces, char player)
{

    int playerMove = 0;
    do
    {
        std::cout << "Your turn - Enter values (1, 9) : ";
        std::cin >> playerMove;

        if(spaces[playerMove - 1] != ' '){
            std::cout << "This place is already occupied!" << std::endl;
            playerMove = -1;
        }

    } while (playerMove < 0 || playerMove > 9);

    spaces[playerMove - 1] = player;
}

void computerMove(char *spaces, char computer)
{
    int random = 0;
    
    do{
        srand(time(0));
        random = rand() % 9 + 1;
    }while(spaces[random] != ' ');
    spaces[random] = computer;

}

bool checkWinner(char *spaces, char player, char computer)
{
    if((spaces[0] == player && spaces[1] == player && spaces[2] == player) ||
       (spaces[3] == player && spaces[4] == player && spaces[5] == player) ||
       (spaces[6] == player && spaces[7] == player && spaces[8] == player) ||
       (spaces[0] == player && spaces[3] == player && spaces[6] == player) ||
       (spaces[1] == player && spaces[4] == player && spaces[7] == player) ||
       (spaces[2] == player && spaces[5] == player && spaces[8] == player) ||
       (spaces[0] == player && spaces[4] == player && spaces[8] == player) ||
       (spaces[2] == player && spaces[4] == player && spaces[6] == player) 
    ){
        drawBoard(spaces);
        std::cout << "YOU WIN!" << std::endl;
        return true;
    }else if(
       (spaces[0] == computer && spaces[1] == computer && spaces[2] == computer) ||
       (spaces[3] == computer && spaces[4] == computer && spaces[5] == computer) ||
       (spaces[6] == computer && spaces[7] == computer && spaces[8] == computer) ||
       (spaces[0] == computer && spaces[3] == computer && spaces[6] == computer) ||
       (spaces[1] == computer && spaces[4] == computer && spaces[7] == computer) ||
       (spaces[2] == computer && spaces[5] == computer && spaces[8] == computer) ||
       (spaces[0] == computer && spaces[4] == computer && spaces[8] == computer) ||
       (spaces[2] == computer && spaces[4] == computer && spaces[6] == computer) 
    )
    {
        drawBoard(spaces);
        std::cout << "YOU LOOSE!" << std::endl;
        return true;
    }
    return false;
}


bool checkTie(char *spaces)
{
    for(int i = 0; i < sizeof(spaces) / sizeof(char); i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    drawBoard(spaces);
    std::cout << "Match Draw ! \nGAME OVER!" << std::endl;
    return true;
    
}