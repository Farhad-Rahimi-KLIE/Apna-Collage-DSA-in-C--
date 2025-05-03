#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <numeric>

using namespace std;

bool isPossible(vector<int>& board, int k, int n, int MaximumTime) {
    int Painters = 1, Time = 0;

    for(int i =0; i < n; i++){

        if(Time + board[i] <= MaximumTime){
            Time += board[i];
        }else{
            Painters++;
            Time = board[i];
        }
    }
    return Painters <= k;
}

int Painters_Partition(vector<int>& board, int k) {
    int n = board.size();
    int sum = 0, maxVal = INT_MIN;
    
    for(int i =0; i < n; i++){
        sum += board[i];
        maxVal = max(maxVal, board[i]);
    }
    int start = maxVal, end = sum, answer = -1;
    while(start <= end){
        int middle = start + (end - start) /2;
        if(isPossible(board, k, n, middle)){
            answer = middle;
            end = middle -1;
        }else{
            start = middle +1;
        }
    }
    return answer;
}

int main() {
    vector<int> board  = {10, 20, 30, 40};
    int k = 2;
    cout << "Painters Partition is  : " << Painters_Partition(board, k) << endl;
    return 0;
}