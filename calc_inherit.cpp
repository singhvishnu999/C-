#include<iostream>
using namespace std;
class simple_calc{
protected:
int a,b;
public:
void set_num(int num1,int num2){
    a=num1;
    b=num2;
}
void get_number(){
    cout<<"the sum is :"<<a+b<<endl;
    cout<<"the subtraction is :"<<a-b<<endl;
    cout<<"the multiplication is :"<<a*b<<endl;
    cout<<"the divisiion is :"<<a/b<<endl;
}

};
class scientific_calc {
    protected:
    int a,b;
    public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void process(){
        double c,d;
        cout<<"the square root is :"<<c*c<<" and "<<d*d<<endl;
        cout<<"the cube root of given number is "<<c*c*c<<" and "<<d*d*d<<endl;
       }
    };

    class hybrid : public simple_calc, public scientific_calc {
       public:
       int c,d;
       void abc(){
       simple_calc::set_num(c,d);
       simple_calc::get_number();
       scientific_calc::process();
       }
    };

    int main(){

       hybrid test;
       test.set_num(4,5);
       test.get_number();
       test.process()
;        return 0;
    }