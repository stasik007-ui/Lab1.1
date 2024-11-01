#include <iostream>

struct Node {
    int data;
    Node* next;
};


inline void addToFront(Node** head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

inline void addToEnd(Node** head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    }
    else {
        Node* current = *head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

inline void removeFromFront(Node** head) {
    if (*head != nullptr) {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
    }
}

inline void removeFromEnd(Node** head) {
    if (*head == nullptr) return;

    if ((*head)->next == nullptr) {
        delete* head;
        *head = nullptr;
    }
    else {
        Node* current = *head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
    }
}

inline Node* searchElement(Node* head, int value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

inline void reverseList(Node** head) {
    Node* prev = nullptr;
    Node* current = *head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

inline void sortList(Node** head) {
    if (*head == nullptr) return;

    bool swapped;
    do {
        swapped = false;
        Node* current = *head;
        while (current->next != nullptr) {
            if (current->data > current->next->data) {
                std::swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);
}

struct DoublyNode {
    int data;
    DoublyNode* next;
    DoublyNode* prev;
};

inline DoublyNode* toTwoWayList(Node* head) {
    if (head == nullptr) return nullptr;

    DoublyNode* newHead = nullptr;
    DoublyNode* tail = nullptr;

    while (head != nullptr) {
        DoublyNode* newNode = new DoublyNode;
        newNode->data = head->data;
        newNode->next = newHead;
        if (newHead != nullptr) {
            newHead->prev = newNode;
        }
        newHead = newNode;
        head = head->next;
    }

    newHead->prev = tail;
    tail->next = newHead;

    return newHead;
}

inline void clearList(Node** head) {
    while (*head != nullptr) {
        removeFromFront(head);
    }
}

inline void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "null" << std::endl;
}

int main() {
    setlocale(LC_ALL, "uk_UA");

    Node* head = nullptr;

    addToFront(&head, 10);
    addToFront(&head, 20);
    addToFront(&head, 30);
    addToEnd(&head, 5);

    std::cout << "Список пiсля додавання елементів: ";
    printList(head);

    removeFromEnd(&head);
    std::cout << "Список пiсля видалення з кінця: ";
    printList(head);

    Node* found = searchElement(head, 20);
    if (found) {
        std::cout << "Знайдено елемент: " << found->data << std::endl;
    }
    else {
        std::cout << "Елемент не знайдено." << std::endl;
    }

    reverseList(&head);
    std::cout << "Список пiсля реверсу: ";
    printList(head);

    sortList(&head);
    std::cout << "Список пiсля сортування: ";
    printList(head);

    clearList(&head);
    std::cout << "Список пiсля очищення: ";
    printList(head);

    return 0;
}
