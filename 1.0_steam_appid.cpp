#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include "info_header.h"
 
int main()
{
    
    std::fstream fill;
    int GetAPPID = 0;
    std::string GETINFO = "";
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
    // doinfo.setInfo(paths, appid);
    // doinfo.CreateFile()

    fill.open(GETINFO, std::ios::out);
    if (fill.is_open())
    {
        fill << GetAPPID;
        DEBUG_MESSAGE_APPEAR;
        fill.close();
    }
    std::system("pause"); // lock fast close of program
}