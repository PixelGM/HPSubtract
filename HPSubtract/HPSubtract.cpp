#include <iostream>
#include <Windows.h>

int hp = 100;

int main()
{
    std::cout << "Health is: " << hp << std::endl;

    while (true)
    {
        if (GetAsyncKeyState(VK_F1) & 1)
        {
            hp -= 7;
            std::cout << "Health: " << hp << std::endl;
        }
    }
}