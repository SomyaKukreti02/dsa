#include <iostream>
#include <unordered_map>
using namespace std;

void findUniqueElements(int arr[], int n) {
    unordered_map<int,int> freqMap;

    for(int i=0; i<n; i++) {
        freqMap[arr[i]]++;
    }

    cout<<"elements that appear only once:";
    for(int i=0; i<n; i++) {
        if(freqMap[arr[i]]==1) {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;

}

int main() {
    int n;

    cout<<"enter the number of elements in the array:";
    cin>>n;
    int arr[n];

    cout<<"enter the elements of the array";
    for(int i=0;i<n;i++) {
        cin>>arr[i];

    }

    findUniqueElements(arr,n);

    return 0;
}