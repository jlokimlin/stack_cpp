
#include"class_Stack.h"
#include<iostream>

// Implement constructor
Stack::Stack() {
	size_of_stack = 0;
	top = NULL;
}

void Stack::push(int n) {
	/*-------------------------------------------------------------------------
	 * Dictionary: local variables
	 * ----------------------------------------------------------------------*/
	Node *ptr;
	/*-----------------------------------------------------------------------*/

	// Create memory leak
	ptr = new Node;
	ptr->data = n;
	ptr->next = NULL;

	// Push
	if (is_empty() == false) {
		ptr->next = top;
	}

	// Assign pointer
	top = ptr;

	// Increment stack
	size_of_stack++;

}

void Stack::pop() {
	/*-------------------------------------------------------------------------
	 * Dictionary: local variables
	 * ----------------------------------------------------------------------*/
	Node *temp;
	/*-----------------------------------------------------------------------*/

	// Address the case when stack is empty
	if (is_empty() == true) {
		std::cout << "The stack is empty" << std::endl;
	}

	// Make a copy
	temp = top;

	// Remove top element
	top = top->next;

	// Print action to console
	std::cout << "Pop operation.............." << std::endl;
	std::cout << "Poped value is " << temp->data << std::endl;

	// Decrement size of stack
	size_of_stack--;

	// Release memory
	delete temp;
}

void Stack::show() {
	/*-------------------------------------------------------------------------
	 * Dictionary: local variables
	 * ----------------------------------------------------------------------*/
	Node *ptr;
	/*-----------------------------------------------------------------------*/

	// Address the case when stack is empty
	if (is_empty() == true) {
		std::cout << "The stack is empty" << std::endl;
		return;
	} else {
		std::cout << "size of stack = " << size() << std::endl;
		std::cout << "The stack is: ";
		ptr = top; // Assign pointer
		while (ptr != NULL) {
			std::cout << ptr->data << " -> ";
			ptr = ptr->next; // Re-assign pointer
		}
		std::cout << "NULL" << std::endl;
	};
}

bool Stack::is_empty() {
	return (top == NULL);
}

int Stack::size() {
	return (size_of_stack);
}
