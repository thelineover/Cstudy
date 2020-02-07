#include <iostream>
#include <time.h>

int main(void)
{
    clock_t start, end;
    start = clock();
    std::cout << "test" << std::endl;
    end = clock();
    double execute_time = end - start;
    std::cout << "result : " << ((execute_time) / CLOCKS_PER_SEC) << " seconds" << std::endl;
    return 0;
}