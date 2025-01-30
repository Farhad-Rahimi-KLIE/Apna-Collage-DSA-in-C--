#include<iostream>
#include<algorithm>

using namespace std;
// for sorting we not use bubble sort, insetion sort, selection sort because this sorting algorithms time complexity is O(n^2)
// best time complexity for this sorting algorithms is O(nlogn);

void BubbleSort(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if (!isSwap) // array is already sorted
        {
            return;
        }
        
    }
}

void PrintArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    BubbleSort(arr, n);
    PrintArray(arr, n);
    return 0;
}