/*
 * Tree.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: bnicholas
 */

#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree(Node* root): _root(root) {
	// TODO Auto-generated constructor stub

}

void Tree::traverse(Node* node) {
	cout << node -> _name << endl;
	Node* i = node -> _firstChild;
	while(i != NULL)
	{
		traverse(i);
		i = i -> _next;
	}
}

void Tree::traverse(){

}

Tree::~Tree() {
	// TODO Auto-generated destructor stub
}

