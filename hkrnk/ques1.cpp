#include <iostream>
using namespace std;
class Employee
{
    int salary;
    int hrs;

public:
    void getinfo();
    void addSalary();
    void addWork();
    void printSalary()
    {
        cout << "the original salary of the employee is" << salary;
    }
};
void Employee::getinfo()
{
    // int  salary,hrs;
    cout << "enter salary and no of hrs work :";
    cin >> salary >> hrs;
}
void Employee ::addSalary()
{
    if (salary < 500)
    {
        salary = salary + 10;
    }
}
void Employee::addWork()
{
    if (hrs > 6)
    {
        salary = salary + 5;
    }
}

int main()
{
    Employee a;
    a.getinfo();
    a.addSalary();
    a.addWork();
    a.printSalary();

    return 0;
}