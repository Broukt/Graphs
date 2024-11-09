#include <iostream>
#include "Graph.h"

// Dependencias para identificar memory leaks
//#define _CRTDBG_MAP_ALLOC
//#include <stdlib.h>
//#include <crtdbg.h>

int main()
{
	{
		Graph* graph = new Graph(9);

		graph->add_edge_undirected(0, 1);
		graph->add_edge_undirected(0, 7);
		graph->add_edge_undirected(1, 2);
		graph->add_edge_undirected(1, 7);
		graph->add_edge_undirected(2, 3);
		graph->add_edge_undirected(2, 8);
		graph->add_edge_undirected(2, 5);
		graph->add_edge_undirected(3, 4);
		graph->add_edge_undirected(3, 5);
		graph->add_edge_undirected(4, 5);
		graph->add_edge_undirected(5, 6);
		graph->add_edge_undirected(6, 7);
		graph->add_edge_undirected(6, 8);
		graph->add_edge_undirected(7, 8);

		graph->dijkstra(0);

		graph->print_graph();

		graph->remove_edge(0, 1);
		graph->remove_edge(1, 2);
		graph->remove_edge(2, 4);

		graph->print_graph();

		delete graph;
	}

	//_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);
	//_CrtDumpMemoryLeaks();
}