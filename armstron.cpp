#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

bool armstrong(int n){  
    int sum = 0;
    int temp = n;

    while(temp!=0){
        int r = temp%10;
        sum += r*r*r;
        temp /= 10;
    }

    cout<<sum<<endl;
    return sum==n;
}

int power(int a, int b){
   int result = 1;
    for(int i = 0; i<b; i++){
        result = result*a;
    }
    return result;
}

int main(){
   cout<<boolalpha<<armstrong(153);
   cout<<endl<<power(4,5);
    return 0;
}