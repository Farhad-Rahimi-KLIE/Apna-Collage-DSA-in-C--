#include<iostream>
#include<queue>
// Priority Queue internaly use maxHeap,minHeap (complate binary tree) structure
using namespace std;

int main()
{
    // priority_queue<int> q;
    priority_queue<int, vector<int>, greater<int>> q; // for reverse use it

    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);

    while (!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}