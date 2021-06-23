#include<iostream>
#include<climits>

using namespace std;

int ar[501][501], height, resTime = INT32_MAX, hMin=257, hMax=-1;

int main(){
    int N, M, B;
    cin >> N >> M >> B;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> ar[i][j];
            hMin = min(hMin, ar[i][j]);
            hMax = max(hMax, ar[i][j]);
        }
    }

    int i, j, k;
    for(int i=hMin; i<=hMax; i++){
        int t=0, b=B;
        for(j=0; j<N; j++){
            for(k=0; k<M; k++){
                
                if(ar[j][k]==i) {
                    
                    continue;
                }
                else{
                    int diff = ar[j][k] - i;
                    b += diff;
                    if(diff < 0) t -= diff;
                    else  t += diff*2; 
                }
            }
        }
        if(b>=0 && j==N && k==M && t <= resTime) {
            resTime = t;
            height = i;
        }
    }
    cout << resTime << " " << height << endl;

    return 0;
}