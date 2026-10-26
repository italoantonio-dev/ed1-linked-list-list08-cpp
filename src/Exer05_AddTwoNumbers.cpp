#include <iostream>
#include <sstream>
#include <string>
#include "LinkedList.h"

Node<int>* addTwoNumbers(Node<int>* list1, Node<int>* list2) {
    Node<int> dummy(0);
    Node<int>* tail = &dummy;
    int carry = 0;

    while (list1 != nullptr || list2 != nullptr || carry != 0) {
        int sum = carry;

        if (list1 != nullptr) {
            sum += list1->element;
            list1 = list1->next;
        }

        if (list2 != nullptr) {
            sum += list2->element;
            list2 = list2->next;
        }

        carry = sum / 10;

        tail->next = new Node<int>(sum % 10);
        tail = tail->next;
    }

    return dummy.next;
}

int main() {
    std::string line1;
    std::string line2;

    std::getline(std::cin, line1);
    std::getline(std::cin, line2);

    std::istringstream input1(line1);
    std::istringstream input2(line2);

    Node<int>* list1 = nullptr;
    Node<int>* list2 = nullptr;
    Node<int>* tail1 = nullptr;
    Node<int>* tail2 = nullptr;
    int value;

    while (input1 >> value) {
        Node<int>* newNode = new Node<int>(value);

        if (list1 == nullptr) {
            list1 = newNode;
        } else {
            tail1->next = newNode;
        }

        tail1 = newNode;
    }

    while (input2 >> value) {
        Node<int>* newNode = new Node<int>(value);

        if (list2 == nullptr) {
            list2 = newNode;
        } else {
            tail2->next = newNode;
        }

        tail2 = newNode;
    }

    Node<int>* result = addTwoNumbers(list1, list2);
    Node<int>* current = result;

    while (current != nullptr) {
        std::cout << current->element;

        if (current->next != nullptr) {
            std::cout << " ";
        }

        current = current->next;
    }

    std::cout << "\n";

    current = list1;

    while (current != nullptr) {
        Node<int>* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    current = list2;

    while (current != nullptr) {
        Node<int>* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    current = result;

    while (current != nullptr) {
        Node<int>* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}