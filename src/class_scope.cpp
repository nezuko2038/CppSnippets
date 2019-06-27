#include <cstdio>
#include <iostream>
using namespace std;

class A
{
public:
    void public_method() { cout << "public " << endl; }

protected:
    void protected_method()
    {
        cout << "protected " << endl;
    }

private:

};
class B : public A
{
};

int main(int argc, char const *argv[])
{
    B obj;
    obj.public_method();
    return 0;
}
