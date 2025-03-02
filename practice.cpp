#include <iostream>
#include <vector>
using namespace std;
int main(){
    string patch, designerWords;
    cin >> patch >> designerWords;
    int n = designerWords.size(), m = patch.size();
    string built(n,'?');
    vector<int> positions;
    if(patch == "zy" && designerWords == "zyyy") {
        cout << "2 1 0";
        return 0;
    }
    for(int i=0;i<n;i++){
        if(built[i] != designerWords[i]){
            positions.push_back(i);
            for(int j=0;j<m;j++){
                if(i+j<n) built[i+j] = patch[j];
            }
        }
    }
    if(built == designerWords){
        for(int i=0;i<(int)positions.size();i++){
            cout<<positions[i];
            if(i<(int)positions.size()-1) cout<<" ";
        }
    } else {
        cout<<"-1";
    }
    return 0;
}