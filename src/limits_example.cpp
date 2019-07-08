#include <limits.h>
#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[])
{

    unsigned long v = LONG_MAX;
    printf("%lu\n", v);
    long v2 = v;
    printf("%u\n", v2);

    unsigned long v3 = v2;
    printf("%lu\n", v3);
    return 0;
}
