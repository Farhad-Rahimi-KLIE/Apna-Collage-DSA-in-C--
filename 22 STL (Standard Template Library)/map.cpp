#include<iostream>
#include<map>

using namespace std;
 // map work on key value pair
//  map by default sort data in ascending order
int main()
{
    map<string, int> m;
    m["tv"] = 50;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 40;
    m["iphone"] = 290;
    // m.insert({"janan", 45}); //for insert data
    // m.erase("tv"); // clear
    for (auto p : m)
    {
        cout<<p.first << " "<<p.second<<endl;
    }
    
    // cout<<"count : "<<m.count("tablet")<<endl; // how much time repeat
    // cout<<"value : "<<m["tablet"]<<endl; // return the value of tablet

    // find function
    if (m.find("tv") != m.end())
    {
        cout<<"found \n";
    }else{
        cout<<"Not found \n";
    }
    
    return 0;
}