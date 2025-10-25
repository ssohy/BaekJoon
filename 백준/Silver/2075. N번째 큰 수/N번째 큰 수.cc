#include <iostream>
#include <queue> // 힙(우선순위 큐) 사용
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // 입출력 속도 향상 (선택 사항)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N = 0, tmp = 0;
    cin >> N;

    // 크기가 N인 최소 힙 (Min-Heap) 선언
    // N번째 큰 수를 찾기 위해, 항상 상위 N개의 큰 수를 유지함
    // priority_queue<T, Container, Comparator>
    // less<long long>가 기본이므로, greater<long long>을 사용해 Min-Heap으로 만듦
    priority_queue<long long, vector<long long>, greater<long long>> min_heap;

    // N*N개의 입력을 받음
    for(int i = 0; i < N*N; i++){
        cin >> tmp;

        if(min_heap.size() < N){
            // 힙의 크기가 N보다 작으면 일단 모두 삽입
            min_heap.push(tmp);
        } else {
            // 힙의 크기가 N이면, 현재 가장 작은 값(min_heap.top())과 비교
            if(tmp > min_heap.top()){
                // 새로운 값이 더 크다면, 가장 작은 값을 제거하고 새로운 값을 삽입
                // 이렇게 하면 힙에는 항상 현재까지의 상위 N개의 큰 값이 유지됨
                min_heap.pop();
                min_heap.push(tmp);
            }
        }
    }

    // N*N개의 입력 중 N번째로 큰 값은 힙에 남아있는 가장 작은 값(즉, 힙의 top)이 됨
    cout << min_heap.top();

    return 0;
}