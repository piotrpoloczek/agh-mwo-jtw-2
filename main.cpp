// main.cpp
#include <iostream>
#include "vector.hpp"
#include "list.hpp"
#include "bst.hpp"
#include "queue.hpp"
#include "map.hpp"
#include "set.hpp"

using namespace collections;

int main() {
    // Vector
    Vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    std::cout << "Vector: ";
    for (size_t i = 0; i < vec.size(); i++) std::cout << vec[i] << " ";
    std::cout << "\n";

    // List
    List<int> list;
    list.push_front(10);
    list.push_front(20);
    std::cout << "List: ";
    for (auto& val : list) std::cout << val << " ";
    std::cout << "\n";

    // BST
    BST<int> tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    std::cout << "BST In-Order: ";
    tree.inorder([](int val) { std::cout << val << " "; });
    std::cout << "\n";

    // Queue
    Queue<int> queue;
    queue.enqueue(100);
    queue.enqueue(200);
    std::cout << "Queue: ";
    while (!queue.empty()) {
        std::cout << queue.dequeue() << " ";
    }
    std::cout << "\n";

    // Map
    Map<std::string, int> map;
    map.insert("one", 1);
    map.insert("two", 2);
    std::cout << "Map: one -> " << map.get("one") << ", two -> " << map.get("two") << "\n";

    // Set
    Set<int> set;
    set.insert(5);
    set.insert(10);
    set.insert(5); // duplicate
    std::cout << "Set contains 5: " << set.contains(5) << ", contains 7: " << set.contains(7) << "\n";

    return 0;
}