#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
   if (right >= left) {
      int mid = left + (right - left) / 2;

      if (arr[mid] == key)
         return mid;

      if (arr[mid] > key)
         return binarySearch(arr, left, mid - 1, key);

      return binarySearch(arr, mid + 1, right, key);
   }

   return -1;
}

int main() {
   int n, key, result;
   printf("Enter the size of the array: ");
   scanf("%d", &n);

   int arr[n];
   printf("Enter the elements of the array in sorted order:\n");
   for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   printf("Enter the key to search: ");
   scanf("%d", &key);

   result = binarySearch(arr, 0, n - 1, key);

   if (result == -1)
      printf("Element is not present in array");
   else
      printf("Element is present at index %d", result);

   return 0;
}
