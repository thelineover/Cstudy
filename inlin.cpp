#include <iostream>

using namespace std;

inline int sqr(int x)
{
    return x * x;
}

int main(void)
{
    cout << sqr(5) << endl;
}