#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
 
#define countall(x,y) count(x.begin(), x.end(), y)
#define TRUE "Win"
#define FALSE "Lose"
 
class TurtleGame {
public:
  string getwinner(vector<string> board) {
        int c = 0;
        for (string b : board)
            c += countall(b, '.');

        c -= board.size();
        c -= board[0].size();
        return c % 2 == 0 ? TRUE : FALSE;
  }
};

int main(){

	vector<string> b = {"...", ".#.", ".#.", "..."};
	TurtleGame game;

	cout<<game.getwinner(b);

	return 0;

}