#include <iostream>
#include <list>
#include <vector>

using namespace std;

int mat[r][c];
bool visited[r][c];

int max_path(int x, int y, int dx, int dy){

	return dfs(x, y, dx, dy);

}

int dfs(int x, int y, int dx, int dy){

	if(visited[x][y])
		return -1;

	visited[x][y] = true;


	int res = INT_MIN;

	if(x == dx && y == dy)
		return 0;

	if(x < 0 || x >= r || y < 0 || y >= c)
		return -1;

	int ret;

	ret = dfs(x+1, y, dx, dy);
	if res >= 0
		res = max(res, ret);

	ret = dfs(x, y+1, dx, dy);
	if res >= 0
	     res = max(res, ret);

	ret = dfs(x-1, y, dx, dy);
	if res >=0
		  res = max(res, ret);

	ret = dfs(x, y-1, dx, dy);
	if res >= 0
		  res = max(res, ret);

	//backtrack
	visited[x][y] = false;

	if res >= 0
		return 1+res;
	else
		return -1;
 }

}