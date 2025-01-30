#include<iostream>
#include <vector>
using namespace std;

int main()
{
    // create vectors first methods
    // vector<int> vec; //0 length
    // cout<<vec[0];


    // create vectors second methods
    // vector<int> vec = {1,2,3}; //3 length
    // cout<<vec[1]<<endl;


    // create vectors therd methods
    // vector<int> vec (5,3); //5 length
    // // using for special for loop for vectors
    // for (int value : vec)
    // {
    //     cout<<value<<endl;
    // }


    // vector<char> vec = {'a','b','c','d','e','f'}; //6 length
    // // using for special for loop for vectors
    // for (char value : vec)
    // {
    //     cout<<value<<endl;
    // }



    // Vectors functions likes : 1 - size 2 - push_back 3 - pop_back 4 - front 5 - back 6 - at

    // vector<char> vec; //6 length
    // vec.push_back(34);
    // vec.push_back(56);
    // vec.push_back(78);
    // cout<<"Size of vectors"<<vec.size()<<endl;
    // // vec.pop_back();
    // // cout<<vec.back()<<endl;
    // // cout<<vec.front()<<endl;
    // cout<<vec.at(0)<<endl;




//   Static & Dynamic allocation
// size and capacity in vectors
 
  vector<int> vec; //0 length
    vec.push_back(34);
    vec.push_back(56);
    vec.push_back(78);
    vec.push_back(7);
    vec.push_back(1);

    cout<<vec.size()<<endl; // size 
    cout<<vec.capacity()<<endl; // capacity
    
    return 0;
}