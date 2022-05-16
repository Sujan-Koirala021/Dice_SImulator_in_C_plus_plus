#include <iostream>
#include <cstdlib>
#include <ctime>

class Dice
{
    int diceFaceNum;

public:
    void generateRandomNum()
    {
        srand(time(0));
        diceFaceNum = rand() % 6;
    }

    void showDiceFaces() // Etching dice faces
    {
        switch (diceFaceNum)
        {
        case 1:
            std::cout << " ___________" << std::endl;
            std::cout << "|           |" << std::endl;
            std::cout << "|           |" << std::endl;
            std::cout << "|     *     |" << std::endl;
            std::cout << "|           |" << std::endl;
            std::cout << "|___________|" << std::endl;
            break;
            
        case 2:
            std::cout << " ___________" << std::endl;
            std::cout << "|           |" << std::endl;
            std::cout << "|           |" << std::endl;
            std::cout << "|   *   *   |" << std::endl;
            std::cout << "|           |" << std::endl;
            std::cout << "|___________|" << std::endl;
            break;

        case 3:
            std::cout << " ___________" << std::endl;
            std::cout << "|           |" << std::endl;
            std::cout << "|        *  |" << std::endl;
            std::cout << "|     *     |" << std::endl;
            std::cout << "|  *        |" << std::endl;
            std::cout << "|___________|" << std::endl;
            break;

        case 4:
            std::cout << " ___________" << std::endl;
            std::cout << "|           |" << std::endl;
            std::cout << "|  *     *  |" << std::endl;
            std::cout << "|           |" << std::endl;
            std::cout << "|  *     *  |" << std::endl;
            std::cout << "|___________|" << std::endl;
            break;

        case 5:
            std::cout << " ___________" << std::endl;
            std::cout << "|           |" << std::endl;
            std::cout << "|  *     *  |" << std::endl;
            std::cout << "|     *     |" << std::endl;
            std::cout << "|  *     *  |" << std::endl;
            std::cout << "|___________|" << std::endl;
            break;

        case 6:
            std::cout << " ___________" << std::endl;
            std::cout << "|           |" << std::endl;
            std::cout << "|  *  *  *  |" << std::endl;
            std::cout << "|           |" << std::endl;
            std::cout << "|  *  *  *  |" << std::endl;
            std::cout << "|___________|" << std::endl;
            break;
        }
    }
};

int main()
{
    Dice d;
    d.generateRandomNum();
    d.showDiceFaces();
}