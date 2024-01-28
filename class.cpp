#include <iostream>
#include<string>
using namespace std;
using std :: string;
class vishnu{
    private:
    string name;
    int age;
    char gender;
    public:
    vishnu(string s,int a,char c){
        name=s;
        age=a;
        gender=c;
    }
    vishnu(){
        // getline(cin,name);
        
        cin>>name>>age>>gender;
    }
    void input(string n,int a,char g){
     name=n;
     age=a;
     gender=g;
    }
    void output();
   int increase();


};

void vishnu :: output(){
    cout<<"the name is : "<<name<<endl;
    cout<<"the age is : "<<age<<endl;
    cout<<"the gender is : "<<gender<<endl;

}
int vishnu::increase(){
    return age+1;
}
 
int main(){

   class vishnu v1("vishnu",19,'m');
//    vishnu();
//    string s; int i;char c;
//    cin>>s>>i>>c;
//    v1.input( s, i, c);
    v1.output();
    vishnu v2;
    vishnu v3;
    // cout<<endl;
    v2.output();
    v3.output();
    
    // cout<<"the name of v1 is "<<v1.name<<endl;
    // cout<<"the age of v1 is "<<v1.age<<endl;
    // cout<<"the gender of v1 is "<<v1.gender<<endl;
    // cout<<"the new age is "<<v1.increase();
    return 0;
}