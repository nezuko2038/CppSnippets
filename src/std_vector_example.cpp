
#include <iostream>
#include <vector>

using namespace std;

class ClassA
{
public:
    ClassA()
    {

        memset(&buf[0], 0x00, sizeof(buf));
    }

    ~ClassA()
    {
    }

private:
    char buf[1000000];
};

int main(int argc, char const *argv[])
{
    // class を格納
    vector<ClassA> objectVector;
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        ClassA o;
        printf("[%d]0x%x\n", i, &o);
        objectVector.push_back(o);
    }
    assert(objectVector.size() == size);
    for (int i = 0; i < size; i++)
    {
        printf("[%d]0x%x\n", i, &objectVector.at(i));
    }

    //------------------------------------
    // char*を格納
    vector<char *> charPointerVector;

    char *buf = new char[size];
    for (int i = 0; i < size; i++)
    {
        buf[i] = 'a';
    }

    for (int i = 0; i < size; i++)
    {
        charPointerVector.push_back(&buf[0]);
    }

    delete[] buf;
    buf = 0;

    char *buf2 = charPointerVector[0];
    // cout << buf2 << endl;
    return 0;
}
