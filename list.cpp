#include <iostream>
#include<list>
#include<vector>
using namespace std;
void displaylist(list<int> l){
// for(auto i : l){
    //     cout<<i<<" ";
    // }

list<int>::iterator it;
for(it = l.begin(); it != l.end(); it++){
    cout<<*it<<" ";
    }
}

void displayVec(vector<int> vec){
    for(auto i = vec.begin(); i != vec.end(); i++){
        cout<<*i<<" ";
    }
}

void display(vector<list<int>> v){
    for(const list<int>l : v){
        cout<<'[';
        for(auto i : l){
            cout<<i<<" ";
        }
        // for(auto i = l.begin(); i != l.end(); i++){
        //     cout<<*i<<" ";
        // }
        cout<<']'<<endl;
    }
}

int main(){
//     list<int>l{10,13,34};
//     l.push_back(9);
//     l.push_back(15);
//     l.push_back(45);
//     displaylist(l);
// cout<< endl;
//     vector<int> v{12,14,24};
//     displayVec(v);


    vector<list<int>> adj{{1,2,3,4},{2,4,3},{5,8,6}};
    // adj[1].push_back(10);
    // adj[1].push_back(12);
    // adj[1].push_back(14);
    // adj[2].push_back(23);
    // adj[2].push_back(43);
   display(adj);
    // cout<<adj[1].back();
   
}