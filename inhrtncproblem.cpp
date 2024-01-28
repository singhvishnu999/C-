#include <iostream>
using namespace std;
class Circle{
    public:
    int radius;  
    Circle(){
        cout<<"Circle constructor take no parameter"<<endl; 
    }
    Circle(int r){
        cout<<"I am circle parameterized constructor"<<endl;
        radius = r;
    }

    double area(){
        return 3.14*radius*radius;
    }
};

class Cylinder1 : public Circle {
    int height;
    public:
    Cylinder1() {
        cout<<"Cylinder constructor take no parameter"<<endl;
    }
    
    Cylinder1(int r, int h) : Circle(r) {
        cout<<"I am cylinder1 parameterized constructor"<<endl;
        height = h;
    }
    double volume(){
        return 3.14*radius*radius*height;
    }
};

// class inheritance : public Circle, public Cylinder1{

// };

int main(){
    Cylinder1 obj(11,24);
    // Circle obj2(5);
    cout<<obj.area()<<endl;
    cout<<obj.volume();
    return 0;
}