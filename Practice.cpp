#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr, int start, int middle, int end){
    vector<int> temp;
    int i = start, j = middle+1;

    while (i <= middle && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
        
    }
    
    while (i <= middle)
    {
        temp.push_back(arr[i]);
        i++;
    }
     
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx+start] = temp[idx];
    }

}

void mergeSort(vector<int>& arr, int start, int end){
    if (start < end)
    {
        int middle = start + (end - start)/2;
        mergeSort(arr, start,middle); // left half
        mergeSort(arr, middle+1, end); // right half

        merge(arr, start, middle, end);
    }
    
}

int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    mergeSort(arr, 0, arr.size()-1);

    for (auto value : arr)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}