#include <iostream>
#include <vector>
using namespace std;
class Vishnu{
    public:
vector<int> sum(vector <int> &v, vector <int> &v1){
    int sum = 0;
    int carry = 0;
    int i = v.size()-1;
    int j = v1.size()-1;
    vector<int> temp;
   
    while(i>=0 && j >= 0){
       sum = v[i] + v1[j] + carry;
       temp.push_back(sum%10);
       carry = sum/10;
       i--;
       j--;
    }
    while(i>=0){
        sum = v[i] + carry;
        temp.push_back(sum%10);
        carry = sum/10;
        i--;
    }
    while(j>0){
        sum = v1[j] + carry;
        temp.push_back(sum % 10);
        carry = sum/10;
        j--;
    }

    while(carry!=0){

        temp.push_back(carry);
        carry = carry/10;
    }

   for (int k= temp.size() - 1; k>=0; k--) {
    cout << temp[k] << "  ";
  }
    return temp;
}
};

int main()
{
Vishnu v;
vector <int> v1;
vector <int> v2;
v1.push_back(5);
v1.push_back(3);
v1.push_back(2);
v1.push_back(7);

v2.push_back(5);
v2.push_back(3);
v2.push_back(3);
// v2.push_back(7);

v.sum(v1,v2);

return 0;
}