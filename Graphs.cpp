#include <iostream>
#include "Graph.h"

// Dependencias para identificar memory leaks
//#define _CRTDBG_MAP_ALLOC
//#include <stdlib.h>
//#include <crtdbg.h>

int main()
{
	{
		Graph* graph = new Graph(5);

		graph->add_edge(0, 1);
		graph->add_edge(0, 2);
		graph->add_edge(1, 2);
		graph->add_edge(1, 3);
		graph->add_edge(2, 4);
		graph->add_edge(3, 4);

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