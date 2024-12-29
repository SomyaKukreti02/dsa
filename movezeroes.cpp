#include <iostream>
#include <vector>
using namespace std;

void moveZeroesToEnd(vector<int>& nums) {
    int nonZeroIndex=0;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i]!=0) {
            nums[nonZeroIndex++] = nums[i];
        }
    }

    while(nonZeroIndex< nums.size()) {
        nums[nonZeroIndex++]=0;
    }
}
int main() {
    vector<int> nums = {0, 1, 0, 3, 12}; 

    moveZeroesToEnd(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}