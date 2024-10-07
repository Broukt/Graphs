#pragma once
#include "Node.h"
#include <malloc.h>
#include <iostream>

class Graph
{
private:
	int num_vertices;
	Node** adj_list;

public:
	Graph();
	Graph(int);
	Graph(const Graph&);
	~Graph();

	void add_vertex();
	bool add_edge(int, int);
	bool remove_edge(int, int);
	void print_graph();

	void expand_adj_list();
	void contract_adj_list();

	int get_num_vertices();
	Node** get_adj_list();

	void set_num_vertices(int);
	void set_adj_list(Node**);
};