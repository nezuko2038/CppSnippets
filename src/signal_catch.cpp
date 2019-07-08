
#include <cstdio>
#include <cstdlib>

volatile sig_atomic_t flag = 0;
void sigterm_handler(int sig)
{
    printf("SIGTERM");
    flag = 1;
}
void sigint_handler(int sig)
{
    printf("SIGINT");
    flag = 1;
}
int main(int argc, char const *argv[])
{
    signal(SIGINT, sigint_handler);
    signal(SIGTERM, sigterm_handler);

    while (!flag)
    {
    }
    printf("END\n");
    return 0;
}
