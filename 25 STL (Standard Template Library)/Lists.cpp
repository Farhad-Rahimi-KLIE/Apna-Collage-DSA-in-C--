#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

/*
  list means (Doubly Linked List)
*/

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(6);

    l.pop_back();
    l.pop_front();

// Inserting an element at a specific position
    // auto it = l.begin();
    // l.insert(it, 4);

    // Access third element

    // cout<<*next(l.begin(), 1);

    for (auto el : l)
    {
        cout<<el<<" ";
    }
    cout<<endl;



    // updating elements

    // l.front() = 20;

    // auto it = l.begin();
    // advance(it, 2);

    // *it = 10;

    // for (auto val : l)
    // {
    //     cout<<val<<" ";
    // }
    // cout<<endl;

// find (search) the element of lists

    // auto it = find(l.begin(), l.end(), 7);

    // if (it == l.end() )
    // {
    //     cout<<"no fond";
    // }else{
    //     cout<<*(it);
    // }


    // Traversing

    // for(auto it = l.begin(); it != l.end(); it++){
    //     cout<<*it;
    // }

    // for(auto it = l.rbegin(); it != l.rend(); it++){
    //     cout<<*it;
    // }
    
     
     // Deleting third element
     auto it = l.begin();
     advance(it, 2);
     l.erase(it);
    return 0;
}