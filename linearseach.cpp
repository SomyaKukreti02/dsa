#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i=0;i<n;i++) {
        if(arr[i]==key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int n, key;

    cout<<"enter the number of elements in the array:";
    cin>>n;
    
    int arr[n];

    cout<<"enter thhe elements of the array:";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"enter the elements to search:";
    cin>>key;

    int result=linearSearch(arr,n,key);

    if(result!=-1) {
        cout<<"elements found at index:"<<result<<endl;

    } else {
        cout<<"element not found"<<endl;
    }
    return 0;
}