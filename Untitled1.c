#include <stdio.h>
#include <string.h>

#define MAX 5         // Stack size
#define NAME_SIZE 50  // Maximum length for each name

char stack[MAX][NAME_SIZE];  // Stack to store names
int top = -1;               // Stack top index

// Push function (adds name to stack)
void push() {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        printf("Enter a friend's name: ");
        scanf(" %49[^\n]", stack[top]);  // Reads a string with spaces
    }
}

// Pop function (removes name from stack)
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped: %s\n", stack[top]);
        top--;
    }
}

// Peek function (displays the top element)
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top Friend: %s\n", stack[top]);
    }
}

// Print the entire stack
void printStack() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Friends in stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%s ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice;

    do {
        printf("\nStack Operations:\n");
        printf("1. Push (Add Friend)\n");
        printf("2. Pop (Remove Friend)\n");
        printf("3. Peek (View Top Friend)\n");
        printf("4. Print Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                printStack();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
