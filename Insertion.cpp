#include<iostream>
using namespace std;

void Insertionsort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int temp = arr[i];
        int j= i-1; 
        for(; j>=0 ; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];

            }else{
                break;
            }

        }
        arr[j+1] = temp;
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
    Insertionsort(arr, n);
    printarray(arr,n);
    return 0;
}