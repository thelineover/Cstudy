#include <iostream>

using namespace std;
void func(void)
{
    cout << "func(void) call" << endl;
}
void func(char c)
{
    cout << "func(char c) call" << endl;
}
int default_func(int a = 100)
{
    cout << "result a =" << a << endl;
    return a;
}

int main(void)
{
    func();
    func('a');
    int val1 = default_func();
    cout << val1 << endl;
    int val = default_func(1);
    cout << val << endl;
    return 0;
}