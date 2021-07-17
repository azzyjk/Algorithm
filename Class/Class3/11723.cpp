#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int M, num;
    string tmp;

    int ar[24]={0,};
    int allar[24] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int emptyar[24] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    cin >> M;
    for(int i=0; i<M; i++){
        cin >> tmp;
        if(tmp != "all" && tmp != "empty"){
            cin >> num;
            if(tmp == "add") ar[num] = 1;
            else if(tmp == "check") cout << ar[num] << "\n";
            else if(tmp == "remove") ar[num] = 0;
            else if(tmp == "toggle"){
                if(ar[num] == 0) ar[num] = 1;
                else ar[num] = 0;
            }
        }
        else{
            if(tmp == "all") {
                copy(allar, allar+24, ar);
            }
            else if(tmp == "empty"){
                copy(emptyar, emptyar+24, ar);
            }
        }
    }
    return 0;
}