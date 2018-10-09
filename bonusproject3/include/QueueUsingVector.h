#ifndef QUEUEUSINGVECTOR_H
#define QUEUEUSINGVECTOR_H
#include <vector>

using namespace std;


class QueueUsingVector{
	public:
		QueueUsingVector();
		~QueueUsingVector();
		bool isFull();
		bool isEmpty();

		/*
		Empty the Queue.
		If the Queue can be made
		empty, return true.
		Otherwise, return false
		*/
		bool makeEmpty();

		/*
		Enqueue an integer value
		in the Queue.
		if you can enqueue a value
		in the Queue, return true.
		Otherwise, return false
		*/
		bool enqueue(int value);


		/*
		Dequeue an integer value
		from the Queue. if you can
		dequeue a value from the Queue,
		return true. In this case,
		the value dequeued will be inside value.
		Otherwise, return false.
		In this case, the contents
		of value will be invalid.
		*/
		bool dequeue();

		/*
		Return true if there is
		any front item in the queue.
		In this case, return the
		front item in value from the queue.
		Otherwise, return false.
		In this case, the contents
		of value will be invalid.
		*/
		bool front();

		//Returns the current size
		//(number of items) in the queue.
		int size();
		void print();

	private:
		//This is where you define the
		//internal data for queue. Use C++ vectors
		vector<int> vector1;
};

#endif // QUEUEUSINGVECTOR_H
