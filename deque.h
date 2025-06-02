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

#endif // DEQUE_H
