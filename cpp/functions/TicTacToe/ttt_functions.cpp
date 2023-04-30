#include <iostream>
#include <vector>
#include <string>

#include "ttt_functions.hpp"

//Global variables
std::vector<char> board = {'1','2','3','4','5','6','7','8','9'};
char placement;
char currPlayer = 'X';

//Method to print board

//Draw the board
void draw() {
    std::cout << "                        |     |     \n";
    std::cout << "                     " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
    std::cout << "                   _____|_____|_____\n";
    std::cout << "                        |     |     \n";
    std::cout << "                     " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
    std::cout << "                   _____|_____|_____\n";
    std::cout << "                        |     |     \n";
    std::cout << "                     " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "                        |     |     \n\n";
}

//Print greeting
void greet() {
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout << "                   Let's Play Tic-Tac-Toe!                      \n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    std::cout << "                       How To Win: \n\n";
    std::cout << "Each player will take turns selecting a position to play their\n";
    std::cout << "assigned token. The first player to place 3 of their tokens in\n";
    std::cout << "a row (up, down, across, or diagonally) wins! \n\n";
    draw();
}

//Turns begin with a printout of the gameboard and which player's turn it is
void take_turn() {
    std::cout << "Select your token placement: \n";
    std::cin >> placement;
    std::cout << "______________________________________________________________________\n\n";
    for (int i = 0; i < board.size(); i++){
        if (board[i] == placement) {
            board[i] = currPlayer;
        }
    }
    std::cout << "             ...::: PLAYBOARD UPDATED :::...                             \n\n";
    draw();
}
//Change turns involves switching from X to O, and vice versa
void change_turns() {
    if (currPlayer == 'X') {
        currPlayer = 'O';
    } else if (currPlayer == 'O') {
        currPlayer = 'X';
    }
    //std::cout << "______________________________________________________________________\n";
    std::cout << "\nPlayer " << currPlayer << "\'s turn now!\n\n";
}

//Check if there are three across rows, columns and diagonals
bool is_filled() {
    //check horizontals
            if (board[0] == currPlayer && board[1] == currPlayer && board[2] == currPlayer) {
            return true;
        } else if (board[3] == currPlayer && board[4] == currPlayer && board[5] == currPlayer) {
            return true;
        } else if (board[6] == currPlayer && board[7] == currPlayer && board[8] == currPlayer) {
            return true;
        }
    //check verticals
        else if (board[0] == currPlayer && board[3] == currPlayer && board[6] == currPlayer) {
            return true;
        } else if (board[1] == currPlayer && board[4] == currPlayer && board[7] == currPlayer) {
            return true;
        } else if (board[2] == currPlayer && board[5] == currPlayer && board[8] == currPlayer) {
            return true;
        }
    //check diagonals
        else if (board[0] == currPlayer && board[4] == currPlayer && board[8] == currPlayer) {
            return true;
        } else if (board[2] == currPlayer && board[4] == currPlayer && board[6] == currPlayer) {
            return true;
        }
    return false;
}
//test for scratch game
bool scratch() {
    int fillers = 0;
    for (int i = 0; i < board.size(); i++) {
        if (board [i] == 'X' || board[i] == 'O') {
            fillers++;
            }
        }
    
        if (fillers == 9) {
            return true;
        }
    return false;
}

void end_game() {
    if (is_filled() == true && scratch() == false) {
        if (currPlayer == 'X') {
            std::cout << "______________________________________________________________________\n\n";
            std::cout << "Tic Tac Toe! You win Player X!\n";
            std::cout << "______________________________________________________________________\n\n";
        } else if (currPlayer == 'O') {
            std::cout << "______________________________________________________________________\n\n";
            std::cout << "Tic Tac Toe! You win Player O!\n";
            std::cout << "______________________________________________________________________\n\n";
        }
    }
    else if (scratch() == true && is_filled() == false) {
            std::cout << "Womp Womp, it's a tie! Play again!\n";
        }
    }


