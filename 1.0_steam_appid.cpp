#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#define DEBUG_MESSAGE_APPEAR std::cout << "The steam appid is created!!!!!";
#define PASS std::cout << "\n";
int main()
{
    std::cout << "HELLO , THAT IS PROGRAM WHICH CREATING FOR GAME STEAM_APPID IF STEAM DELETING(FOR NON STEAM GAME)" << std::endl;
    PASS;
    std::fstream fill;
    int appid = 0;
    std::string path = "";
    PASS;
    std::cout << "Write the appid for game(if you know) : ";
    std::cin >> appid;
    std::cout << "For example :  D:\\SteamLibrary\\steamapps\\common\\Half-Life\\bavl\\Half-Life\\steam_appid.txt(name of file needs at the end , cause it never work)";
    PASS;
    std::cout << "Path to folder -> where you need create this file :  ";
    std::cin >> path;
    fill.open(path, std::ios::out);
    DEBUG_MESSAGE_APPEAR;
    if (fill.is_open())
    {
        fill << appid;
        fill.close();
    }
    /*
    else
    {
        throw "Error";
    }
    */
    std::system("pause");
}