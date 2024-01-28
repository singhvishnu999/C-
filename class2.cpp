#include<iostream>
using namespace std;

class car{
    public:
    string st;
    int clas;
    int rollNo;
void output();
};
void car::output(){
    cout<<st<<endl;
    cout<<clas<<endl;
    cout<<rollNo<<endl;
}

int main(){
    class car c1,c3;
    class car c2 = {"singh", 11,45};
    c1={"vishnu", 1, 12};
    c3.st="mohan";
    c3.clas=8;
    c3.rollNo=12;
    cout<<c1.st<<endl;
    cout<<c1.clas<<endl;
    cout<<c1.rollNo<<endl;
    cout<<c2.st<<endl;
    cout<<c2.clas<<endl;
    cout<<c2.rollNo<<endl;
    c3.output();
    return 0;
}