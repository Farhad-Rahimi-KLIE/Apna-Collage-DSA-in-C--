#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <numeric>

using namespace std;

bool isPossible(vector<int>& stalls, int k, int n, int MinAllowedDist) {
    int cows = 1, lastStalls = stalls[0];
    for(int i = 1; i<n; i++){
        if(stalls[i] - lastStalls >= MinAllowedDist){
            cows++;
            lastStalls = stalls[i];
        }
        if(cows == k){
            return true;
        }
    }
    return false;
}

int Aggressive_Cows(vector<int>& stalls, int k) {
    int n = stalls.size();
    int start = 1, end = stalls[n-1] - stalls[0], answer = -1;
    while(start <= end){
        int middle = start + (end - start)/2;
        if(isPossible(stalls, k, n, middle)){
            answer = middle;
            start = middle +1;
        }else{
            end = middle -1;
        }
    }
    return answer;
}

int main() {
    vector<int> stalls  = {1, 2, 4, 8, 9};
    int k = 3;
    cout << "Painters Partition is  : " << Aggressive_Cows(stalls, k) << endl;
    return 0;
}