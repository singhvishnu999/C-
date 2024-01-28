#include<iostream>
#include <string>
using namespace std;

char lowercase(char c){
    if((c >= 'a' &&c <= 'z') || (c >= '0' && c <= '9')){  
        return c;
    }
    c = c-'A'+'a';
    return c;
}

bool valid(char ch){
     if((ch >= 'a' && ch <='z') || (ch >= '0' && ch <= '9') || (ch>= 'A' &&ch <= 'Z')){
            return 1;
        }
        return 0;
}
string reverse(string s){
    int st = 0;
    int e = s.length() - 1;
    while(st <= e){
        swap(s[st], s[e]);
        st++;
        e--;
    }
    return s;
}

bool palindrome(string s){
    int st = 0;
    int e = s.length() - 1; 
    while(st<=e)
    {
        if(s[st] != s[e])
        {
           return 0;
        }
        else
        {
            st++;
            e--;
        }
    }
    return 1;
}

  bool isPalindrome(string s) {
    string temp = "";
    
    for(int i = 0; i  < s.length(); i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
        for(int i = 0; temp[i] != '\0'; i++){
        temp[i] = lowercase(temp[i]);
    }
    return palindrome(temp);
       
    }

int main(){
    // cout<<"the reverse string is :"<<reverse("vishnu")<<endl;;
    cout<<"String is palindrome or not : "<<boolalpha<< palindrome("A man, a plan, a canal: Panama")<<endl;
    // cout<<lowercase('3')<<endl;
    return 0;
}