#include <iostream>
#include <string>
#include <thread>


class PSS
{
public:

    void screen()
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

    std::string pick(int option)
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

    std::string decision(std::string player, std::string AI)
    {
        if ((player == "Paper" && AI == "Paper") || (player == "Scissors" && AI == "Scissors") || (player == "Stone" && AI == "Stone"))
        {
            return "it's a Tie !";
        }
        else if (player == "Paper" && AI == "Scissors")
        {
            return "AI wins !";
        }
        else if (player == "Paper" && AI == "Stone")
        {
            return "you win !";
        }

        if (player == "Scissors" && AI == "Stone")
        {
            return "AI wins !";
        }
        else if (player == "Scissors" && AI == "Paper")
        {
            return "you win !";
        }

        if (player == "Stone" && AI == "Paper")
        {
            return "AI wins !";
        }
        else if (player == "Stone" && AI == "Scissors")
        {
            return "you win !";
        }
    }

    void waitdown()
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    }
};


int main()
{
    srand(time(NULL));
    PSS pss1;
    pss1.screen();
    int option, rounds;
    std::cout << "How many rounds do you want to play with the AI? ";
    std::cin >> rounds;

    int counter = 0;
    for(int counter = 0; counter < rounds; ++counter)
    {
        std::cout << "Select option: ";
        std::cin >> option;
        
        int AIoption = rand() % 3 + 1;

        std::string playerPick = pss1.pick(option);
        std::string AIpick = pss1.pick(AIoption);
        std::cout << "You played " << playerPick << ", the AI picked " << AIpick << " and " << pss1.decision(playerPick, AIpick) << std::endl;
        counter++;
    }

    std::cout << "See you next time!\n";

    pss1.waitdown();

    return 0;
}