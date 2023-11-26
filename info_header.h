#pragma once
#include <string>
#include <fstream>
#ifndef _INFO_HEADER_H
#define _INFO_HEADER_H
#define START std::cout << "-------------------------------------------------------------------------------------------------------------------";
#define DEBUG_MESSAGE_APPEAR std::cout << "The steam appid is created!!!!!";
#define PASS std::cout << "\n";
#define INFO_ABOUT_PATH std::cout << "Hello , THAT IS PROGRAM WHICH CREATING FOR GAME STEAM_APPID IF STEAM DELETING(FOR NON STEAM GAME)" << std::endl;
#define INFO_ABOUT_PATH_2 std::cout << "Path to folder -> where you need create this file :  ";
#define INFO_ABOUT_PATH_3 std::cout << "Write the appid for game(if you know) : ";
#define EXAMPLE_INFO std::cout << "For example :  D:\\SteamLibrary\\steamapps\\common\\Half-Life\\bavl\\Half-Life\\steam_appid.txt(name of file needs at the end , cause it never work)";
#define PATH_ERROR std::cout << "UNKHOWN PATH";
#endif
typedef std::string GETPATH;
//typedef std::fstream MAKEFILE;
typedef int GETID;