#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int totalSum=(n*(n+1))/2;

    int actualSum=0;
    for(int i=0; i<n-1; i++) {
        actualSum+=arr[i];
    }

    return totalSum- actualSum;
}

int main() {
    int n;

    cout<<"enter the total number of elements(n):";
    cin>>n;
    int arr[n-1]; 
    
   
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }
    
   
    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;
    
    return 0;
}
