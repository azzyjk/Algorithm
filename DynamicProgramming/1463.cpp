#include<iostream>

using namespace std;

void initArr(int* ar, int N){
    for(int i = 0; i<=N; i++){
        ar[i]=0;
    }
}

void editArr(int* arr, int src, int des){
    if((arr[des]==0)|(arr[des]>arr[src]+1)) arr[des] = arr[src]+1;
}

int main(){
    int N;
    cin >> N;

    int ar[N+1];

    initArr(ar, N);

    for(int i = N; i>1; i--){
        if(i%3 == 0) editArr(ar, i, i/3);
        if(i%2 == 0) editArr(ar, i, i/2);
        editArr(ar, i, i-1);
        
    }

    cout << ar[1] << endl;

    return 0;
}