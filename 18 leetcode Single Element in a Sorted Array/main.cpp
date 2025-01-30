#include <iostream>
#include <vector>
using namespace std;

 // Brute Force Apprach
// int singleNonDuplicate(vector<int>& nums) {
//     for (int i = 0; i < nums.size(); i += 2) {
//         if (i + 1 >= nums.size() || nums[i] != nums[i + 1]) {
//             return nums[i];
//         }
//     }
//     return -1; // در صورتی که آرایه معتبر نباشد.
// }

// Optimize (Binary Search) Apprach
int singleNonDuplicate(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        // بررسی زوج یا فرد بودن
        if (mid % 2 == 1) {
            mid--; // همیشه روی جفت اول قرار می‌گیریم
        }
        // بررسی جفت درست یا غلط
        if (nums[mid] == nums[mid + 1]) {
            left = mid + 2;
        } else {
            right = mid;
        }
    }
    return nums[left];
}

int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "Single Element: " << singleNonDuplicate(nums) << endl;
    return 0;
}
