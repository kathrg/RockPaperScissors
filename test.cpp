/**
 * test.cpp
 * Project UID 24b93ce4a6274610f4c3f3e31fe17277t
 *
 * Katherine Gurgenian
 * gurgenia
 *
 * EECS 183: Project 2
 * Winter 2023
 *
 * Testing functions for your rps.cpp implementation.
 * Holds the definitions of required testing functions.
 * We have stubbed all required functions for you.
 */

#include <iostream>
#include <string>

using namespace std;


//************************************************************************
// You should have implemented the following functions in rps.cpp
//************************************************************************
string getName(int playerNumber);
int getMenuChoice();
bool isMoveGood(char move);
char getMove(string playerName);
bool isRoundWinner(char move, char opponentMove);
void announceRoundWinner(string winnerName);
int doRound(string p1Name, string p2Name);
void announceWinner(string winnerName);
string doGame(string p1Name, string p2Name, int gameType);

//************************************************************************
// The following functions were already implemented for you in rps.cpp
//************************************************************************
void printInitialHeader();
void printMenu();
void printErrorMessage(int errorNumber);
void printCloser();

//************************************************************************
// Testing function declarations. Function definition is below main.
//************************************************************************
void test_isMoveGood();
void test_isRoundWinner();
void test_announceRoundWinner();
void test_announceWinner();


void startTests() {
    cout << "\nExecuting your test cases\n";

    test_isMoveGood();
    test_isRoundWinner();
    test_announceRoundWinner();
    test_announceWinner();
    // TODO: call more test functions here

    return;
}

//************************************************************************
// Put all your test function implementations below here.
// We have stubbed all required functions for you
// to recieve full points when submitting test.cpp
// NOTE: We will only grade your tests for the following functions
//       * isMoveGood
//       * isRoundWinner
//       * announceRoundWinner()
//       * announceWinner()
//************************************************************************

void test_isMoveGood() {
    cout << "Now testing function isMoveGood()\n";
    cout << "'r': Expected: 1, Actual: " << isMoveGood('r') << endl;
    cout << "'q': Expected: 0, Actual: " << isMoveGood('q') << endl;
    cout << "'R': Expected: 1, Actual: " << isMoveGood('R') << endl;
    cout << "'!': Expected: 0, Actual: " << isMoveGood('!') << endl;
    cout << "'8': Expected: 0, Actual: " << isMoveGood('8') << endl;

    return;
}

void test_isRoundWinner() {
    cout << "Now testing function isRoundWinner()\n";
    cout << "'r', 's': Expected: 1, Actual: " << isRoundWinner('r', 's')
    << endl;
    cout << "'q', 's': Expected: 0, Actual: " << isRoundWinner('q', 's')
    << endl;
    cout << "'S', 's': Expected: 0, Actual: " << isRoundWinner('S', 's')
    << endl;
    cout << "' ', 's': Expected: 0, Actual: " << isRoundWinner(' ', 's')
    << endl;
    cout << "'s', 'S': Expected: 0, Actual: " << isRoundWinner('s', 'S')
    << endl;
    cout << "'R', 's': Expected: 1, Actual: " << isRoundWinner('R', 's')
    << endl;
    cout << "'R', 'S': Expected: 1, Actual: " << isRoundWinner('R', 'S')
    << endl;
    cout << "'r', 'S': Expected: 1, Actual: " << isRoundWinner('r', 'S')
    << endl;
    cout << "'4', 'p': Expected: 0, Actual: " << isRoundWinner('4', 'p')
    << endl;
    cout << "'r', '!': Expected: 0, Actual: " << isRoundWinner('r', '!')
    << endl;
    cout << "'?', '!': Expected: 0, Actual: " << isRoundWinner('?', '!')
    << endl;
    
    return;
}


void test_announceRoundWinner() {
    cout << "Now testing function announceRoundWinner()\n";
    cout << "\"\": Expected: This round is a draw!, Actual: ";
    announceRoundWinner("");
    cout << endl;
    
    cout << "\"katya\": Expected: Katya wins the round!, Actual: ";
    announceRoundWinner("Katya");
    cout << endl;
    
    cout << "\"12345\": Expected: 12345 wins the round!, Actual: ";
    announceRoundWinner("12345");
    cout << endl;

    cout << "\"?!*734\": Expected: ?!*734 wins the round!, Actual: ";
    announceRoundWinner("?!*734");
    cout << endl;
    
    cout << "\"KaTyA GuRgEnIaN\": Expected: "
    << "KaTyA GuRgEnIaN wins the round!, Actual: ";
    announceRoundWinner("KaTyA GuRgEnIaN");
    cout << endl;

    cout << "\"      \": Expected:        wins the round!, Actual: ";
    announceRoundWinner("      ");
    cout << endl;
    
    return;
}


void test_announceWinner() {
    cout << "Now testing function announceWinner()\n";
    cout << "\"\": Expected: No Winner!, Actual: ";
    announceWinner("");
    cout << endl;

    cout << "Now testing function announceWinner()\n";
    cout << "\"katya\": Expected: Congratulations katya!\nYou won EECS 183 Rock-Paper-Scissors!, Actual: ";
    announceWinner("katya");
    cout << endl;
    
    cout << "\"12345\": Expected: Congratulations 12345!\nYou won EECS 183 Rock-Paper-Scissors!, Actual: ";
    announceWinner("12345");
    cout << endl;

    cout << "\"?!*734\": Expected: Congratulations ?!*734!\nYou won EECS 183 Rock-Paper-Scissors!, Actual: ";
    announceWinner("?!*734");
    cout << endl;
    
    cout << "\"KaTyA GuRgEnIaN\": Expected: " <<
    "Congratulations KaTyA GuRgEnIaN!\nYou won EECS 183 Rock-Paper-Scissors!, "
    << "Actual: ";
    announceWinner("KaTyA GuRgEnIaN");
    cout << endl;

    cout << "\"      \": Expected:Expected: Congratulations       !\nYou "
    << "won EECS 183 Rock-Paper-Scissors!, Actual: ";
    announceWinner("      ");
    cout << endl;
    
    return;
}
