#ifndef _CLASS_HPP_
#define _CLASS_HPP_

class ClassA
{
public:
    ClassA();
    virtual ~ClassA();
    ClassA(const ClassA &obj);

private:
    ClassA &operator=(const ClassA &);
};
#endif