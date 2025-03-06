#include<iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};  // [1,   2,   3,   4,   5] // values
    cout<<arr<<endl;
    cout<<*(arr);
    cout<<*(arr+1);
    cout<<*(arr+2);
    cout<<*(arr+3);
    cout<<*(arr+4);
    return 0;
}