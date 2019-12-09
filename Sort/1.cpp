#include<iostream>

using namespace std;

void out(int *ar, int N){
	for(int i=0; i<N; i++){
		cout<<ar[i]<<endl;
	}
}

void bubble(int *ar, int N){
	int temp=0;
	for(int i=0; i<N-1; i++){
		for(int j=0; j<N-1; j++){
			if(ar[j]>ar[j+1]){
				temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;
			}
		}
	}
}

int main(){
	int N, ar[1000];
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>ar[i];
	}
	
	bubble(ar, N);
	out(ar, N);
	return 0;
}