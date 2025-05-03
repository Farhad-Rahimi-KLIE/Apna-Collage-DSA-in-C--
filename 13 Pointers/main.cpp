#include<iostream>

using namespace std;
/*
  1 - hexadecimal Address - 0-9 ta abcdef mains - 0123456789abcdef 
  2 - Pointers - special variables that store address of other variables
*/

// void changeA(int* jan){ // pass by pointers
//     *jan = 20;
// }

// void changeA(int &ptr){ // pass by reference using alias
//     ptr = 20;
// }

int main()
{
    // memory Addresses
    // int a = 10;
    // int* ptr = &a;
    // cout<<ptr<<endl;
    // cout<<&a<<endl;

    // cout<<&ptr<<endl;


    // Pointers to pointers
    // int a = 10;
    // int* ptr = &a;
    
    // int ** parPtr = &ptr;

    // cout<<&ptr<<endl;
    // cout<<parPtr<<endl;


    // Dereference operator *
    // example 1
    // int a = 10;
    // int* ptr = &a;
    // cout<<*(&a)<<endl;
    // cout<<*(ptr)<<endl;
    // cout<<*ptr<<endl;

    // example 2
    // int a = 10;
    // int* ptr = &a;
    // int** parPtr = &ptr;

    // cout<<*(parPtr)<<endl;
    // cout<<ptr<<endl;


    // NULL Pointer - a pointer that doesn't point to any location
    // int* ptr = NULL;
    // cout<<ptr;


    // 1st Question Predict Output
    // int a = 5;
    // int* ptr = &a;
    // int** parPtr = &ptr;

    // cout<<*ptr<<endl; // 5
    // cout<<**parPtr<<endl; // 5
    // cout<<ptr<<endl; // ptr address
    // cout<<*parPtr<<endl; // ptr address



    //  pass by reference  1 - pointers  2 - reference (alias)
    // int a = 10;
    // changeA(a);
    // cout<<"Inside main fnx : "<<a<<endl; // 20


    // Array Pointers - arr[] is a pointer mains array name in c++ is pointer
    // int arr[] = {1,2,3,4,5}; // array is a pointer that not change through out the program
    // cout<<arr<<endl; // arr is a pointer which point to first array element
    // cout<<*arr<<endl; // see the result first array element;


    // Pointer Arithmetic 1 - Increment++ , Decrement-- 2 - add , Subtract Number

    // int a = 10;
    // int* ptr = &a;

    // cout<<ptr<<endl;
    // ptr++; // 4 byte
    // ptr++; // 4 byte
    // ptr = ptr+2; // add 8 byte to main data
    // cout<<ptr<<endl; // +4 byte add to main data


// // every time pointer++ mains added 4 byte to data
//     int arr[] = {1,2,3,4,5};  // [1,   2,   3,   4,   5] // values
//     cout<<*arr<<endl; // 1  //   100  104  108  112  116 // bytes
//     cout<<*(arr +1)<<endl; // 4 byte mains 2 array
//     cout<<*(arr +2)<<endl; // 4 byte mains 3 array
//     cout<<*(arr +3)<<endl; // 4 byte mains 4 array
//     cout<<*(arr +4)<<endl; // 4 byte mains 5 array


//  Subtract Ptr
    // int* ptr2; // 100
    // int* ptr1 = ptr2 +2; // 108 
    // cout<<ptr1 - ptr2<<endl;

// 2st Question - Predict the output
   
//    int arr[] = {10, 20, 30, 40};
//    int* ptr = arr;

//    cout<<*(ptr +1)<<endl; // 20
//    cout<<*(ptr +3)<<endl; // 40
//    ptr++; // 1 mains 4 byte
//    cout<<*ptr<<endl; // 20
    return 0;
}