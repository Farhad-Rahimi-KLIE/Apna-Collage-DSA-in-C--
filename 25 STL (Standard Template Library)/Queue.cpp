#include<iostream>
#include<queue>
// Queue is first in first out data structure
using namespace std;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    // Accessing the front and back elements
    cout << q.front() << endl;
    cout << q.back();

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}