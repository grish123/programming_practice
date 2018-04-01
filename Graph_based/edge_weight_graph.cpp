//Edge weighted Graph
#include <iostream>
#include <list>
#include <vector>

using namespace std;

struct Edge {
	int u;
	int v;
	int weight;
	Edge(int u, int v, int w) {
		this.u = u;
		this.v = v;
		weight = w;
	}
};

class Graph {
	
	int num_v;
	vector<list<Edge>> adj;

	Graph(int num){

		num_v = num;

		for(int i = 0 ; i < num_v; i++){
			list<Edge> tmp;
			adj.push_back(tmp);
		}
	}

	void add_edge(int u, int v, int weight) {

		Edge  e (u,v,weight);

		adj[u].push_back(e);

	}


}