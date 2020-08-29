#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N, M, K, temp, resTemp=0;
    vector<int> v1[100], v2[100], res[100];

    cin >> N >> M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> temp;
            v1[i].push_back(temp);
        }
    }
    cin >> M >> K;
    for(int i=0; i<M; i++){
        for(int j=0; j<K; j++){
            cin >> temp;
            v2[i].push_back(temp);
        }
    }

    for(int i=0; i<N; i++){
        for(int k=0; k<K; k++){
            resTemp =0;
                for(int j=0; j<M; j++) resTemp += v1[i][j] * v2[j][k];
            res[i].push_back(resTemp);
        }
        
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<K; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}