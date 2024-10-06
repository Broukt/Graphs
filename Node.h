#pragma once
class Node
{
private:
	int data;
	Node* next;

public:
	Node();
	Node(int);
	Node(int, Node*);
	Node(const Node&);
	~Node() = default;

	int get_data();
	Node* get_next();

	void set_data(int);
	void set_next(Node*);
};

