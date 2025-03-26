#include <iostream>
using namespace std;

// Definition for singly-linked list without constructor
struct ListNode {
    int val;
    ListNode* next;
};

// Function to create a new node
ListNode* createNode(int x) {
    ListNode* newNode = new ListNode;
    newNode->val = x;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a node into the sorted linked list
ListNode* insertSorted(ListNode* head, ListNode* new_node) {
    if (!head || head->val >= new_node->val) {
        new_node->next = head;
        return new_node;
    }

    ListNode* current = head;
    while (current->next && current->next->val < new_node->val) {
        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;

    return head;
}

// Function to perform insertion sort on linked list
ListNode* insertionSortList(ListNode* head) {
    if (!head || !head->next) return head;

    ListNode* sorted = nullptr; // Sorted linked list
    ListNode* current = head;

    while (current) {
        ListNode* next = current->next; // Store next node
        sorted = insertSorted(sorted, current); // Insert in sorted order
        current = next;
    }

    return sorted;
}

// Function to print the linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Driver Code
int main() {
    // Manually creating nodes
    ListNode* head = createNode(4);
    head->next = createNode(2);
    head->next->next = createNode(1);
    head->next->next->next = createNode(3);

    cout << "Original Linked List: ";
    printList(head);

    head = insertionSortList(head);

    cout << "Sorted Linked List: ";
    printList(head);

    return 0;
}
