#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // pair<int, int> p = {1,5};
    // pair<string, int> p = {"farhad",5};
    // pair<int, pair<char, int>> p = {1,{'f',5}};
    // cout<<p.first<<endl; // 1
    // cout<<p.second.first<<endl;
    // cout<<p.second.second<<endl;


    // pair with vectors
    vector<pair<int, int>> vec = {{1,2},{2,3},{3,4}};
    
    for (pair<int, int> p : vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    return 0;
}