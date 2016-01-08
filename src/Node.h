/*
 * Node.h
 *
 *  Created on: Jan 8, 2016
 *      Author: bnicholas
 */

#ifndef NODE_H_
#define NODE_H_

#include <string>
using namespace std;

class Node {
private:
	string _name;
	Node* _firstChild;
	Node* _lastChild;
	Node* _next;


public:
	Node(string name);
	void addChild(Node* child);
	virtual ~Node();

	friend class Tree;
};

#endif /* NODE_H_ */
