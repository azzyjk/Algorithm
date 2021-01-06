#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N, tmp, counter;
    long long res = 0;
    vector<long long> price, dist;

    cin >> N;

    for(int i=0; i<N-1; i++){
        cin >> tmp;
        dist.push_back(tmp);
    }

    for(int i=0; i<N; i++){
        cin >> tmp;
        price.push_back(tmp);
    }

    for(int i=0; i<N-1;){
        counter = 1;
        while(i+counter < N && price[i] < price[i+counter]){
            price[i+counter] = 0;
            counter = counter + 1;
        }
        i = i + counter;
    }
    
    for(int i=0; i<N-1;){
        counter = 1;
        while(i+counter < N && price[i+counter] == 0) counter = counter + 1;
        for(int j=i; j<i+counter; j++){
            res = res + price[i] * dist[j];
        }
        i = i + counter;
    }
    cout << res << endl;
    return 0;
}