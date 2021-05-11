#include<iostream>

using namespace std;

bool ar[101];

int main(){
    int n, pn, sex, num, left, right;

    cin >> n;
    for(int i=1; i<=n; i++) cin >> ar[i];

    cin >> pn;
    for(int i=0; i<pn; i++){
        cin >> sex >> num;
        if(sex == 1){
           for(int j=num; j<=n; j+=num) ar[j] = !ar[j];
        }
        else if(sex == 2){
            left = num;
            right = num;
            while((left > 0 && right <=n) && (ar[left] == ar[right])){
                left -= 1;
                right += 1;
            }
            for(int i=left+1; i<=right-1; i++){
                ar[i] = !ar[i];
            }
        }
    }

    for(int i=1; i<=n; i++){
        cout << ar[i] << " ";
        if(i%20 == 0) cout << endl;
    }
    cout << endl;
    return 0;
}