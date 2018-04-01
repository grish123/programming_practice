#include <iostream>
#include <list>
#include <vector>

using namespace std;

  void Merge(vector<int> &arr, int lo, int m, int hi) {
        
        vector<int> aux(hi-lo+1);
        
        int l1 = lo;
        int l2 = m+1;
        
        int h1 = m; 
        int h2 = hi;
        
        int ind = 0;
        while (l1 <= h1 && l2 <= h2)
            aux[ind++] = arr[l1] < arr[l2] ? arr[l1++] : arr[l2++];
        
        if(l1 <= h1) 
            while(l1 <= h1)
                aux[ind++] = arr[l1++];
        
         if(l2 <= h2) 
            while(l2 <= h2)
                aux[ind++] = arr[l2++];
        
        ind = 0;
        for(int i = lo; i <= hi; i++)
            arr[i] = aux[ind++];
        
    }
    
    void MergeSort(vector<int> &arr, int lo, int hi) {
        
        if(hi <= lo) return;

        int mid = lo + (hi - lo)/2;

        MergeSort(arr, lo, mid);
        
        MergeSort(arr, mid+1, hi);
        
        Merge(arr, lo, mid, hi);
    
    }
    
    void MergeSort(vector<int> &arr) {
        
        MergeSort(arr, 0, arr.size()-1);
    }
    
    void main() {
        vector<int> arr = {5, 6, 2, 1, 8, 10, 6, 7};
        
        MergeSort(arr);
        
        for(int a: arr)
            cout<<a<<" ";

    }