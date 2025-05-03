#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int Find_Duplicate(vector<int>& arr){
    int slow = arr[0], fast = arr[0];

    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow != fast);
    slow = arr[0];

    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    return fast;
}


int main() {
    vector<int> matrix = {1,3,3,3,4,2,2};
    int result = Find_Duplicate(matrix);
    cout<<result;
    return 0;
}