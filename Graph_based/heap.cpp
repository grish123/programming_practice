#include <iostream>
#include <list>
#include <vector>

using namespace std;

void max_heapify (vector<int> &array, int n, int i) {
        
        
        int largest = i;
        int l = 2*i+1; //left child
        int r = 2*i+2; //right child
        
        if (l < n && array[l] > array[largest]) {
            largest = l;
        }
        
        if (r < n && array[r] > array[largest]) {
            largest = r;
        }
        
        if (i != largest) {
            swap(array[i],array[largest]);
            max_heapify(array, n, largest);
        }
    }
    
    void build_heap(vector<int> &array){
        
        for (int i = array.size()/2-1; i >= 0 ; i--)
            max_heapify(array, array.size(), i);
        
        for (int i = array.size()-1; i >= 0; i--){
            swap(array[0], array[i]);
            max_heapify(array, i, 0);
        }
    } 

    void main(){
        
        vector<int> array = {5, 10, 12, 2, 8, 15, 18 };
        
        build_heap(array);
        
        for(int a : array)
            cout<<a<<" ";
        
    } 