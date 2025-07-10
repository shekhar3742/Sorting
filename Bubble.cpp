#include<iostream>
using namespace std;

void Bubblesort(int n , int arr[]){
    for(int i = n-1; i>=0 ; i--){
        for(int j=0; j<= i-1; j++){
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            
        }
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
    cout<<"Enter size : "<<endl;
    cin>>n;
    int  arr[n];
    for(int i = 0; i<n; i++){
        cout<<"Enter number : "<<endl;
        cin>>arr[i];
    }

    cout<<"unsorted array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    Bubblesort(n,arr);
    printarray(arr,n);

    return 0;
}