// queue.hpp
#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <queue>

namespace collections {

    template<typename T>
    class Queue {
        std::queue<T> q;
    public:
        void enqueue(const T& val) { q.push(val); }
        T dequeue() {
            T front = q.front();
            q.pop();
            return front;
        }
        bool empty() const { return q.empty(); }
    };

} // namespace collections

#endif