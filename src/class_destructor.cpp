#include <cstdio>
#include <cstdlib>
class A
{
public:
    A()
    {
        printf("A()\n");
        fflush(stdout);
    }
    virtual ~A()
    {
        printf("~A()");
        fflush(stdout);
    }
};
int main(int argc, char const *argv[])
{
    A o;
    //  A *a = new A;
    while (true)
    {
    }
    return 0;
}
