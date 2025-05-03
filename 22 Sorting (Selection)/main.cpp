#include<iostream>
#include<algorithm>

using namespace std;

void SelectionSort(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        int smallestIndex = i; // unsorted part starting
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
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
    SelectionSort(arr, n);
    PrintArray(arr, n);
    return 0;
}