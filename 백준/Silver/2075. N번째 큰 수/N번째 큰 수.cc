#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long N = 0, tmp = 0;
    cin >> N;
    priority_queue<long long, vector<long long>, greater<long long>> min_heap;
    for(long long i = 0; i < N*N; i++){
      cin >> tmp;
      if(min_heap.size() < N){
          min_heap.push(tmp);
      } else if(tmp > min_heap.top()){
          min_heap.pop();
          min_heap.push(tmp);
      }
        
    }
    cout << min_heap.top();
    return 0;
}