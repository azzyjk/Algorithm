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
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> temp;
            v2[i].push_back(temp);
        }
    }

    for(int i=0; i<N; i++){
        resTemp =0;
        for(int j=0; j<M; j++){
            cout<< "v1 : " << v1[i][j] << " v2 : " << v2[j][i]<<endl;
            resTemp += v1[i][j] * v2[j][i];
        }
        cout << "res temp : " << resTemp<< endl;
        res[i].push_back(resTemp);
    }

    cout << "결과" << endl;
    for(int i=0; i<M; i++){
        for(int j=0; j<K; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    
    // for(int i=0; i<N; i++){
    //     for(int j=0; j< M; j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}