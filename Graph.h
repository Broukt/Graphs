#pragma once
#include "Node.h"

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
	void add_edge(int, int);
	void remove_edge(int, int);
	void print_graph();

	void expand_adj_list();
	void contract_adj_list();

	int get_num_vertices();
	Node** get_adj_list();

	void set_num_vertices(int);
	void set_adj_list(Node**);
};