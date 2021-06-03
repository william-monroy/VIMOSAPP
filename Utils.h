#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;

void vimosapp()
{
    cout << " _   ________  _______  _______   ___  ___ "<< endl;
    cout << "| | / /  _/  |/  / __ \\/ __/ _ | / _ \\/ _ \\" << endl;
    cout << "| |/ // // /|_/ / /_/ /\\ \\/ __ |/ ___/ ___/" << endl;
    cout << "|___/___/_/  /_/\\____/___/_/ |_/_/  /_/    " << endl;
}

void clear(string SO)
{
    if (SO == "Windows")
    {
        system("cls");
    }
    else
    {
        system("clear");
    }
}

void pause(string SO)
{
    if (SO == "Windows")
    {
        system("pause");
    }
    else
    {
        cout << "Presione enter para continuar...";
        string temp;
        cin >> temp;
    }
}