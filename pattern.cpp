#include <iostream>
using namespace std;
void butterfly();
void rhombus();
void rhombus2();
void star();

int main()
{
    butterfly();
    rhombus2();
    rhombus();
    return 0;
}

void butterfly()
{
    int row = 5;
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * (row - i);
        for (int j = 0; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = row; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << "*";
        }
        int space = 2 * (row - i);
        for (int j = 0; j <= space; j++)
        {
            cout << " ";
        }
        for(int j = i; j>=0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

void rhombus()
{
    int row = 5;
    for(int i = row; i>=0; i--)
    {
        for(int j = 0; j<i; j++){
            
            cout<<" ";
        }
       cout<<"*****"<<endl;
    }   
}

void rhombus2(){
    int row = 5;
    for(int i = row; i>=0; i--){
        for(int j = 0; j<=i; j++){
            cout<<" ";
        }
        for(int j = 0; j<= row; j++){
            if(i==0||j==0||i==row||j==row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void star(){
    int row = 8;
    for( int i = 0; i <= row; i++)
    {
        for(int j = 0; j < row/2; j++){
            cout<<" ";
        }
        // for()
    }
}