#include <iostream>
using namespace std;

// Linked List Cycle (with Two pointers 1 - slow  2 - fast)

class Cycle_LL {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
                return true;
        }
    }
    return false;
};

int main() {

    return 0;
}
