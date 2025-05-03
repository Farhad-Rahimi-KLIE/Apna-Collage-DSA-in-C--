#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> m;
    m.emplace("tv", 100);
    m.emplace("laptop", 100);
    m.emplace("fridge", 100);
    m.emplace("watch", 100);

    for (auto p : m)
    {
        cout<<p.first << " "<<p.second<<endl;
    }
    


    // // Finding element with key 2
    // auto it = m.find(2);
    
    // if (it != m.end())
    //     cout << it->first << ": " << it->second;
    // else cout << "Not Found";
    return 0;
}