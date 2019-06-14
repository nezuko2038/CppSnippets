
#include <iostream>
#include <vector>

using namespace std;

class ClassA
{
public:
    ClassA()
    {
        cout << "Class()" << endl;
    }
    ~ClassA()
    {
        cout << "~ClassA()" << endl;
    }
};

int main(int argc, char const *argv[])
{
    vector<ClassA> v;
    v.push_back(ClassA());

    vector<char *> charPointerVector;

    char *buf = new char[10];
    for (int i = 0; i < 10; i++)
    {
        buf[i] = i + 'a';
    }
    charPointerVector.push_back(&buf[0]);

    delete[] buf;
    buf = 0;

    char *buf2 = charPointerVector[0];
    cout << buf2 << endl;
    return 0;
}
