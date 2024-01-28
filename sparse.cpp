#include <iostream>
using namespace std;
struct sparse{
    int row;
    int column;
    int value;
    sparse *next;
};

void insert(sparse *a, int r,int c, int v){
    sparse *b = new sparse;
    b -> row = r;
    b -> column = c;
    b -> value = v;
    b -> next = a;

    while(a -> next != NULL){
        a = a -> next;
    }
   a-> next = b;
     b -> next = NULL;
}

void display(sparse *head){
    while(head->next!=NULL){
         head = head->next;
        cout<<head->row<<" "<<head->column<<" "<<head->value<<endl;
    }
}

void spp(int arr[][3]){
    for(int i = 0; i<3; i++){
        for(int j =0; j<3; j++){
            if(arr[i][j]!=0){
                cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
            }
        }
    }
}

int main(){
    int arr[3][3] = {{1,0,0},{0,2,0},{2,5,0}};
     sparse *a;
     a = new sparse;
    a->next = NULL;
    for(int i = 0; i< 3; i++){
        for(int j = 0; j<3; j++){
            if(arr[i][j] != 0){
                insert(a,i,j,arr[i][j]);
            }
        }
    }
spp(arr);
cout<<endl<<"sparse matrix with linked list: "<<endl;
    display(a);
return 0;
}