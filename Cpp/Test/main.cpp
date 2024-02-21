#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node* head;
    Node* tail;
    int length;
public:
    LinkedList(int value)
    {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }
    Node* getHead()
    {
        return head;
    }

    Node* getTail()
    {
        return tail;
    }
    int getLength()
    {
        return length;
    }
    void deleteTail()
    {
        delete tail;

    }

};

int main() {

    LinkedList test(5);
    cout << test.getHead()->value;
    test.deleteTail();
    cout << test.getHead()->value;
}
