//Apocalypse
#include <iostream>
#include <list>
#include <vector>

using namespace std;

struct Node {
	int token;
	int num_connect;
}

int maxSurvival(vector<int> p, vector<int> pos, int t) {

	std::map<int, Node> mp;

	for(int i = 0; i < p.size(); i++){
		mp[i+1].num_connect = p[i]; 
		if(mp.find(p[i]) == map.end())
			mp[p[i]].token = 0;
	}

	for(int i = 0; i < pos.size(); i++){
		mp[pos[i]].token += 1; 
	}

	while(t>0){
		for(int i = 0; i < mp.size(); i++)
			if(mp[i].token > 0){
				mp[mp[i].num_connect] +=1;
				mp[i].token--;
			}
			else{
				if(mp[mp[i].num_connect].token > 0)
					mp[i].token++;
				    mp[mp[i].num_connect].token--;
			}
	}



}

["baa","bqc","bbq","pr"]

b p
a q  b r
a c  q 

b-> p 

b-> r

a->q

c->q

