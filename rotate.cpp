#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while(start<end) {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void leftRotate(int arr[], int n, int d) {
    d=d%n;

    reverseArray(arr,0,d-1);

    reverseArray
}
