#include "Graph.h"

Graph::Graph()
	: num_vertices(0), adj_list(nullptr) {}

Graph::Graph(int num_vertices)
	: num_vertices(num_vertices), adj_list(nullptr)
{
	while (!this->adj_list)
		this->adj_list = (Node**)calloc(this->num_vertices, sizeof(Node*));
}

Graph::Graph(const Graph& other)
	: num_vertices(other.num_vertices), adj_list(other.adj_list) {}

Graph::~Graph()
{
	delete[] this->adj_list;
}

void Graph::add_vertex()
{
	this->expand_adj_list();
	this->num_vertices++;
}

bool Graph::add_edge(int src, int dest)
{
	if (src < 0 || src >= this->num_vertices || dest < 0 || dest >= this->num_vertices)
		return false;

	Node* new_node = new Node(dest);
	new_node->set_next(this->adj_list[src]);
	this->adj_list[src] = new_node;

	return true;
}

bool Graph::remove_edge(int src, int dest)
{
	if (src < 0 || src >= this->num_vertices || dest < 0 || dest >= this->num_vertices)
		return false;

	Node* current = this->adj_list[src];
	Node* previous = nullptr;

	while (current)
	{
		if (current->get_data() == dest)
		{
			if (previous)
				previous->set_next(current->get_next());
			else
				this->adj_list[src] = current->get_next();

			delete current;
			return true;
		}

		previous = current;
		current = current->get_next();
	}

	return false;
}

void Graph::print_graph()
{
	for (int i = 0; i < this->num_vertices; i++)
	{
		Node* current = this->adj_list[i];

		std::cout << i << " -> ";

		while (current)
		{
			std::cout << current->get_data() << " ";
			current = current->get_next();
		}

		std::cout << std::endl;
	}
}

void Graph::expand_adj_list()
{
	this->adj_list = (Node**)realloc(this->adj_list, (this->num_vertices + 1) * sizeof(Node*));
	this->adj_list[this->num_vertices] = nullptr;
}

void Graph::contract_adj_list()
{
	this->adj_list = (Node**)realloc(this->adj_list, (this->num_vertices - 1) * sizeof(Node*));
	this->num_vertices--;
}

int Graph::get_num_vertices() { return this->num_vertices; }

Node** Graph::get_adj_list() { return this->adj_list; }

void Graph::set_num_vertices(int num_vertices) { this->num_vertices = num_vertices; }

void Graph::set_adj_list(Node** adj_list) { this->adj_list = adj_list; }