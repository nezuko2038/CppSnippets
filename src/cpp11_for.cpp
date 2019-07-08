#include <cstdio>
#include <iostream>
#include <vector>
int main(int argc, char const *argv[])
{
    std::vector<int> v;

    for (const auto &e : v)
    {
        std::cout << e << std::endl;
    }
    return 0;
}
