//PROGRAM FOR THE GAME OF TIK TAK TOE BY USING C PLUS PLUS 
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

// FUNCTION PROTOTYPES 
void printBoard(char[]);
int checkWineer(char[]);
void clearScreen();
void printinfo(int player);
void printname();

char console[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

string pl,pl2;  //GLOBALLY DECLARED

//MAIN FUNCTION 
int main() {
  printname();
    int player = 1, input, status = -1;
    printBoard(console);
    while (status == -1) {
        player = (player % 2 == 0) ? 2 : 1;
        char mark = (player == 1) ? 'X' : 'O';

        cout << "ENTER THE NO FOR PLAYER | " << player << " |:_\n";
        cin >> input;

        if (input < 1 || input > 9) {
            cout << "CHOOSE CORRECT NO FOR INPUT_#RESTART\n";
            continue;
        }

        console[input] = mark;
        clearScreen();   //CALL TO CLEAR REPEATATIVE CONSOL TABLE
        printBoard(console);

        int result = checkWineer(console);
        if (result == 1) {
            cout << "PLAYER | " << player << " | IS THE WINNER OF THE MATCH \>🏆 \n";
            printinfo(player);
            return 0;
        } else if (result == 0) {
            cout << "DRAW!\n";
            return 0;
        }

        player++;
    }

    return 0;
}

// IT IS FUNCTION TO PRINT THE CONSOLE TABLE
void printBoard(char console[]) {
    cout << "\n\n";
    
    
    cout << "=== TIC TAC TOE ===\n\n";
    cout << " _____ _____ _____\n";
    cout << "|     |     |     |\n";
    cout << "|   " << console[1] << " |  " << console[2] << "  | " << console[3] << "   |\n";
    cout << "|_____|_____|_____|\n";
    cout << "|     |     |     | \n";
    cout << "|   " << console[4] << " |  " << console[5] << "  | " << console[6] << "   |\n";
    cout << "|_____|_____|_____|\n";
    cout << "|     |     |     |\n";
    cout << "|   " << console[7] << " |  " << console[8] << "  | " << console[9] << "   |\n";
    cout << "|_____|_____|_____|\n";
    
    cout << "\n\n";
}

// IT IS THE FUNCTION TO CHECK WHO IS WIN?
int checkWineer(char console[]) {
    // CHECK ROWS(->)
    if (console[1] == console[2] && console[2] == console[3]) return 1;
    if (console[4] == console[5] && console[4] == console[6]) return 1;
    if (console[7] == console[8] && console[8] == console[9]) return 1;
    //CHECK COLUMNS (↑)
    if (console[1] == console[4] && console[4] == console[7]) return 1;
    if (console[2] == console[5] && console[5] == console[8]) return 1;
    if (console[3] == console[6] && console[6] == console[9]) return 1;

    // CHECK DIAGONALS
    if (console[1] == console[5] && console[5] == console[9]) return 1;
    if (console[3] == console[5] && console[5] == console[7]) return 1;

    // CHECK FOR DROW THE SYMBOL
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (console[i] == 'X' || console[i] == 'O') count++;
    }
    if (count == 9)
     return 0;

 return -1;
}

// FUNCTION TO CLEAR BEFORE SCREEN AFTER MULTIPLE ATTEMPTS
void clearScreen() {
    clrscr();
}
    
    void printinfo(int result){
    
    if (result== 1) {
    cout << "\n" << endl;
    cout << "CONGRATULATIONS 1st PLAYER_" << endl;
    cout << "CONGRATULATIONs_" <<pl<< endl;
    
    return;
    }
    cout << "\n" << endl;
    cout << "CONGRATULATIONS 2nd PLAYER_" << endl;
    cout << "CONGRATULATIONs_" <<pl2<< endl;
    
    
    } 
      void printname(){
       // string pl,pl2; 
        cout << "(¥×××××××××××--------∆+(#GAME)+∆--------×××××××××××¥)" << endl;
           cout << "\n\aENTER 1st PLAYER NAME_" << endl;
           cin >> pl;
           
           cout << "\n\aENTER 2nd PLAYER NAME_" << endl;
           cin >> pl2;
     cout << "((---+++++++<<<<<($START$)>>>>>+++++++---))" << endl;
     cout << "\n|============================ |" << endl;
     cout << "\n|    RULES OF TIC TAC TOE     |" << endl;
     cout << "\n|-----------------------------|" << endl;
     cout << "\n| 1. Players take turns.      |" << endl;
     cout << "\n| 2. Valid moves are 1-9.     |" << endl;
     cout << "\n| 3. Win conditions:          |" << endl;
     cout << "\n| i) 3 in a row (horiz/vert). |" << endl;
     cout << "\n| ii) 3 in a row (diagonal)   |" << endl;
     cout << "\n| 4. Game ends in a draw if   |" << endl;
     cout << "\n| all squares are filled.     |" << endl;
     cout << "\n|=============================|" << endl;
     
     
     cout << "\n" << endl;
     cout << "CODING IS LOVE" << endl;
     cout << "MY FIRST GAME DEVELOPED BY CPP" << endl;
     
    }
    
   
    
