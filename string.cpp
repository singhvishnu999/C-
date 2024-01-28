#include <iostream>
#include<string>
using namespace std;
int main()
{
    string a = "Vishnu ";
    string b = "Singh";
    string c = a + b;
    cout << c << endl;
    cout << a.append(b) << endl;
    cout << c.size() << endl;
    cout << c.length() << endl;

    string d = "it is a amazing match by\"csk\"";
    string e="it\'s a amazing match by\'csk\'";
    string f="it\'s a amazing match by \\CSk";
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;

    string g;
   // cin>>g; //it takes first value as string second not read so we have to use getline()
    getline(cin,g);
    cout<<g<<endl;
    return 0;
}