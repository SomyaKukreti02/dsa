#include <iostream>
using namespace std;

void printUnion(int arr1[], int n1, int arr2[], int n2) {
    int i=0, j=0;

    while(i<n1 && j<n2) {

        if(arr1[i]<arr2[j]) {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr2[j]<arr1[i]) {
            cout<<arr2[j] <<" ";
            j++;

            
        }

        else {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n1) {
        cout<<arr1[i] <<" ";
        i++;
    }

    while(j<n2) {
        cout<<arr2[j]<<" ";
    }
}
int main() {
    int n1, n2;
    
}