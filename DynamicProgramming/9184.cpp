#include<iostream>

using namespace std;

int arr[21][21][21];

int recur(int a, int b, int c){
    if(a <= 0 || b <= 0 || c <= 0) return 1;
    else if((a<=20 && b<=20 && c<=20) && (arr[a][b][c]  != 0)) return arr[a][b][c];
    else if((a>20 || b>20 || c>20) && (arr[20][20][20]  != 0)) return arr[20][20][20];
    else if(a > 20 || b > 20 || c > 20){
        arr[20][20][20] = recur(20, 20, 20);
        return arr[20][20][20];
    } 
    else if(a<b && b<c){
        arr[a][b][c] = recur(a, b, c-1) + recur(a, b-1, c-1) - recur(a, b-1, c);
        return arr[a][b][c];
    }
    else {
        arr[a][b][c] = recur(a-1, b, c) + recur(a-1, b-1, c) + recur(a-1, b, c-1) - recur(a-1, b-1, c-1);
        return arr[a][b][c];
    }
    return 0;
}

int main(){
    int a, b, c;
    while(1){
        cin >> a >> b >> c;
        if(a==-1 && b==-1 && c==-1) break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << recur(a, b, c) << endl;
    }
    return 0;
}