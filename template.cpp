#include <iostream>
using namespace std;
template <class T>

class Vishnu{
    public:
    T a;
    T b;

T sum(Vishnu &v){
    return v.a+v.b;
}
};
template <class t1>
t1 vector(t1 a, t1 b){
    return a*b;
}
int main(){
    Vishnu <int> v1;
    v1.a = 2;
    v1.b = 4;
    cout<<v1.sum(v1);
    cout<<vector(3,9);
    return 0;
}