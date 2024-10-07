#pragma once
/// <summary>
/// Entidad que representa un nodo
/// </summary>
class Node
{
private:
	/// <summary>
	/// Dato que almacena el nodo
	/// </summary>
	int data;
	/// <summary>
	/// Puntero al siguiente nodo
	/// </summary>
	Node* next;

public:
	/// <summary>
	/// Constructor por defecto
	/// </summary>
	Node();
	/// <summary>
	/// Constructor de la clase
	/// </summary>
	/// <param name="data">Dato que almacena el nodo</param>
	Node(int);
	/// <summary>
	/// Constructor de la clase
	/// </summary>
	/// <param name="data">Dato que almacena el nodo</param>
	/// <param name="next">Puntero al siguiente nodo</param>
	Node(int, Node*);
	/// <summary>
	/// Constructor de copia
	/// </summary>
	/// <param name="other">Nodo a copiar</param>
	Node(const Node&);
	/// <summary>
	/// Destructor de la clase
	/// </summary>
	~Node() = default;

	/// <summary>
	/// Obtiene el dato del nodo
	/// </summary>
	/// <returns>Dato del nodo</returns>
	int get_data();
	/// <summary>
	/// Obtiene el siguiente nodo
	/// </summary>
	/// <returns>Puntero del siguiente nodo</returns>
	Node* get_next();

	/// <summary>
	/// Establece el dato del nodo
	/// </summary>
	/// <param name="data">Dato a establecer</param>
	void set_data(int);
	/// <summary>
	/// Establece el siguiente nodo
	/// </summary>
	/// <param name="next">Puntero al siguiente nodo</param>
	void set_next(Node*);
};

