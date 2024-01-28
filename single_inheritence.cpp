#include <iostream>
using namespace std;
class employee
{
    int id;
    // id is private member not inherited.
public:
    float salary;
    employee(int a)
    {
        id = a;
    }
    void getid(int a)
    {
        id = a;
    }
    int displayid()
    {
        return id;
    }
    employee() {}
};

class programmer : public employee
{
    int languagecode;

public:
    int add;
    // inherit id of employee through methods(function).
    programmer(int a)
    {
        getid(a);
    }
    programmer() {}
    int getlang(int b)
    {
        languagecode = b;
    }
    int displaylang()
    {
        return languagecode;
    }
};

int main()
{
    employee e1, e2(9);
    e1.salary = 3400;

    cout << "the id of employee is " << e2.displayid() << endl;
    cout << "The salary of employee is " << e1.salary << endl;
    cout << endl;
    
    programmer p1(5), p2;
    p1.getlang(5);
    cout << "the id of programmer is " << p1.displayid() << endl;
    cout << "the language of programmer is " << p1.displaylang() << endl;
    p1.salary = 4800;
    cout << "the salary of programmer is" << p1.salary << endl;
    p1.add = 01;
    cout << "the address of programmer is " << p1.add << endl;

    return 0;
}