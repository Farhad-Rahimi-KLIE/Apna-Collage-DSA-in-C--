#include<iostream>
#include<algorithm>

using namespace std;

void InsertionSort(int arr[], int size){ // O(n^2)
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int previous = i-1;
        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous +1] = arr[previous];
            previous--;
        }
        arr[previous +1] = current; // placing the current el in the correct position
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
    InsertionSort(arr, n);
    PrintArray(arr, n);
    return 0;
}