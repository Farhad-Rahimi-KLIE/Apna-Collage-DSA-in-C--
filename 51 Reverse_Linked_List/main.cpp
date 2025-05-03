#include <iostream>
using namespace std;

// Reverse a Linked List

class ReverseLL {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }
    return prev;
};

int main() {

    return 0;
}
