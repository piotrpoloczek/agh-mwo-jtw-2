// list.hpp
#ifndef LIST_HPP
#define LIST_HPP

#include <iterator>

namespace collections {

    template<typename T>
    class List {
        struct Node {
            T value;
            Node* next;
            Node(const T& v) : value(v), next(nullptr) {}
        } *head;

    public:
        List() : head(nullptr) {}
        ~List() { while (head) { auto temp = head; head = head->next; delete temp; } }

        void push_front(const T& val) {
            Node* node = new Node(val);
            node->next = head;
            head = node;
        }

        class Iterator {
            Node* curr;
        public:
            Iterator(Node* n) : curr(n) {}
            T& operator*() { return curr->value; }
            Iterator& operator++() { curr = curr->next; return *this; }
            bool operator!=(const Iterator& other) const { return curr != other.curr; }
        };

        Iterator begin() const { return Iterator(head); }
        Iterator end() const { return Iterator(nullptr); }
    };

} // namespace collections

#endif