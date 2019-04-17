#include <cstdio>
#include <cstdlib>

class A
{
public:
    virtual void foo() {}
};
class B : public A
{
public:
    void foo() {}
};
class C
{
    virtual void foo() {}
};
/**
 * @brief  cast
 * 
 * 
 * @since 2015-01-01 
 */
int main(int argc, char const *argv[])
{

    //static cast
    // 実行しなくてもわかる危険なキャストはコンパイルエラーになる。
    int a = 0;
    int *p = &a;
    //int *ptr = static_cast<int *>(a); // error
    int *ptr = (int *)a; //warning

    //reinterpret_cast
    // 危険なキャスト

    //const cast
    // const をはずすためのキャスト
    // volatile もはずせる
    const int *b = &a;
    int *bb = const_cast<int *>(b);
    //dynamic cast
    A objA;
    B objB;
    C objC;
    A *objBA = &objB;
    B *objBB = dynamic_cast<B *>(objBA); // OK
    printf("objBB= %p/", objBB);
    B *objCB = dynamic_cast<B *>(&objC); // =0
    printf("objCB= %p/", objCB);
    return 0;
}
