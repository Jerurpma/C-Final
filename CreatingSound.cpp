/*
Jeremy Urpman
8/21/2022
Final Assignment
*/

#include <iostream> //iostream header
#include <string> //string header
#include <cstdlib>
#include <stdlib.h>
#include <ctime> //Brings in time
#include <Windows.h> 
#include <MMSystem.h>
#include "Header.h"
using namespace std; //std = standard
using std::cout; // Begins the line
using std::endl; // Ends the line
using std::cin;
using std::string;


//This function will print my first initial
int main()
{
    int number, grade, plus, minus, total, one, two, three, four, five, six, seven;
    string leader;

    //Information about what it is and what you are going to do
    cout << "Hello and welcome to my program before we get started can I have your name: ";
    cin >> leader;
    cout << "\nHello " << leader << " and welcome to UAT." << endl;
    cout << "But before we begin " << leader << " let me begin by explaing just what my program is. \nThis program is meant to be a fun game where you try and guess a randomized number until you either win or fail." << endl;
    cout << "\nPress 1 and enter to continue and for every other empty space do the same to continue." << endl;
    //Allows a pause
    cin >> six;
    //Shows what will be printed to the console. Everything incorporated in Quotes
    //Allows the person to pick a number

    //All teachers pop up and are always in the same room you have to guess the teacher and room you think they are in so for example Maureen is always in classroom 201 so do you type in 1 and guess if number 1 is the random number you are right if not you are wrong.

    int myList[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << " Maureen Beam = 1 :" << myList[0] << endl;
    cout << " Craig Belanger = 2 :" << myList[1] << endl;
    cout << " Sharon Bolman = 3 :" << myList[2] << endl;
    cout << " Dr. David Brokaw = 4 :" << myList[3] << endl;
    cout << " Derric Clark = 5 :" << myList[4] << endl;
    cout << " Dr. Jill Coddington = 6 :" << myList[5] << endl;
    cout << " Nathan Glover = 7 :" << myList[6] << endl;
    cout << " Dr. Hue Henry = 8 :" << myList[7] << endl;
    cout << " Alan Hromas = 9 :" << myList[8] << endl;
    cout << " Aaron Jones = 10 :" << myList[9] << endl;

    int myClassroom[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << " Classroom 201 = 1 :" << myClassroom[0] << endl;
    cout << " Classroom 252 = 2 :" << myClassroom[1] << endl;
    cout << " Classroom 253 = 3 :" << myClassroom[2] << endl;
    cout << " Classroom 244 = 4 :" << myClassroom[3] << endl;
    cout << " Classroom 245 = 5 :" << myClassroom[4] << endl;
    cout << " Classroom 231 = 6 :" << myClassroom[5] << endl;
    cout << " Classroom 232 = 7 :" << myClassroom[6] << endl;
    cout << " Classroom 207 = 8 :" << myClassroom[7] << endl;
    cout << " Classroom 206 = 9 :" << myClassroom[8] << endl;
    cout << " Classroom 204 = 10 :" << myClassroom[9] << endl;

    int myGrade[5] = { 1, 2, 3, 4, 5 };
    cout << " A = 1 :" << myGrade[0] << endl;
    cout << " B = 2 :" << myGrade[1] << endl;
    cout << " C = 3 :" << myGrade[2] << endl;
    cout << " D = 4 :" << myGrade[3] << endl;
    cout << " F = 5 :" << myGrade[4] << endl;

    cout << "\nAbove you can see all the teachers and way grades are being taken. Press 1 and enter again to see all the rules." << endl;
    //Allows a pause
    cin >> seven;

  
    //Explains the rules and notes to the user.
    cout << "Rules And Notes:" << endl;
    cout << "#1 Play Fairly And Never Lie" << endl;
    //Allows a pause
    cin >> one;
    cout << "#2 Play Until You Hear A Sound Cue" << endl;
    //Allows a pause
    cin >> two;
    cout << "#3 If You Hear A Clap You Win If You Hear A Bell You Lose" << endl;
    //Allows a pause
    cin >> three;
    cout << "#4 Enjoy And Have Fun" << endl;

    cout << "" << endl;
    cout << "Current Grade is:3" << endl;
    grade = 3;

    //Allows the user to select a random number between 1-10
    cout << "Select a number between 1-10" << endl;
    cin >> number;


    //Links to time to give us as close to a random number as possible
    srand(time(0));

    //Puts the random numbers between 1-10
    for (int x = 1; x < 2;x++) {
        cout << 1 + (rand() % 10) << endl;
    }

    cout << "If your number is right add one number to your grade if it is wrong minus one" << endl;

    //Allows the user to define there grade after either guessing the number right or wrong
    cout << "My grade is now: " << endl;
    //Allows them to determine their grade.
        cin >> grade;


        cout << "Your grade should now either be 2 or 4 depeding on your answer, you can either win or lose a grade here so be careful" << endl;

        cout << "Now pick another number between 1-10" << endl;
        cin >> number;

        //Links to time to give us as close to a random number as possible
        srand(time(0));

        //Puts the random numbers between 1-10
        for (int x = 1; x < 2;x++) {
            cout << 1 + (rand() % 10) << endl;
        }
    cout << "If your number is right add one number to your grade if it is wrong minus one" << endl;
    cout << "Note that if you heard a beep you are eliminated from this game and are forced to start over" << endl;

    cout << "My grade is now: " << endl;
    cin >> grade;
    //Allows sound to play when you either win or lose.
    if (grade == myGrade[4])
    {
        PlaySound(TEXT("Bell.wav"), NULL, SND_SYNC);
        cout << "Congratulations on winning!!!";
        test();
    }
    else if (grade == myGrade[0])
    {
        PlaySound(TEXT("clap.wav"), NULL, SND_SYNC);
        cout << "Ahhh better luck next time";
        test();
    }

    for (; ; ) {
        cout << "Still in it are we? Now go till you either win or lose :)" << endl;

        cout << "Now pick another number between 1-10" << endl;
        cin >> number;

        //Links to time to give us as close to a random number as possible
        srand(time(0));

        //Puts the random numbers between 1-10
        for (int x = 1; x < 2;x++) {
            cout << 1 + (rand() % 10) << endl;
        }
        cout << "If your number is right add one number to your grade if it is wrong minus one" << endl;
        cout << "My grade is now: " << endl;
        cin >> grade;

        if (grade == myGrade[4])
        {
            PlaySound(TEXT("Bell.wav"), NULL, SND_SYNC);
            "Congratulations on winning!!!";
            test();
        }
        else if (grade == myGrade[0])
        {
            PlaySound(TEXT("clap.wav"), NULL, SND_SYNC);
            test();
        }
    }


    test(); //calls the function from the header 
}