// vector.hpp
#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <stdexcept>

namespace collections {

    template<typename T>
    class Vector {
        T* data;
        size_t cap, len;
        void resize(size_t new_cap) {
            T* temp = new T[new_cap];
            for (size_t i = 0; i < len; ++i) temp[i] = data[i];
            delete[] data;
            data = temp;
            cap = new_cap;
        }
    public:
        Vector() : cap(4), len(0), data(new T[cap]) {}
        ~Vector() { delete[] data; }

        void push_back(const T& val) {
            if (len == cap) resize(cap * 2);
            data[len++] = val;
        }
        T& operator[](size_t i) {
            if (i >= len) throw std::out_of_range("Index out of bounds");
            return data[i];
        }
        size_t size() const { return len; }
    };

} // namespace collections

#endif
