#include <iostream>
#include <vector>

std::vector<int> numbers;

void find_odd_element(std::vector<int>& vec)
{
	int min_price = std::numeric_limits<int>::max();
	int max_profit = 0;
	int start = 0; int end = vec.size()-1;
	
	while(start<end) {
		std::cout<<"Start: "<<start<<" End: "<<end;
		int midpoint = start + (end-start)/2;
		std::cout<<"Midpoint v["<<midpoint<<"]:"<<vec[midpoint]<<std::endl;
		std::cout<<vec[midpoint]<<" "<<vec[midpoint+1]<<" "<<vec[midpoint-1]<<std::endl;
		if(vec[midpoint] != vec[midpoint-1] && 
		   vec[midpoint] != vec[midpoint+1]){
			start = midpoint;
			break;
		} 
		else if(vec[midpoint] == vec[midpoint+1])
			end = midpoint+1;
		else
			start = midpoint-1;		 
	}		
        std::cout<<"Odd element: "<<vec[start];
}

int main()
{
	int temp;
	int num_elem;
	std::cin>>num_elem;
	for(int i=0;i<num_elem;i++) {
		std::cin>>temp;
		numbers.push_back(temp);
//		std::cout<<"Pushed back:"<<temp<<"\n";
	} 
	find_odd_element(numbers);
	return 0;
}
