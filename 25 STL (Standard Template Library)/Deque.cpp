#include<iostream>
#include<deque> // Double Ended Queue

using namespace std;

int main() {
    deque<int> dq = {1, 2, 3, 4};

    // Inserting elements at back and front
    dq.push_back(0);
    dq.push_front(5);
    
    // Insert element at third position
    auto it = dq.begin()+2;
    dq.insert(it, 56);

    for (int val : dq)
    {
        cout<<val<<" ";
    }
    cout<<endl;


    // access element

    cout<<dq[0]<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;


    // Updating element
    dq[2] = 8;
    cout << dq[2];
    
    
    // Deleting from the back and front
    dq.pop_back();
    dq.pop_front();
    dq.erase(dq.begin());
    for (int i = 0; i < dq.size(); i++) 
        cout << dq[i] << " ";
    return 0;
}
