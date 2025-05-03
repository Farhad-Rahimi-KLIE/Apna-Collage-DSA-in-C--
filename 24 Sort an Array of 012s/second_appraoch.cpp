#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <numeric>

using namespace std;

/*
Dutch National Flag appraoch (two pointer appraoch) (low, mid, high).

1 - for zero 0 - low-1;
2 - for one low - mid-1;
3 - for two high+1 - n-1;
*/

void Sort_Zero_One_Tows(vector<int>& arr) {
    int n = arr.size();
    int low = 0, mid = 0, high = n-1;
    while(mid <= high){
        if(arr[mid] ==0){
            swap(arr[low], arr[mid]);
            low++, mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

int main() {
    vector<int> arr  = {2, 0, 2, 1, 1, 0};
    Sort_Zero_One_Tows(arr);
    for(int i =0; i<arr.size(); i++){
        cout<<"Sorted array is : "<<arr[i]<<endl;
    }
    return 0;
}