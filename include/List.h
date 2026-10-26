#ifndef LIST_H
#define LIST_H

template<typename T>
class List {
public:
    virtual ~List() = default;

    virtual void addFirst(const T& item) = 0;
    virtual void addLast(const T& item) = 0;
    virtual void addSorted(const T& item) = 0;
};

#endif