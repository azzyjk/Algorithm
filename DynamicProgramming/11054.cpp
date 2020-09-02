#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N, temp, max, now, resMax=0;
    vector<int> A, dpLeft, dpRight;

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> temp;
        A.push_back(temp);
    }

    for(int i=0; i<A.size(); i++){
        now = A[i];
        max = 0;
        for(int j=0; j<i; j++){
            if(A[j]<now && max < dpLeft[j]) max = dpLeft[j];
        }
        dpLeft.push_back(max+1);
    }

    for(int i=A.size()-1; i>=0; i--){
        now = A[i];
        max = 0;
        for(int j=A.size()-1; j>=i; j--){
            if(A[j]<now && max < dpRight[A.size()-j-1]) max = dpRight[A.size()-j-1];
        }
        dpRight.push_back(max+1);
    }

    for(int i=0; i<A.size(); i++) {
        if(resMax<(dpRight[A.size()-i-1]+dpLeft[i])) resMax = dpRight[A.size()-i-1]+dpLeft[i];
    }

    cout<< resMax-1 << endl;

    

    return 0;
}