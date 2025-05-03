#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int Merge(vector<int>& arr, int start, int middle, int end){
    vector<int> temp;
    int i = start, j = middle+1;
    int InvertionCount = 0;

    while(i <= middle && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            InvertionCount += (middle-i+1);
        }
    }

    while(i <= middle){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int index =0; index < temp.size(); index++){
       arr[index+start] = temp[index];
    }
    return InvertionCount;
}

int MergeSort(vector<int>& arr, int start, int end){
    if(start < end){
        int middle = start + (end - start)/2;
        int leftinvertionCount = MergeSort(arr, start, middle); // left
        int rightinvertionCount = MergeSort(arr, middle+1, end); // right
        int fullInvertion = Merge(arr, start, middle, end); // merge function for combine of two arrays or parts
        return leftinvertionCount + rightinvertionCount + fullInvertion;
    }
    return 0;
}

int main() {
    vector<int> arr = {6,3,5,2,7};
    int ans = MergeSort(arr, 0, arr.size()-1);
    cout<<"answer : "<<ans<<endl;
    return 0;
}
