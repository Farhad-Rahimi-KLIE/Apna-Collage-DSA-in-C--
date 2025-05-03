#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int answer = 0;
    int l = 0, r = n - 1;
    int lmax = 0, rmax = 0;

    while (l < r) {
        lmax = max(lmax, height[l]);
        rmax = max(rmax, height[r]);

        if (lmax < rmax) {
            answer += lmax - height[l];
            l++;
        } else {
            answer += rmax - height[r];
            r--;
        }
    }
    return answer;
}

int main() {
    vector<int> height;
    int n;

    cout << "Enter the number of elements in the height array: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        height.push_back(val);
    }

    int result = trap(height);
    cout << "Amount of trapped water: " << result << endl;

    return 0;
}
