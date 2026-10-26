#include <iostream>
#include <sstream>
#include <string>
#include "LinkedList.h"

Node<int>* removeDuplicates(Node<int>* head) {
    Node<int>* current = head;

    while (current != nullptr && current->next != nullptr) {
        if (current->element == current->next->element) {
            Node<int>* removed = current->next;

            current->next = removed->next;
            delete removed;
        } else {
            current = current->next;
        }
    }

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

    head = removeDuplicates(head);

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