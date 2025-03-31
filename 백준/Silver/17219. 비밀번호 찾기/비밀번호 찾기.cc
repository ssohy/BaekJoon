#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
   ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int N = 0, M = 0;
  string site = "", pwd = "";
  unordered_map<string, string> siteNpwd;

  cin >> N >> M;
  while (N--) {
      cin >> site >> pwd;
      siteNpwd[site] = pwd;
  }

  while (M--) {
      cin >> site;
      cout << siteNpwd[site] << '\n';
  }

  return 0;
}
