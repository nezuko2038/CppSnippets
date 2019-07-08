#include <cstdio>

#define DEBUG_LOG(fmt, ...) std::printf(fmt, __VA_ARGS__)
int main(int argc, char const *argv[])
{

    //可変引数マクロvariadic macros
    DEBUG_LOG("%s\n", "a");
    return 0;
}
