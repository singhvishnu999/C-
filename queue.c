#include<stdio.h>
#define size 6
    int front = -1;
    int rear = -1;
void insert( int arr[size], int data){
    if(rear==size-1){
        printf("queue is full");
    }
    else{
        if(front==-1 && rear==-1){
            front = 0;
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear]= data;
    }
}

void del(int arr[size]){
    if(rear==front){
        printf("queue is underflow");
    }
    else {
        for(int i=0; i<=rear; i++){
            arr[i]= arr[1+i];
        }
        rear --;
    }
}
 void display(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);

    }
 }

 int main(){
    int arr[6];
    insert(arr, 40);
    insert(arr, 50);
    insert(arr, 60);
    insert(arr, 70);
    insert(arr, 80);
    insert(arr, 90);


    display(arr, 6);
    printf("\nafter deletion the element in queue are : ");
    del(arr);
    del(arr);

    display(arr,4);
    return 0;

 }-