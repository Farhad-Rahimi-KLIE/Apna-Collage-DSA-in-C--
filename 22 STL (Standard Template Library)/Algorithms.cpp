#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    // sort
    // // int arr[5] = {3,5,1,8,2}; // with array
    // vector<int> vec = {3,5,1,8,2}; // with vectors

    // // sort(vec.begin(), vec.end()); // sort ascending order
    // sort(vec.begin(), vec.end(), greater<int>()); // sort descending order
    // for (auto el : vec)
    // {
    //     cout<<el<<" ";
    // }
    // cout<<endl;


        // reverse
    // int arr[5] = {3,5,1,8,2}; // with array
    // vector<int> vec = {1,2,3,4,5}; // with vectors

    // // reverse(vec.begin(), vec.end());
    // reverse(vec.begin() +1, vec.end());
    // for (auto el : vec)
    // {
    //     cout<<el<<" ";
    // }
    // cout<<endl;



    // Binary search;
    vector<int> vec = {1,2,3,4,5}; // with vectors

    cout<<binary_search(vec.begin(), vec.end(), 12)<<endl;
    return 0;
}