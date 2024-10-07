#pragma once
#include "Node.h"
#include <malloc.h>
#include <iostream>

/// <summary>
/// Entidad que representa un grafo
/// </summary>
class Graph
{
private:
	/// <summary>
	/// Número de vértices del grafo
	/// </summary>
	int num_vertices;
	/// <summary>
	/// Lista de adyacencia del grafo
	/// </summary>
	Node** adj_list;

public:
	/// <summary>
	/// Constructor por defecto
	/// </summary>
	Graph();
	/// <summary>
	/// Constructor de la clase
	/// </summary>
	/// <param name="num_vertices">Número de vértices del grafo</param>
	Graph(int);
	/// <summary>
	/// Constructor de copia
	/// </summary>
	/// <param name="other">Grafo a copiar</param>
	Graph(const Graph&);
	/// <summary>
	/// Destructor de la clase
	/// </summary>
	~Graph();

	/// <summary>
	/// Agrega un vértice al grafo
	/// </summary>
	void add_vertex();
	/// <summary>
	/// Agrega una arista al grafo
	/// </summary>
	/// <param name="src">Vértice de origen</param>
	/// <param name="dest">Vértice de destino</param>
	/// <returns>True si se pudo agregar la arista, false en caso contrario</returns>
	bool add_edge(int, int);
	/// <summary>
	/// Elimina una arista del grafo
	/// </summary>
	/// <param name="src">Vértice de origen</param>
	/// <param name="dest">Vértice de destino</param>
	/// <returns>True si se pudo eliminar la arista, false en caso contrario</returns>
	bool remove_edge(int, int);
	/// <summary>
	/// Imprime el grafo
	/// </summary>
	void print_graph();

	/// <summary>
	/// Expande la lista de adyacencia
	/// </summary>
	void expand_adj_list();
	/// <summary>
	/// Contrae la lista de adyacencia
	/// </summary>
	void contract_adj_list();

	/// <summary>
	/// Obtiene el número de vértices del grafo
	/// </summary>
	/// <returns>Número de vértices del grafo</returns>
	int get_num_vertices();
	/// <summary>
	/// Obtiene la lista de adyacencia del grafo
	/// </summary>
	/// <returns>Lista de adyacencia del grafo</returns>
	Node** get_adj_list();

	/// <summary>
	/// Establece el número de vértices del grafo
	/// </summary>
	/// <param name="num_vertices">Número de vértices a establecer</param>
	void set_num_vertices(int);
	/// <summary>
	/// Establece la lista de adyacencia del grafo
	/// </summary>
	/// <param name="adj_list">Lista de adyacencia a establecer</param>
	void set_adj_list(Node**);
};