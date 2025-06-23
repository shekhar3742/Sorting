#include<iostream>
using namespace std;

void selection(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printarray(int arr[], int n){
    cout<<"sorted array : " <<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    
    for(int i=0 ; i<n; i++){
        cout<<"Enter number"<<endl;
        cin>>arr[i];
        
    }

    cout<<"unsorted array : "<<endl;
       for(int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    
    selection(arr, n);
    printarray(arr, n);
    return 0;
}