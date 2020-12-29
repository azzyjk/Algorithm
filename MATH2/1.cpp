#include<iostream>

using namespace std;

int main(){
	int N, div, num, cnt=0;
	cin>>N;
	
	for(int i=0; i<N; i++){
		div=2;
		cin>>num;
		if(num>1){
			do{
				if(num==div) {
					cnt++;
					break;
				}
				else if(num%div==0) break;
				else div++;
			}while(num>=div);
		}
	}
	cout<<cnt;
	return 0;
}