# DSA-Assigments
assignments for DSA- group Evans,alex, Caroline
Group- Evans, Alex, Caro


Question--Write an algorithm to add two numbers entered by a user.
Algorithm to add two numbers entered by the user

1.	Start
2.	Initiate variables; X, Y and SUM
3.	Prompt the user to enter the first number, X
4.	Read the first number and store it in variable X
5.	Prompt the user to enter the second number Y
6.	Read the second number and store it in variable Y
7.	Add the two numbers and store it in SUM; SUM=X+Y
8.	Display SUM of the two numbers
9.	End. 

Question---Write an algorithm and pseudo code of calculating the sum of n elements of an array.
Algorithm
1.	Start
2.	Initialize n, i, SUM=0
3.	Prompt the user to enter the value of n
4.	Read the number entered store it in the variable n
5.	Declare and array of size n
6.	Iterate through the first n elements of the array
7.	Add each element to sum
8.	Display the value of sum
9.	End 
Pseudocode 
1.	Start 
2.	PRINT “enter the number of elements n”
3.	READ n, i,
4.	Declare array[n]
5.	Declare SUM=0
6.	PRINT “enter”, n, ”elements”
7.	FOR i=0 to n-1:
a.	READ array[i]
b.	SUM=SUM + array[i]
8.	End FOR
9.	PRINT “Sum of array of elements”, SUM
10.	End
 
Question--Write a c code that shows how to insert an element entered by the user into the middle of the array.
#include <stdio.h>

int main() {
    int array[100];
    int n, i, newElement, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the new element to insert: ");
    scanf("%d", &newElement);
    position = n / 2;
    for (i = n; i > position; i--) {
        array[i] = array[i - 1];
    }
    array[position] = newElement;
    n++;
    printf("Array after inserting the new element:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
Screenshot or output
 

