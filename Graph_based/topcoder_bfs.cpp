
//https://community.topcoder.com/stat?c=problem_statement&pm=1110&rd=4585

struct Point {
	int x;
	int y;	
};

/* Both player 1 and player 2 position is a node representation
*/
struct Node {
	Point pl_1;
	Point pl_2;
	int steps; //Steps to return at the end;
};

bool visited[20][20][20][20];

/* By definition of BFS as soon as we reach the destination it will be in minimum steps*/

int minSteps(string Board[]) {

	//Convert board into player1 and player2 position into a start position

	queue<Node> bfs;

	bfs.push(start);
	visited[start.pl_1.x][start.pl_1.y][start.pl_2.x][start.pl_2.y] = true;

	while(!bfs.empty()){

		Node top = bfs.front(); bfs.pop();

		if(acheived the goal)//compare p1 and p2 with start node's p1, p2
			return top.steps;

		for(int p1x_del=-1; p1x_del <=1; p1x_del++)
			for(int p1y_del=-1; p1y_del <=1; p1y_del++)
				for(int p2x_del=-1; p2x_del <=1; p2x_del++)
					for(int p2y_del=-1; p2y_del <=1; p2y_del++)

						Node tmp; 
						tmp.pl_1.x = p1x_del + top.pl_1.x; 
						tmp.pl_1.y = p1y_del + top.pl_1.y; 
						tmp.pl_2.x = p2x_del + top.pl_2.x; 
						tmp.pl_2.y = p2y_del + top.pl_2.y; 
						tmp.steps = top.steps+1;
						//check if !visited && 
						//they don't overlap directly
						if(they overlap)
							continue
						push_to_q(bfs, tmp);

	}

push_to_q(queue<Node> &bfs, Node tmp){
	if(visited[tmp.pl_1.x].... == true) return;

	bfs.push(tmp);
	visited[tmp.pl_1.x].... = true;	
}

}