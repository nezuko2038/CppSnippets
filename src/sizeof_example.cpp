
#include <cstdio>
#include <cstdlib>

/**
 * @brief sizeof example
 * @since 2018-04-10
 */
int main(void)
{

    printf("sizeof(bool)=%ld\n", sizeof(bool));
    printf("sizeof(char)=%ld\n", sizeof(char));
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(long)=%ld\n", sizeof(long));
    printf("sizeof(float)=%ld\n", sizeof(float));
    printf("sizeof(double)=%ld\n", sizeof(double));
    printf("sizeof(short)=%ld\n", sizeof(short));
    typedef struct
    {
        bool b;
        char c;
        float f;
    } st_char;
    printf("sizeof(struct bool/char/float)=%ld\n", sizeof(st_char));
    return 0;
}
