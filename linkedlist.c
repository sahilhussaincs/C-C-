#include <stdio.h>
#include <stdlib.h>

struct Node {
   int data;
   struct Node* next;
};

struct Node* head = NULL;

void insert(int data, int position) {
   if (position < 1) {
      printf("Error: Invalid position\n");
      return;
   }
   
   struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = data;
   
   if (position == 1) {
      newNode->next = head;
      head = newNode;
   }
   else {
      struct Node* ptr = head;
      for (int i = 1; i < position-1 && ptr != NULL; i++) {
         ptr = ptr->next;
      }
      
      if (ptr == NULL) {
         printf("Error: Invalid position\n");
         return;
      }
      
      newNode->next = ptr->next;
      ptr->next = newNode;
   }
}

void delete(int position) {
   if (head == NULL) {
      printf("Error: Linked list is empty\n");
      return;
   }
   
   if (position < 1) {
      printf("Error: Invalid position\n");
      return;
   }
   
   if (position == 1) {
      struct Node* temp = head;
      head = head->next;
      free(temp);
   }
   else {
      struct Node* ptr = head;
      for (int i = 1; i < position-1 && ptr != NULL; i++) {
         ptr = ptr->next;
      }
      
      if (ptr == NULL || ptr->next == NULL) {
         printf("Error: Invalid position\n");
         return;
      }
      
      struct Node* temp = ptr->next;
      ptr->next = temp->next;
      free(temp);
   }
}

void display() {
   struct Node* ptr = head;
   printf("\n[head] ->");
   while (ptr != NULL) {
      printf(" %d ->", ptr->data);
      ptr = ptr->next;
   }
   printf(" [null]\n");
}

int main() {
   int n, data, position;
   
   printf("Enter the number of nodes: ");
   scanf("%d", &n);
   
   for (int i = 0; i < n; i++) {
      printf("Enter data for node %d: ", i+1);
      scanf("%d", &data);
      printf("Enter position for node %d: ", i+1);
      scanf("%d", &position);
      insert(data, position);
   }
   
   printf("Linked list after insertions:\n");
   display();
   
   printf("Enter position of node to delete: ");
   scanf("%d", &position);
   delete(position);
   
   printf("Linked list after deletion:\n");
   display();
   
   return 0;
}
