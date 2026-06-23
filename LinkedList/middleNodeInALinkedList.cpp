// Naive Approach - Two Pass
// Time Complexity - O(n)
// Space Complexity - O(1)

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// int getLength(Node* head){
//     int l = 0;
//     while(head){
//         l++;
//         head = head->next;
//     }
//     return l;
// }

// int getMiddle(Node* head){
//     int length = getLength(head);
//     int idx = length/2;
//     while(idx--){
//         head = head->next;
//     }
//     return head->data;
// }

// int main(){
//     Node* head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head->next->next->next->next = new Node(50);
//     head->next->next->next->next->next = new Node(60);

//     cout << getMiddle(head);
//     return 0;
// }


// Optimised - Using Hare and Tortoise Algorithm
// Time Complexity - O(n)
// Space Complexity - O(1)

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int getMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    cout << getMiddle(head) << endl;

    return 0;
}