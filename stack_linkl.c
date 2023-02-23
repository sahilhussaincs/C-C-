#include <stdio.h>
#include <stdlib.h>

struct Node {
   int data;
   struct Node* next;
};

struct Node* top = NULL;

void push(int value) {
   struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
   new_node->data = value;
   new_node->next = top;
   top = new_node;
}

void pop() {
   if (top == NULL) {
      printf("Error: Stack is empty\n");
      return;
   }
   struct Node* temp = top;
   top = top->next;
   free(temp);
}

int peek() {
   if (top == NULL) {
      printf("Error: Stack is empty\n");
      exit(1);
   }
   return top->data;
}

void display() {
   printf("\n");
   struct Node* current = top;
   while (current != NULL) {
      printf("%d\n", current->data);
      current = current->next;
   }
   printf("\n");
}

int main() {
   int choice, value;

   while (1) {
      printf("1. Push\n");
      printf("2. Pop\n");
      printf("3. Peek\n");
      printf("4. Display\n");
      printf("5. Exit\n");
      printf("Enter your choice: ");
      scanf("%d", &choice);

      switch (choice) {
         case 1:
            printf("Enter the value to push: ");
            scanf("%d", &value);
            push(value);
            break;
         case 2:
            pop();
            break;
         case 3:
            printf("Top of stack: %d\n", peek());
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