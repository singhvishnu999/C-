#include <iostream>
using namespace std;

int nums[] = {0,1,2,4,5,6,7};
int k = 3;
int length();
int rotate()
{
     int arr[7];
     int search;
     cin>>search;

    for (int i = 0; i < length(); i++)
    {
        arr[i] = nums[i];
    }
    int a=0;
    for(int i=k; i<length(); i++){
        nums[a] = arr[i];
        a++;
    }
    int b=0;
    for(int i=k+1; i<length(); i++){
        nums[i] = arr[b];
        b++;
    }
    for(int i=0; i<length(); i++){
        cout<<nums[i];
    }
    cout<<endl;
    for(int i=0; i<length(); i++){
        if(nums[i]==search){
            return i;
        
        }
    }
    return -1;
   
}

int main()
{

   cout<<rotate();
    return 0;
}
int length()
{
    int a = sizeof(nums) / sizeof(nums[1]);
    return a;
}