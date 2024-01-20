#include <iostream>
using namespace std;
int main(){
    int size, k;
    cin>>size>>k;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0; i<k; i++){
        int temp;
        temp = arr[k+i+1];
        arr[k+i+1] = arr[i];
        arr[i] = temp;
    }
    cout<<endl;
    for (int i=k; i<size-1; i++){
        int temp;
        temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
    cout<<endl;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<',';
    }
}
