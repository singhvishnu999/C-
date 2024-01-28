#include <iostream>
using namespace std;

class binary
{
private:
    string num;
    void check();

public:
    void read();
    void display();
    void makeBinary();
};
void binary::makeBinary()

{
    check();
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) != '0' && num.at(i) != '1')
        {
            num.at(i) = 1;
        }
    }
}

void binary::display()
{
    for (int i = 0; i < num.length(); i++)
    {
        cout << num.at(i);
    }
    cout << endl;
}
void binary::read()
{
    cout << "enter a binary number :";
    cin >> num;
}

void binary::check()
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) != '0' && num.at(i) != '1')
        {
            cout << "number is not binary" << endl;
                break; // exit(0); 
        }
    }
}

int main()
{
    class binary b1;
    b1.read();
    // b1.check();
    b1.display();
    b1.makeBinary();
    b1.display();
    return 0;
}