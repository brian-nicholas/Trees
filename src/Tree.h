/*
 * Tree.h
 *
 *  Created on: Jan 8, 2016
 *      Author: bnicholas
 */

#ifndef TREE_H_
#define TREE_H_

#include "Node.h"

class Tree {

private:
	Node* _root;

public:
	Tree(Node* root);
	void traverse();
	void traverse(Node* node);
	virtual ~Tree();
};

#endif /* TREE_H_ */
