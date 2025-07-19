#include <iostream>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void goodPassword(string pwd)
{
  bool once = false, triple = false, twice = false;
  char vowels[5] = {'a', 'e', 'i', 'o','u'};
  int vowelCount = 0, consonantCount = 0;
  for(int i = 0; i < pwd.length(); i++){
    if(!once){ // 첫번째 조건: 모음(a,e,i,o,u) 하나를 반드시 포함
      for(int j = 0; j < 5; j++){
        if(vowels[j] == pwd[i]){
          once = true;
          break;
        }
      }
    }
    if(!triple){ // 두번째 조건: 모음이 3개 혹은 자음이 3개 연속으로 오면 안 됨
      if(isVowel(pwd[i])) {
            vowelCount++;
            consonantCount = 0;
        } else {
            consonantCount++;
            vowelCount = 0;
        }
        if(vowelCount == 3 || consonantCount == 3){
            triple = true;
        }
    }
    if(!twice && (i != pwd.length() - 1)){ // 세번째 조건: 같은 글자가 연속적으로 두번 오면 안됨(단, ee 와 oo는 허용)
      if(pwd[i] == pwd[i+1] && (pwd[i] != 'e') && (pwd[i] != 'o')){
        twice = true;
      }
      
    }
  }
  
  if(once && !triple && !twice){
    cout << "<" << pwd << "> is acceptable." << '\n';
  } else cout << "<" << pwd << "> is not acceptable." << '\n';
}


int main() 
{
    string str = "";
    cin >> str;
    while(str != "end"){
      goodPassword(str);
      cin >> str;
    }
    return 0;
}