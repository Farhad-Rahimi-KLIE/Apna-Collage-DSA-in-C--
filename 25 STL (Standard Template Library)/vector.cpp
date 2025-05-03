#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // vector<int> vec; // first way to create a vector
    // vector<int> vec = {1,2,3,4,5}; // second way to create a vector
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.pop_back(); // remove element from last of vector

//    vec.erase(vec.begin()+1); // erase the specifiec area from vector
//    vec.erase(vec.begin()+1, vec.end()-2); // erase the specifiec area from vector
//    erase function change the size the vector not capacity of the vector


//   vec.insert(vec.begin()+2, 100); // insert data where you want
//   vec.clear(); // clear all vector from scratch

    // for (auto el : vec)
    // {
    //     cout<<el<<endl;
    // }

    // cout<<vec.front()<<endl; // front value of vector
    // cout<<vec.back()<<endl; // back value of vector

    // cout<<vec.size()<<endl; // size of vector
    // cout<<vec.capacity()<<endl; // capacity of vector
    // cout<<vec.empty()<<endl; // check vector is empty or not


    // cout<<"vec.begin : "<<*(vec.begin())<<endl;
    // cout<<"vec.end : "<<*(vec.end()-1)<<endl; // because end function point one step forward


    // Iterators
    // vector<int>::iterator it;

    // for (it = vec.begin(); it != vec.end(); it++)
    // {
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;

// we can use auto for this fucntions
//  reverse iterator
    // vector<int>::reverse_iterator it;

    // for (auto it = vec.rbegin(); it != vec.rend(); it++)
    // {
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    return 0;
}