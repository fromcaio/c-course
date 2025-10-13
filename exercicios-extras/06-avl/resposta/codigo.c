// this is a AVL tree implementation
// Author: Caio A. Reis
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int key;
	struct node *left;
	struct node *right;
	int height;
} Node;

// create a new node
Node *newNode(int key) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;
	return node;
}

// right rotation
Node *rightRotation(Node *y) {
	Node *x = y->left;
	Node *T2 = x->right;

	x->right = y;
	y->left = T2;

	y->height = max(height(y->left), height(y->right)) + 1;
	x->height = max(height(x->left), height(x->right)) + 1;

	return x;
}

// left rotation
Node *leftRotation(Node *x) {
	Node *y = x->right;
	Node *T2 = y->left;

	y->left = x;
	x->right = T2;

	x->height = max(height(x->left), height(x->right)) + 1;
	y->height = max(height(y->left), height(y->right)) + 1;

	return y;
}

// get the height of a node
int height(Node *node) {
	if (node == NULL) return 0;
	return node->height;
}

// get the balance factor of a node
int getBalance(Node *node) {
	if (node == NULL) return 0;
	return height(node->left) - height(node->right);
}

// insert a new node in the tree
Node *insert(Node *node, int key) {
	if (node == NULL) return newNode(key);

	if (key < node->key) {
		node->left = insert(node->left, key);
	} else if (key > node->key) {
		node->right = insert(node->right, key);
	} else {
		return node;
	}

	node->height = 1 + max(height(node->left), height(node->right));

	int balance = getBalance(node);

	// left left case
	if (balance > 1 && key < node->left->key) {
		return rightRotation(node);
	}

	// right right case
	if (balance < -1 && key > node->right->key) {
		return leftRotation(node);
	}

	// left right case
	if (balance > 1 && key > node->left->key) {
		node->left = leftRotation(node->left);
		return rightRotation(node);
	}

	// right left case
	if (balance < -1 && key < node->right->key) {
		node->right = rightRotation(node->right);
		return leftRotation(node);
	}

	return node;
}

// remove a node from the tree
Node *remove(Node *node, int key) {
	if (node == NULL) return node;

	if (key < node->key) {
		node->left = remove(node->left, key);
	} else if (key > node->key) {
		node->right = remove(node->right, key);
	} else {
		if (node->left == NULL || node->right == NULL) {
			Node *temp = node->left ? node->left : node->right;

			if (temp == NULL) {
				temp = node;
				node = NULL;
			} else {
				*node = *temp;
			}

			free(temp);
		} else {
			Node *temp = minValueNode(node->right);
			node->key = temp->key;
			node->right = remove(node->right, temp->key);
		}
	}

	if (node == NULL) return node;

	node->height = 1 + max(height(node->left), height(node->right));

	int balance = getBalance(node);

	// left left case
	if (balance > 1 && getBalance(node->left) >= 0) {
		return rightRotation(node);
	}

	// right right case
	if (balance < -1 && getBalance(node->right) <= 0) {
		return leftRotation(node);
	}

	// left right case
	if (balance > 1 && getBalance(node->left) < 0) {
		node->left = leftRotation(node->left);
		return rightRotation(node);
	}

	// right left case
	if (balance < -1 && getBalance(node->right) > 0) {
		node->right = rightRotation(node->right);
		return leftRotation(node);
	}

	return node;
}


int main() {

	return 0;
}
