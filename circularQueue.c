#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main() {
    int queue[SIZE], front = 0, rear = 0, choice, value;
    
    printf("Circular Queue using Array");
    printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit");
    
    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: // Insertion
                if ((rear + 1) % SIZE == front) {
                    printf("\nQueue is Full");
                } else {
                    printf("\nEnter value to insert: ");
                    scanf("%d", &value);
                    queue[rear] = value;
                    rear = (rear + 1) % SIZE; // Circular increment
                }
                break;

            case 2: // Deletion
                if (front == rear) {
                    printf("\nQueue is Empty");
                } else {
                    printf("\nDeleted Element is %d", queue[front]);
                    front = (front + 1) % SIZE; // Circular increment
                }
                break;

            case 3: // Display
                if (front == rear) {
                    printf("\nQueue is Empty");
                } else {
                    printf("\nQueue Elements are: ");
                    int i = front;
                    while (i != rear) {
                        printf("%d ", queue[i]);
                        i = (i + 1) % SIZE; // Circular increment
                    }
                }
                break;

            case 4: // Exit
                exit(0);

            default:
                printf("Invalid choice, please try again.");
        }
    }

    return 0;
}