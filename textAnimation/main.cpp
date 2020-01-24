#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cstdlib>
#include<windows.h>
#include<ctime>

using namespace std;

void printEnd(int);


int main()
{
       for(int x=0; x<5; x++)
    {
        cout<<setw(rand())<<"Q-PRODUCT"<<endl;
        Sleep(1000);
        if(x!=19)
        system("cls");
        else
        system("pause");


    }

    for(int n=0; n<25;  n++)
    {
        printEnd(n);
        cout<<setw(40)<<"THANKS FOR WATCHING"<<endl;
        if(n!=24){
        Sleep(1000);
        system("cls");
        }
        else
            Sleep(10);
    }
    system("cls");
    system("pause");
}

void printEnd(int newline)
{
    for(int x=0; x<newline; x++)
    {
        cout<<'\n';
    }
}
