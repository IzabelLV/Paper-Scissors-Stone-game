#include "game.h"

void PSS::screen()
{
        std::cout << "\t\t\t\t ===================================================\n"
                     "\t\t\t\t|                                                   |\n"
                     "\t\t\t\t|                                                   |\n"
                     "\t\t\t\t|              PAPER  SCISSORS  STONE               |\n"
                     "\t\t\t\t|                                                   |\n"
                     "\t\t\t\t|                                                   |\n"
                     "\t\t\t\t|                1       2       3                  |\n"
                     "\t\t\t\t|                                                   |\n"
                     "\t\t\t\t ===================================================\n";
}


std::string PSS::pick(int option)
{
    if (option == 1)
    {
        return "Paper";
    }
    else if (option == 2)
    {
        return "Scissors";
    }
    else if (option == 3)
    {
        return "Stone";
    }
    return "Invalid!";
}


std::string PSS::decision(std::string player, std::string robot)
{
    if ((player == "Paper" && robot == "Paper") || (player == "Scissors" && robot == "Scissors") || (player == "Stone" && robot == "Stone"))
    {
        return "it's a Tie !";
    }
    else if (player == "Paper" && robot == "Scissors")
    {
        return "the Robot wins !";
    }
    else if (player == "Paper" && robot == "Stone")
    {
        return "you win !";
    }

    if (player == "Scissors" && robot == "Stone")
    {
        return "the Robot wins !";
    }
    else if (player == "Scissors" && robot == "Paper")
    {
        return "you win !";
    }

    if (player == "Stone" && robot == "Paper")
    {
        return "the Robot wins !";
    }
    else if (player == "Stone" && robot == "Scissors")
    {
        return "you win !";
    }
    return "Error!";
}


void PSS::waitdown()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}