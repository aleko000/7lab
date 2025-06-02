#ifndef DEQUE_H
#define DEQUE_H

#include <list>
#include <stdexcept>

template <typename T>
class Deque {
private:
    std::list<T> data;

public:
    // Конструкторы
    Deque() = default;
    Deque(const Deque& other) : data(other.data) {}

    // Добавление элементов
    void push_front(const T& value);
    void push_back(const T& value);

    // Удаление элементов
    void pop_front();
    void pop_back();

    // Доступ к элементам
    T& front();
    const T& front() const;
    T& back();
    const T& back() const;

    // Размер и проверка на пустоту
    size_t size() const;
    bool empty() const;

    // Очистка дека
    void clear();
};

// Реализация методов (в заголовочном файле из-за шаблонности)

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

#endif // DEQUE_H
