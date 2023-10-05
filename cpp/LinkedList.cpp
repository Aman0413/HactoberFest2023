#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  // constructor
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};
void InsertAtHead(Node *&head, int d) {
  // new node create
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void Print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << endl;
    temp = temp->next;
  }
}

int main() {
  Node *node1 = new Node(10);
  Print(node1);
  InsertAtHead(node1, 20);
  InsertAtHead(node1, 30);
  InsertAtHead(node1, 40);
  InsertAtHead(node1, 50);
  Print(node1);

  // Node *node2 = new Node(20);
  // Node *node3 = new Node(30);

  // cout << node1->data << endl;
  // cout << node1->next << endl;
  return 0;
}
