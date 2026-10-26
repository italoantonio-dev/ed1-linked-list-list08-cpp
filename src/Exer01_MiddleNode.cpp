#include <iostream>
#include <sstream>
#include <string>
#include "LinkedList.h"

Node<int>* middleNode(Node<int>* head) {
    Node<int>* slow = head;
    Node<int>* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream input(line);

    Node<int>* head = nullptr;
    Node<int>* tail = nullptr;
    int value;

    while (input >> value) {
        Node<int>* newNode = new Node<int>(value);

        if (head == nullptr) {
            head = newNode;
        } else {
            tail->next = newNode;
        }

        tail = newNode;
    }

    Node<int>* current = middleNode(head);

    while (current != nullptr) {
        std::cout << current->element;

        if (current->next != nullptr) {
            std::cout << " ";
        }

        current = current->next;
    }

    std::cout << "\n";

    current = head;

    while (current != nullptr) {
        Node<int>* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}