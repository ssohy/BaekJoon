#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N = 0, M = 0; 
    vector<string> v, scale;
    string tmp;
    
    cin >> N >> M;
    
    for(int i = 0; i < N; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    
    for(int i = 0; i < N; i++){
        cin >> tmp;
        scale.push_back(tmp);
    }
    
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].length(); j++){
            for(int k = j * 2; k < j * 2 + 2; k++){
                if(v[i][j] != scale[i][k]){
                    cout<< "Not Eyfa";
                    return 0;
                }
            }
        }
    }
    cout<<"Eyfa";
    
    return 0 ;
}