

#include "ClassA.hpp"

ClassA::ClassA() {}
ClassA::~ClassA()
{
}
int main(int argc, char const *argv[])
{

    ClassA obj1;
    ClassA *obj2 = new ClassA;
    delete obj2;
    return 0;
}
