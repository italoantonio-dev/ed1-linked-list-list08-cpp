#include <iostream>
#include <sstream>
#include <string>
#include "LinkedList.h"

Node<int>* oddEvenList(Node<int>* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node<int>* odd = head;
    Node<int>* even = head->next;
    Node<int>* evenHead = even;

    while (even != nullptr && even->next != nullptr) {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;

    return head;
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

    head = oddEvenList(head);

    Node<int>* current = head;

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