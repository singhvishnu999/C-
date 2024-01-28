#include<iostream>
using namespace std;
int main(){
    int a,b,c;
cin>>a;
cin>>b;
cin>>c;
if(a>b||a>c){
    cout<<a<<" is largest number";
}
else if (b>c||b>a)
{
    cout<<b<<" is largest number";
}
else{
    cout<<c<<"c is largest number";
}
return 0;
}

