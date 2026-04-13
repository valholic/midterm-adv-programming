#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& nums, int left, int right, int target) {
        if (left > right) {
            return -1;
        }

        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            return binarySearch(nums, mid + 1, right, target);
        }
        else {
            return binarySearch(nums, left, mid - 1, target);
        }
    }

    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size() - 1, target);
    }
};

int main() {
    Solution sol;
    vector<int> data = {-1, 0, 3, 5, 9, 12};
    int hasil = sol.search(data, 9);
    cout << "Target ada di indeks: " << hasil << endl;
    return 0;
}