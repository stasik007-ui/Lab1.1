#include <iostream>
#include <vector>

using namespace std;

struct Stack {
    vector<double> vec; 

    void push(double value) {
        vec.push_back(value);  
    }

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

    double peek() {
        if (!isEmpty()) {
            return vec.back();  
        }
        else {
            cout << "Stack is empty" << endl;
            return -1.0;
        }
    }

    bool isEmpty() {
        return vec.empty();
    }

    int size() {
        return vec.size();
    }
};

int main() {
    Stack s;

    s.push(3.14);
    s.push(2.718);
    s.push(1.618);

    cout << "Top element: " << s.peek() << endl;  

    cout << "Popped: " << s.pop() << endl; 
    cout << "Popped: " << s.pop() << endl; 

    cout << "Stack size: " << s.size() << endl;  

    cout << "Top element: " << s.peek() << endl; 

    cout << "Popped: " << s.pop() << endl;  
    cout << "Popped: " << s.pop() << endl;  
    cout << "Popped: " << s.pop() << endl;  

    s.pop();  

    return 0;
}

