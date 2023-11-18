
#include "info_header.h"

void MakeFile_Steam(int appid , std::string path)
{
    std::fstream fill;
    fill.open(path, std::ios::out);
    if (fill.is_open())
    {
        fill << appid;
        DEBUG_MESSAGE_APPEAR;
        fill.close();
    }
}