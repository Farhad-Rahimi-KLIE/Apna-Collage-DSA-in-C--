#include<iostream>
#include<vector>

using namespace std;

int Partition(vector<int>& arr, int start, int end){
    int pivot = arr[end];
    int i = start-1;
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;
    swap(arr[end], arr[i]);
    return i;
}

void QuickSort(vector<int>& arr, int start, int end){
    if (start < end)
    {
        int Pivot = Partition(arr, start, end);
        QuickSort(arr, start, Pivot-1);
        QuickSort(arr, Pivot+1, end);
    }
    
}

int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    QuickSort(arr, 0, arr.size()-1);

    for (auto value : arr)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}