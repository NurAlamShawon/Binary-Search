#include<iostream>
using namespace std;

int Binary_search(int A[], int p, int r, int key){
    int mid=(p+r)/2;


if(p<r){

    if(A[mid]==key){
        return true;
    }
    else if(A[mid]>key){
        return Binary_search(A, p, mid-1,key);
    }
    else if(A[mid]<key){

        return Binary_search(A,mid+1,r,key);
    }

  }

}
int main(){

int p=0,r;
cout<<"Enter the array number";
cin>>r;
int A[r];
for(int i=0;i<r;i++){
    cin>>A[i];
}
int key;
cout<<"enter the key ";
cin>>key;
int counter=Binary_search(A,p,r,key);
if(counter==true){
    cout<<"Key found in the array";
}else{
cout<<"key not found in the arrray";
}



}
