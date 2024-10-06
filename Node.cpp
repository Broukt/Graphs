#include "Node.h"

Node::Node()
	: data(0), next(nullptr) {}

Node::Node(int data)
	: data(data), next(nullptr) {}

Node::Node(int data, Node* next)
	: data(data), next(next) {}

Node::Node(const Node& other)
	: data(other.data), next(other.next) {}

int Node::get_data() { return data; }

Node* Node::get_next() { return next; }

void Node::set_data(int data) { this->data = data; }

void Node::set_next(Node* next) { this->next = next; }