#include<iostream>
#include<set>

using namespace std;
 // set is store unique value 
//  set other functions 1- count,2-erase, 3-find, 4-size, 5-empty
int main()
{
    set<int> a;

    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    a.insert(5);
    a.insert(3);
    cout<<a.size()<<endl;
    for (auto el : a)
    {
        cout<<el<<" ";
    }
    cout<<endl;
    return 0;
}