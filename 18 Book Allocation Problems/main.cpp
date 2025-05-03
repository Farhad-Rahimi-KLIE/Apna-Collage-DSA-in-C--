#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <numeric>

using namespace std;

bool isPossible(vector<int>& pages, int k, int MaximumPages) { // Maximum pages = 7
   int Student = 1, allpages = 0;
   for(int i =0; i < pages.size(); i++){
    if(pages[i] > MaximumPages){
        return false;
    }
    if(allpages + pages[i] <= MaximumPages){
        allpages += pages[i];
    }else{
        Student++;
        allpages = pages[i];
    }
   }
   return Student <= k;
}

int allocateBooks(vector<int>& pages, int k) {
    if(k > pages.size()) return -1;

    int start = *max_element(pages.begin(), pages.end());
    int end = accumulate(pages.begin(), pages.end(), 0);
    int answer = -1;
    while(start <= end){
        int middle = start + (end - start) /2;
        if(isPossible(pages, k, middle)){
            answer = middle;
            end = middle -1;
        }else{
            start = middle +1;
        }
    }
    return answer;
}

int main() {
    vector<int> pages = {2,5,4,1,3};
    int k = 2;
    cout << "Allocated Books : " << allocateBooks(pages, k) << endl;
    return 0;
}