#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include <stdexcept>
#include "info_header.h"
#include "function_steam_appid.h"
int main()
{
    GETID GetAPPID = 0;
    GETPATH GETINFO = "";
    INFO_ABOUT_PATH;
    START;
    PASS;
    EXAMPLE_INFO;
    PASS;
    INFO_ABOUT_PATH_2;
    // std::string paths = "";
    std::cin >> GETINFO;
    INFO_ABOUT_PATH_3;
    std::cin >> GetAPPID;
    MakeFile_Steam(GetAPPID , GETINFO);
    std::system("pause"); // lock fast close of program
}