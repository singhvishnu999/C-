#include <iostream>
#include <vector>
using namespace std;
template<class T>
class A{
private:
void subarray(vector<T>&nums, vector<T>output, vector<vector<T>>& ans, int idx)
{
    if(idx >= nums.size()){
        // if(output.size() > 0){
        ans.push_back(output);
        // }
        return;
    }
    cout<<"index is " <<idx<<" ";
    subarray(nums, output, ans, idx+1);
    int element = nums[idx];
    output.push_back(element);
    cout<<"indexes is "<<idx<<" ";
    subarray(nums, output, ans, idx+1);
    cout<<endl;
}

public:
vector<vector<T>> array(vector<T>& nums){
    int idx = 0;
    vector<T> output;
    vector<vector<T>> ans;
    subarray(nums, output, ans, idx);
    return ans; 
}
};

int main(){
    class A<int> a;
    vector<int> nums = {1, 2, 3};
    vector<int> output;
    vector<vector<int>> ans = a.array(nums);    

    // class A<char> b;
    // vector <char> s {'a', 'b', 'c'};
    //  vector<char> output;
    // vector<vector<char>> ans = b.array(s);    

    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) 
            cout << ans[i][j] << " "; 
        cout << endl; 
    } 
    
    return 0;
}