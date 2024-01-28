#include <iostream>
using namespace std;
//check whether number is repeat or not in array;
int nums[] = {1, 5, 4, 5, 6};
int length()
{
    int a = sizeof(nums) / sizeof(nums[1]);
    return a;
}
bool check()
{
    for (int i = 0; i < length()-1; i++)
    {

        for (int j = i+1; j < length() ; j++)
        {
            if (nums[i] == nums[j])
            {
                return true;
            }
        }   
    }
     return false;
}

int main()
{
    cout << check();
    return 0;
}