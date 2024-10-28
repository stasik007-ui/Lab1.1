#include <iostream>
#include <vector>

using namespace std;

// Структура для реалізації стека
struct Stack {
    vector<double> vec; 

    // Push: додати елемент на вершину стека
    void push(double value) {
        vec.push_back(value);  
    }

    // Pop: видалити та повернути елемент з вершини стека
    double pop() {
        if (!isEmpty()) {
            double topValue = vec.back();
            vec.pop_back(); 
            return topValue;
        }
        else {
            cout << "Stack is empty" << endl;
            return -1.0; 
        }
    }

    // Peek: повернути верхній елемент без видалення
    double peek() {
        if (!isEmpty()) {
            return vec.back();  
        }
        else {
            cout << "Stack is empty" << endl;
            return -1.0;
        }
    }

    // IsEmpty: перевірити, чи стек порожній
    bool isEmpty() {
        return vec.empty();
    }

    // Size: повернути розмір стека
    int size() {
        return vec.size();
    }
};

int main() {
    Stack s;

    // Додаємо елементи у стек
    s.push(3.14);
    s.push(2.718);
    s.push(1.618);

    // Переглядаємо верхній елемент
    cout << "Top element: " << s.peek() << endl;  

    // Видаляємо кілька елементів
    cout << "Popped: " << s.pop() << endl; 
    cout << "Popped: " << s.pop() << endl; 

    // Перевіряємо розмір стека
    cout << "Stack size: " << s.size() << endl;  

    // Переглядаємо верхній елемент
    cout << "Top element: " << s.peek() << endl; 

    // Видаляємо всі елементи
    cout << "Popped: " << s.pop() << endl;  
    cout << "Popped: " << s.pop() << endl;  
    cout << "Popped: " << s.pop() << endl;  

    s.pop();  

    return 0;
}

