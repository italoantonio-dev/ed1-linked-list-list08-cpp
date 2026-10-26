#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "List.h"
#include <iostream>

template<typename T>
struct Node {
    T element;
    Node<T> *next;

    Node(T val) : element(val), next(nullptr) {
    }
};


template<typename T>
class LinkedList : public List<T> {
private:
    Node<T> *head = nullptr;
    Node<T> *tail = nullptr;
    int count = 0;

public:

    ~LinkedList() override {
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }


    void addFirst(const T &item) override {
        Node<T> *newNode = new Node<T>(item);
        newNode->next = head;
        if (head == nullptr) {
            tail = newNode;
        }

        head = newNode;
        count++;
    }

    void addLast(const T &item) override {
        Node<T> *newNode = new Node<T>(item);
        if (head == nullptr) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode;
        count++;
    }

    void addSorted(const T &item) override {
        if (head == nullptr || item <= head->element) {
            addFirst(item);
            return;
        }
        if (item >= tail->element) {
            addLast(item);
            return;
        }
        Node<T> *current = head;
        while (current->next != nullptr && current->next->element < item) {
            current = current->next;


        }
        Node<T> *newNode = new Node<T>(item);
        newNode->next = current->next;
        current->next = newNode;
        count++;
    }

    void print() const {
        Node<T>* current = head;

        while (current != nullptr) {
            std::cout << current->element << " ";
            current = current->next;
        }

        std::cout << "\n";
    }

    void reverse() {
        Node<T>* previous = nullptr;
        Node<T>* current = head;

        tail = head;

        while (current != nullptr) {
            Node<T>* nextNode = current ->next;
            current->next = previous;
            previous = current;
            current = nextNode;
        }

        head = previous;
    }

};


#endif
