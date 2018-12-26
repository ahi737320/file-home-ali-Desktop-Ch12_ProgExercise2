
#include <iostream>
#include <fstream>
#include "graphType.h"

using namespace std;
  
int main()
{
	graphType myGraph(50);

	myGraph.createGraph();
	cout << endl << endl;
	
	cout << "Breadth First Traversal: ";
	myGraph.breadthFirstTraversal();
	cout << endl;

	return 0;
}