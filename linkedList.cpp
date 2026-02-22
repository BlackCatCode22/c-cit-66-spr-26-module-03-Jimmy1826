void deleteNodeByValue(Node*& head, int value) {
    Node* current = head;
    Node* previous = nullptr;

    if (current != nullptr && current->data == value) {
        head = current->next;
        delete current;
        return;
    }
    while (current != nullptr && current->data != value) {
        previous = current;
        current = current->next;
    }
    if (current == nullptr) {
        return;
    }
    previous->next = current->next;
    delete current;
}