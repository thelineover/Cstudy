#include <iostream>

int main(void)
{
    int val1, val2;
    std::cout << "first input : ";
    std::cin >> val1;
    std::cout << "second input : ";
    std::cin >> val2;

    int result = val1 + val2;
    std::cout << "Add two input result : " << result << std::endl;
}