#include <iostream>
using namespace std;

// Middle of the Linked List (with Two pointers 1 - slow  2 - fast)

class Middle_LL {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
};

int main() {

    return 0;
}
