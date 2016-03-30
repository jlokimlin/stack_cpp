/*
 * test.cpp
 *
 *  Created on: Mar 20, 2016
 *      Author: jlokimlin
 */

#include"class_Stack.h"
#include<iostream>

int main() {
	/*-------------------------------------------------------------------------
	 * Dictionary:
	 * ----------------------------------------------------------------------*/
	Stack s;
	/*-----------------------------------------------------------------------*/

	s.show();

	s.push(3);
	s.push(4);
	s.show();

	s.push(5);
	s.show();

	s.pop();
	s.show();

	s.push(6);
	s.show();

	for (int i = 0; i < 3; i++) {
		s.pop();
		s.show();
	}

	return (0);
}

