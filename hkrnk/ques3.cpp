#include<iostream>
using namespace std;
int length();
int nums[]={-1,0,1,2,-1,-4} ;
int triplet(){
    for(int i=0; i<length()-2; i++){
        for(int j=i+1; j<length()-1; j++){
            for (int k=j+1; k<length(); k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    int newarr[] = {nums[i],nums[j],nums[k]};
                    cout<<"["<<nums[i]<<","<<nums[j]<<","<<nums[k]<<"]";
                }             
            }
        }
    }
}
int main(){
    triplet();
    return 0;
}
int length()
{
    int a = sizeof(nums) / sizeof(nums[1]);
    return a;
}