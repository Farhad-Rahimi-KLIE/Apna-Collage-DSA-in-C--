#include<iostream>

using namespace std;

// Pass by Reference
// void ChangeX(int arr[], int size){
//     cout<<"in function"<<endl;
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = 2*arr[i];
//     }
    
// }


// Linear Searc
// int linearSearch(int arr[], int size, int target){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i;
//         }
        
//     }
//     return -1; // NOt Found
// }

// Reverse Array
 void reversearray(int arr[], int size){
    int start = 0, end = size-1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end++;
    }
    
 }

int main()
{
    // declaration of array
    // int marks[] = {1,2,3,4}; // method three
    // int marks[4] = {1,2,3,4}; // methos two
    // int marks[4]; // methoda one
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;

    // int size = sizeof(marks) / sizeof(int);
    // cout <<size;    

    // for loops
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }
    

    // int nums[] = {5, 15, 22, 1, -15,-45, 24};
    // int size = 7;

    // int smallest = __INT_MAX__; // this is infinite max number
    // int Greatest = __WINT_MIN__; // this is infinite min number
    // for (int i = 0; i < size; i++)
    // {
    //     // if (nums[i] < smallest)
    //     // {
    //     //         smallest = nums[i];
    //     // }
    //     smallest = min(nums[i], smallest);
    //     Greatest = max(nums[i], Greatest);
        
    // }
    // cout<<"Smallest "<<smallest<<endl;
    // cout<<"Greatest "<<Greatest<<endl; 








    // Pass By Reference
    // int arr[] = {1,2,3};
    // int size = 3;
    // ChangeX(arr, size);
    // cout<<"in main"<<endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    // cout<<endl;


    // Linear Search
    // int arr[] = {4, 2, 7, 8, 1, 2, 5};
    // int size = 7;
    // int target = 8;
    // cout<<linearSearch(arr, size, target)<<endl;

//   Reverse Array
 int arr[] = {4, 2, 7, 8, 1, 2, 5};
 int size = 7;
 reversearray(arr, size);
for (int  i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;
}