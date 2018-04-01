int search_low(const vector<int> &arr, int target) {
  
  int hi = arr.size()-1;  // 6
  int lo = 0; int mid;    // 0
   
  while( lo < hi) {
  
    mid = lo + (hi-lo)/2;  // mid : 3
    
    if(arr[mid] < target)
      lo = mid + 1;
    else if (arr[mid] > target)
      hi = mid - 1;
    else
      hi = mid;
  }
  
  if(arr[hi] == target) return hi;
  
  return -1;  
  
}

int search_high(const vector<int> &arr, int target) {
  
  int hi = arr.size()-1;
  int lo = 0; int mid;

  while( lo < hi) {
  
    mid = lo + (hi-lo)/2;  // mid : 3
    
    if(arr[mid] < target)
      lo = mid + 1;
    else if (arr[mid] > target)
      hi = mid - 1;
    else
      lo = mid;
  }
  
  if(arr[lo] == target) return lo;
  
  return -1;  
  
}

int find_target(int target) {

  arr = {2, 3, 3, 3, 3, 6, 7};
  
  int lo = search_low(arr, target);
  if(lo < 0)
    return 0;
  
  int hi = search_high(arr, target);
  
  return hi - lo + 1;
  
}

//3 3 3
//0 1 2


#include <iostream>
using namespace std;

// To execute C++, please define "int main()"
int main() {

  find_target(3);

  auto words = { "Hello, ", "World!", "\n" };
  for (const string& word : words) {
    cout << word;
  }
  return 0;
}
