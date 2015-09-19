#include <iostream>

using namespace std;

// Стек, реализованный через
// динамический список
class Stack {
  class Element {
    int value; // Значение
    Element* next = NULL; // Следующий элемент
  };
  Element* top = NULL; // Вершина стека
 public:
  // Положить значение на вершину стека
  void push(int v) {
    // TODO: реализовать
  }
  // Получить значение с вершины стека
  int pop() {
    // TODO: реализовать
    return 0;
  }
};

int main() {
  // Пример использования стека
  Stack s; // Объявление переменной s
  // Сначала стек пустой
  // Добавляем элемент на вершину стека
  s.push(2);
  //             -----------------------
  // Вершина ->  | 2 |   |   |   |   |
  //             -----------------------
  // Получаем значение с вершины стека
  cout << s.pop() << endl; // должно быть 2

  // Добавляем 3 значения
  for(int i = 1; i <= 3; ++i)
    s.push(i);

  //  push(1)    -----------------------
  // Вершина ->  | 1 |   |   |   |   |
  //             -----------------------
  //  push(2)    -----------------------
  // Вершина ->  | 2 | 1 |   |   |   |
  //             -----------------------
  //  push(3)    -----------------------
  // Вершина ->  | 3 | 2 | 1 |   |   |
  //             -----------------------

  for(int i = 1; i <= 3; ++i)
    cout << s.pop() << endl;

  return 0;
}
