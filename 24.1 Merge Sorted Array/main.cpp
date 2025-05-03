#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <numeric>

using namespace std;

void MergeSorted(vector<int>& A, int m, vector<int>& B, int n) {
    int index = m+n-1, i = m-1, j = n-1;

    while(i >= 0 && j >= 0){
        if(A[i] >= B[j]){
            A[index] = A[i];
            i--, index--;
        }else{
            A[index] = B[j];
            j--, index--;
        }
    }
    while(j >= 0){
        A[index] = B[j];
        j--, index--;
    }
}

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;
    MergeSorted(nums1, m, nums2, n);

    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}