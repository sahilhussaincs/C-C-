#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
   if (rear == MAX_SIZE - 1) {
      printf("Error: Queue is full\n");
      return;
   }
   if (front == -1) {
      front = 0;
   }
   rear++;
   queue[rear] = value;
}

void dequeue() {
   if (front == -1 || front > rear) {
      printf("Error: Queue is empty\n");
      return;
   }
   front++;
}

int peek() {
   if (front == -1 || front > rear) {
      printf("Error: Queue is empty\n");
      return -1;
   }
   return queue[front];
}

void display() {
   if (front == -1) {
      printf("Error: Queue is empty\n");
      return;
   }
   printf("\nElements in the queue: ");
   for (int i = front; i <= rear; i++) {
      printf("%d ", queue[i]);
   }
   printf("\n");
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
            printf("Error: Invalid choice\n");
            break;
      }
   }

   return 0;
}