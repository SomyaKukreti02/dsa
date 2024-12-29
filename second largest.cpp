#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array:\n";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int firstLargest=arr[0];
    int secondLargest=-1;

    for(int i=1;i<n;i++) {
        if(arr[i]>firstLargest) {
            secondLargest=firstLargest;
            firstLargest=arr[i];

        } else if(arr[i]>secondLargest&& arr[i]!=firstLargest) {
            secondLargest=arr[i];
        }
    }
    if (secondLargest!=-1)
    cout<<"The second Largest element in the array is"<<secondLargest<<endl;
    else
    cout<<"No second largest element found"<<endl;
    return 0;
    
}