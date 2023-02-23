#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
   if (top == MAX_SIZE - 1) {
      printf("Error: Stack is full\n");
      return;
   }
   top++;
   stack[top] = value;
}

void pop() {
   if (top == -1) {
      printf("Error: Stack is empty\n");
      return;
   }
   top--;
}

int peek() {
   if (top == -1) {
      printf("Error: Stack is empty\n");
      exit(1);
   }
   return stack[top];
}

void display() {
   printf("\n");
   for (int i = top; i >= 0; i--) {
      printf("%d\n", stack[i]);
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