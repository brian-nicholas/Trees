/*
 * Node.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: bnicholas
 */

#include "Node.h"

Node::Node(string name): _name(name), _firstChild(NULL), _lastChild(NULL), _next(NULL), _depth(0)
{

}

Node::~Node() {

}

void Node::addChild(Node* child) {

	child -> _depth = _depth + 1;
	if(_firstChild == NULL) { //list is empty
			_firstChild = child;
			_lastChild = child;
		}else { //list is not empty
			_lastChild -> _next = child;
			_lastChild = child;
		}
}
