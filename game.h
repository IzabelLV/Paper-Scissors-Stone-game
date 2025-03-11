#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <thread>


class PSS
{
    public:
    void screen();
    std::string pick(int option);
    std::string decision(std::string player, std::string robot);
    void waitdown();
};

#endif