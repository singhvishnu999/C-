#include <iostream>
#include <vector>
using namespace std;

class A
{
private:
    void solve(string nums, string output, vector<string> &ans, int idx, string mapping[])
    {
        if (idx >= nums.size())
        {
            ans.push_back(output);
            return;
        }
        int digit = nums[idx] - '0';
        string value = mapping[digit];
        for(int i = 0; i<value.length(); i++){
            output.push_back(value[i]);
            solve(nums, output, ans, idx+1, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> stringdigit(string str)
    {
        int idx = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output;
        vector<string> ans;
        solve(str, output, ans, idx, mapping);
        return ans;
    }
};

int main()
{
    class A a;
    vector<string> ans;
    ans = a.stringdigit("234");
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " " << endl;
    }
    return 0;
}