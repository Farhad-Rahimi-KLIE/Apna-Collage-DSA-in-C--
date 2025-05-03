#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <numeric>

using namespace std;

void Sort_Zero_One_Tows(vector<int>& arr) {
    int n = arr.size();
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i =0; i<n; i++){
        if(arr[i] == 0){
            count0++;
        }else if(arr[i] == 1){
            count1++;
        }else{
            count2++;
        }
    }
    int index = 0;
    for(int i =0; i<count0; i++){
        arr[index++] = 0;
    }
        for(int i =0; i<count1; i++){
        arr[index++] = 1;
    }
        for(int i =0; i<count2; i++){
        arr[index++] = 2;
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