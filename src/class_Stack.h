
#ifndef CLASS_STACK_H_
#define CLASS_STACK_H_

#include"class_Node.h"

// Declare the class
class Stack {
	/*-------------------------------------------------------------------------
	 * Class variables
	 * ----------------------------------------------------------------------*/
public:
	int size_of_stack;
public:
	Node *top;
	/*-------------------------------------------------------------------------
	 * Class methods
	 * ----------------------------------------------------------------------*/
public:
	void push(int n); // Insert element
public:
	void pop(); // Remove top element
public:
	void show(); // Print stack contents to console
public:
	bool is_empty(); // Test whether stack is empty
public:
	int size(); // Returns the number of elements in the stack
	/*-------------------------------------------------------------------------
	 * Class constructor
	 *-----------------------------------------------------------------------*/
public:
	Stack();
};

#endif /* CLASS_STACK_H_ */
