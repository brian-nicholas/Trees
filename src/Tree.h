/*
 * Tree.h
 *
 *  Created on: Jan 8, 2016
 *      Author: bnicholas
 */

#ifndef TREE_H_
#define TREE_H_

#include "node.h"

class Tree {

private:
	Tree* _root;

public:
	Tree();
	Tree(Tree* root);
	void traverse();
	void traverse(Node* child);
	virtual ~Tree();
};

#endif /* TREE_H_ */
