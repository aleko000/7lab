#include <iostream>
#include "deque.h"

int main() {
    Deque<int> dq;

    // Добавление элементов
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    // Вывод размера
    std::cout << "Размер дека: " << dq.size() << std::endl; // 4

    // Доступ к элементам
    std::cout << "Первый элемент: " << dq.front() << std::endl; // 1
    std::cout << "Последний элемент: " << dq.back() << std::endl; // 20

    // Удаление элементов
    dq.pop_front();
    dq.pop_back();

    std::cout << "После удаления:" << std::endl;
    std::cout << "Первый элемент: " << dq.front() << std::endl; // 5
    std::cout << "Последний элемент: " << dq.back() << std::endl; // 10

    // Очистка дека
    dq.clear();
    std::cout << "Дек пуст? " << (dq.empty() ? "Да" : "Нет") << std::endl; // Да

    return 0;
}
