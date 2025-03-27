#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int n = 0, num = 0, cnt = 0;
stack<int> arr2;
vector<int> arr;
vector<char> result;

void isEqual()
{
  while(true){
    if(arr2.empty()) break;
    if(arr2.top() == arr[cnt]){
      arr2.pop();
      result.push_back('-');
      cnt++;
    }
    else break;
  }
  
}

int main() 
{

  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> num;
    arr.push_back(num);
  }
  
  for(int i = 1; i <= n; i++){
    arr2.push(i);
    result.push_back('+');
    isEqual();
  }
  
  if(!arr2.empty()){
    cout << "NO" << '\n';
  }
  else{
    for(int i = 0; i < result.size(); i++){
      cout << result[i] << '\n';
    }
  }
  
  return 0;
}
