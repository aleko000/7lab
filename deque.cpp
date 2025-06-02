#include "deque.h"

template <typename T>
void Deque<T>::push_front(const T& value) {
    data.push_front(value);
}

template <typename T>
void Deque<T>::push_back(const T& value) {
    data.push_back(value);
}

template <typename T>
void Deque<T>::pop_front() {
    if (empty()) {
        throw std::out_of_range("Deque is empty");
    }
    data.pop_front();
}

template <typename T>
void Deque<T>::pop_back() {
    if (empty()) {
        throw std::out_of_range("Deque is empty");
    }
    data.pop_back();
}

template <typename T>
T& Deque<T>::front() {
    if (empty()) {
        throw std::out_of_range("Deque is empty");
    }
    return data.front();
}

template <typename T>
const T& Deque<T>::front() const {
    if (empty()) {
        throw std::out_of_range("Deque is empty");
    }
    return data.front();
}

template <typename T>
T& Deque<T>::back() {
    if (empty()) {
        throw std::out_of_range("Deque is empty");
    }
    return data.back();
}

template <typename T>
const T& Deque<T>::back() const {
    if (empty()) {
        throw std::out_of_range("Deque is empty");
    }
    return data.back();
}

template <typename T>
size_t Deque<T>::size() const {
    return data.size();
}

template <typename T>
bool Deque<T>::empty() const {
    return data.empty();
}

template <typename T>
void Deque<T>::clear() {
    data.clear();
}

// Явное инстанцирование для нужных типов (опционально)
template class Deque<int>;
template class Deque<double>;
template class Deque<std::string>;
