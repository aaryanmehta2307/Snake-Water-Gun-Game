#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int SWN(char, char);
int main()
{
    srand(time(0));
    int a;
    int choice;

abc:
    a = rand() % 100;
    char comp, you;

    if (a < 33)
    {
        comp = 'S';
    }
    else if (a < 66)
    {
        comp = 'W';
    }
    else
    {
        comp = 'G';
    }

    you = '\0';
    cout << "Enter your choice (S, W, G): ";
    cin >> you;

    int x = SWN(comp, you);

    if (x == 1)
    {
        cout << "You choose " << you << " and the computer chooses " << comp << std::endl;
        std::cout << "You Win!" << std::endl;
    }
    else if (x == -1)
    {
        cout << "You choose " << you << " and the computer chooses " << comp << std::endl;
        cout << "You Lose!" << std::endl;
    }
    else
    {
        cout << "Both choose the same: " << you << std::endl;
        cout << "Game Draw!" << std::endl;
    }

    cout << "Enter 1 to play again or 0 to stop: ";
    cin >> choice;

    if (choice == 1)
    {
        goto abc;
    }

    return 0;
}

int SWN(char comp, char you)
{
    if (comp == you)
    {
        return 0;
    }

    if (comp == 'S' && you == 'W')
    {
        return -1;
    }
    else if (comp == 'W' && you == 'S')
    {
        return 1;
    }

    if (comp == 'W' && you == 'G')
    {
        return -1;
    }
    else if (comp == 'G' && you == 'W')
    {
        return 1;
    }

    if (comp == 'G' && you == 'S')
    {
        return -1;
    }
    else if (comp == 'S' && you == 'G')
    {
        return 1;
    }

    return 0;
}
