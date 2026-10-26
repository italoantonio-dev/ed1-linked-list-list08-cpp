#include <iostream>
#include <sstream>
#include <string>
#include "LinkedList.h"

Node<int>* reverseList(Node<int>* head) {
    Node<int>* previous = nullptr;
    Node<int>* current = head;


    while (current != nullptr) {
        Node<int>* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }
    return previous;
}

bool isPalindrome(Node<int>* head) {
    if (head == nullptr || head->next == nullptr) {
        return true;
    }
      Node<int>* slow = head;
    Node<int>* fast = head;

    while (fast -> next != nullptr && fast -> next -> next != nullptr) {
        slow = slow ->next;
        fast = fast -> next -> next;
    }
    Node<int>* secondHalf = reverseList(slow ->next);
    slow->next = secondHalf;

    Node<int>*  first = head;
    Node<int>* second  = secondHalf;
    bool palindrome = true;

    while (second != nullptr) {
        if (first ->element != second -> element) {
            palindrome = false;
            break;
        }
        first = first -> next;
        second = second -> next;

    }
    slow->next = reverseList(secondHalf);
    return palindrome;


}
int main () {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream input(line);

    Node<int>* head = nullptr;
    Node<int>* tail = head;
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
    std::cout << (isPalindrome(head) ? "true" : "false")
          << "\n";

    Node<int>* current = head;

    while (current != nullptr) {
        Node<int>* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;


}