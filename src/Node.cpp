/*
 * Node.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: bnicholas
 */

#include "Node.h"

Node::Node(string name): _name(name), _firstChild(NULL), _lastChild(NULL), _next(NULL) {
	// TODO Auto-generated constructor stub

}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

void Node::addChild(Node* child) {

	if(_firstChild == NULL) { //list is empty
			_firstChild = child;
			_lastChild = child;
		}else { //list is not empty
			_lastChild -> _next = child;
			_lastChild = child;
		}
}
