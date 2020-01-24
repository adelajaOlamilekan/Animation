/*
    Author Name:                Adelaja Qowiyyu Olamilekan

    Date Started:                   22/01/2020

    Date Completed:            22/01/2020

    Project Name:                 Rain Simulation(Animation)
*/


#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<windows.h>

using namespace std;

void printCharacter(char);              //Function to print the dots on the console at the necessary horizontal position
void printNewline(int);                     //Function to print the dots to the console at the necessary vertical position

int main()
{
    for(int x=0; x<10;  x+1)
    {
        printNewline(x);
        printCharacter('.');

        if(x==1)
        Sleep(1000);

    }



    return 0;

}

void printCharacter(char character)
{

    cout<<setw(10)<<character;
    cout<<setw(14)<<character;
    cout<<setw(20)<<character;
    cout<<setw(24)<<character;
    cout<<setw(30)<<character;
    cout<<setw(34)<<character;
    cout<<setw(40)<<character;
    cout<<setw(44)<<character;
    cout<<setw(50)<<character;
    cout<<setw(54)<<character;
    cout<<setw(60)<<character;
    cout<<setw(64)<<character;
    cout<<setw(70)<<character;
    cout<<setw(74)<<character;

}

void printNewline(int lineNumber)
{
    for(int x=0; x<lineNumber+1; x++)
    {
        cout<<endl;
    }
}
