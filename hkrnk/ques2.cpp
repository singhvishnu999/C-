#include<iostream>
using namespace std;
int prices[]={65,10,15,80,47,87};
 int length();
int main(){
    int a=0;
    int b;
    
    for(int i=0; i<length()-1; i++){
        if(a<prices[i]){
            a=prices[i];
        }
    }
    cout<<a;
    // length();


    return 0;
}
int length(){
    float a=sizeof(prices)/sizeof(prices[1]);
    // cout<<"length of price is "<<a;
    return a;
}