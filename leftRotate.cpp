#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array";
    for(int i=0; i<n;i++) {
        cin>>arr[i];
    }
    int first=arr[0];
    for(int i=0; i<n-1; i++) {
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
    cout<<"array after left rotation by one place";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}