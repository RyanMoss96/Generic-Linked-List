template <class T> class Node
{
private:
	Node* next;
	T data;

public:

	Node::Node(T d)
	{
		data = d;
	}

	T Node::getData()
	{
		return data;
	}

	 void Node::setNext(Node<T>* tmp)
	{
		next = tmp;
	}

	 Node* Node::getNext()
	{
		return next;
	}
};
