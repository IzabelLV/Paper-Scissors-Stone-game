#include "game.h"


int main()
{
    srand(time(NULL));
    PSS pss1;
    pss1.screen();
    int option, rounds;
    std::cout << "How many rounds do you want to play with the Robot? ";
    std::cin >> rounds;

    int counter = 0;
    for(int counter = 0; counter < rounds; ++counter)
    {
        std::cout << "Select option: ";
        std::cin >> option;
        
        int robotOption = rand() % 3 + 1;

        std::string playerPick = pss1.pick(option);
        std::string robotPick = pss1.pick(robotOption);
        std::cout << "You played " << playerPick << ", the Robot picked " << robotPick << " and " << pss1.decision(playerPick, robotPick) << std::endl;
    }

    std::cout << "See you next time!\n";

    pss1.waitdown();

    return 0;
}
