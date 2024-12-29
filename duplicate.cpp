#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int n) {
    int temp[n];
    int j=0;

    for(int i=0; i<n; i++) {
        bool isDuplicate = false;

        for(int k=0; k<j; k++) {
            if(arr[i]==temp[k]) {
                isDuplicate =true;
                break;
            }
        }
        if(!isDuplicate) {
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=0; i<j; i++) {
        arr[i]=temp[i];
    }

     cout << "Array after removing duplicates: ";
    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    removeDuplicates(arr, n);

    return 0;
}