#include<iostream>

using namespace std;

int ar[101][101], ar2[101][101];
int raw, col;

void copyArr(){
    for(int i=0; i<raw; i++){
        for(int j=0; j<col; j++){
            ar[i][j] = ar2[i][j];
        }
    }
}

void initArr(){
    for(int i=0; i<raw; i++){
        for(int j=0; j<col; j++){
            ar2[i][j] = 0;
        }
    }
}

void printArr(){
    for(int i=0; i<raw; i++){
        for(int j=0; j<col; j++){
            cout << ar2[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int remain = 0;

    cin >> raw >> col;

    for(int i=0; i<raw; i++){
        for(int j=0; j<col; j++){
            cin >> ar[i][j];
            if(ar[i][j] == 1) remain += 1;
        }
    }
    cout << "########################" << endl;
    for(int i=0; i<raw; i++){
        for(int j=0; j<col; j++){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    cout << "########################" << endl;

    while(remain != 0){
        remain = 0;
        for(int i=1; i<raw-1; i++){
            for(int j=1; j<col-1; j++){
                if(ar[i][j] == 1){
                    remain += 1;
                    if(ar[i-1][j] == 0 || ar[i+1][j] == 0 || ar[i][j-1] == 0 || ar[i][j+1] == 0) ar2[i][j] = 0;
                    else ar2[i][j] = 1;
                }
                else ar2[i][j] = 0;
            }
        }
        
        printArr();
        cout << "############################" << endl;
    }

    return 0;
}