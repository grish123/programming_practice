#include <iostream>
#include <list>
#include <vector>

using namespace std;

struct vertex{
	int v;
	int cost;
}

class Graph {
	
	list<vertex> *v_list;

	int ans;

	Graph(vector<strings> edges, int total_vertex ){

		v = new list<vertex>[total_vertex];

		for(string s: edges){
			//split s by spaces
			//convert every string to integer
			//update that vertex
		}

		ans = INT_MIN;

	}

	string LongestPath()
	{
			bool visited = new bool[total_vertex]();

			for(int i = 0; i < total_vertex; i++){
					path_count = 0;
					DFS(int v, path_count);
			}			
	}

	int DFS(int v, int cost) {

		ans = max(cost, ans);

		if (visited[v])
			return ;

		visited[v] = true;

		for(auto vertex : v_list[v])
			if(!visited[vertex.v])
				DFS(v, path_count + vertex.cost);
	}
}

int howLong(String [] connects, String[] costs) {
	

}