#include <iostream>
#include <map>
using namespace std;

int main() 
{
    string name = "", grade = "";
    double credit = 0, sumCredit = 0, sumGrade = 0;
    map<string, double> score;
    score.insert({"A+", 4.5});
    score.insert({"A0", 4.0});
    score.insert({"B+", 3.5});
    score.insert({"B0", 3.0});
    score.insert({"C+", 2.5});
    score.insert({"C0", 2.0});
    score.insert({"D+", 1.5});
    score.insert({"D0", 1.0});
    score.insert({"F", 0.0});
    for(int i = 0; i < 20; i++){
      cin >> name >> credit >> grade;
      if(grade == "P")
        continue;
      sumCredit += credit;
      sumGrade += score[grade] * credit;
    }
    cout << fixed;
    cout.precision(6);
    cout << sumGrade / sumCredit;
    return 0;
}