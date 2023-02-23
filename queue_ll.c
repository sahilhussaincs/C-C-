#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Function to check if the queue is empty
int isEmpty() {
    return (front == NULL);
}

// Function to add an element to the rear of the queue
void enqueue(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("%d enqueued to queue.\n", value);
}

// Function to remove an element from the front of the queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    struct Node* temp = front;
    front = front->next;
    printf("%d dequeued from queue.\n", temp->data);
    free(temp);
}

// Function to display the elements of the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    struct Node* temp = front;
    printf("Elements in the queue: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to get the element at the front of the queue
int peek() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return -1;
    }
    return front->data;
}

int main() {
    int choice, value;

    while (1) {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                value = peek();
                if (value != -1) {
                    printf("Front of queue: %d\n", value);
                }
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
                break;
        }
    }

    return 0;
}