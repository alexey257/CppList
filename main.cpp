#include <iostream>

using namespace std;

// Стек, реализованный через
// динамический список
class Stack {
  struct Element {
    int value; // Значение
    Element* next = NULL; // Следующий элемент
  };
  Element* top = NULL; // Вершина стека
 public:
  // Положить значение на вершину стека
  void push(int v) {
    // Заводим новый элемент в динамической памяти
    Element* n = new Element;
    // Присваиваем новому элементу значение
    n->value = v;
    // Ставим новый элемент на вершину стека
    // Что тогда делать с остальными элементами?
    n->next = top; // Остальные цепляем за новым
    top = n; // Новый ставим первым
  }
  // Получить значение с вершины стека
  int pop() {
    if(top == NULL) {
      cout << "Stack is empty!" << endl;
      throw "Stack is empty!";
    }

    // 1. Запоминаем верхний элемент
    Element* d = top;
    // 2. Запоминаем значение вершины
    int value = d->value;
    // 3. Передвигаем указатель на следующий элемент
    top = top->next;
    // 4. Удаляем верхний элемент
    delete d;
    // 5. Возвращаем значение
    return value;
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
