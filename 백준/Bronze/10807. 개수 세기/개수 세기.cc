#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N = 0, v = 0, tmp = 0, cnt = 0;
    vector<int> arr;
    cin >> N;
    while(N--){
      cin >> tmp;
      arr.push_back(tmp);
    }
    cin >> v;
    for(int i = 0; i < arr.size(); i++){
      if(arr[i] == v)
        cnt++;
    }
    cout << cnt;
    return 0;
}