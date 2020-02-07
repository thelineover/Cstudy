#include <iostream>

namespace thelineover
{
void func(void)
{
    std::cout << "thelineover" << std::endl;
}
} // namespace thelineover

namespace summmin
{
void func(void)
{
    std::cout << "summmin" << std::endl;
}
} // namespace summmin

using thelineover::func;
int main(void)
{
    func();
    return 0;
}