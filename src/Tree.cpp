/*
 * Tree.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: bnicholas
 */

#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree(Tree* root): _root(root) {
	// TODO Auto-generated constructor stub

}

void Tree::traverse(Node* child) {
	cout << child -> _name << endl;
	Node* i = child -> _firstChild;
	while(i != NULL)
	{
		traverse(i);
		i = i -> _next;
	}
}

Tree::~Tree() {
	// TODO Auto-generated destructor stub
}

