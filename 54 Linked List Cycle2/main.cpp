#include <iostream>
using namespace std;

// Linked List Cycle|| (with Two pointers 1 - slow  2 - fast)

class Cycle_LL__2 {
    Node* slow = head;
    Node* fast = head;
    bool isCicle = false;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
                return true;
                break;
        }
    }
    if(!isCicle){
        return NULL;
    }
    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
};

int main() {

    return 0;
}
