#include<iostream>
#define R 0
#define G 1
#define B 2
using namespace std;

void addR(int* ar, int& r){
	if(ar[G]<ar[B]) r+=ar[G];
	else r+=ar[B];
}

void addG(int* ar, int& g){
	if(ar[R]<ar[B]) g+=ar[R];
	else g+=ar[B];
}

void addB(int* ar, int& b){
	if(ar[R]<ar[G]) b+=ar[R];
	else b+=ar[G];
}

int main(){
	int N, ar[3], r, g, b;
	
	cin>>N;
	for(int i=0; i<N; i++){
		if(i==0) cin>>ar[0]>>ar[1]>>ar[2];
		else{
			cin>>r>>g>>b;
			addR(ar, r);
			addG(ar, g);
			addB(ar, b);
			ar[R]=r;
			ar[G]=g;
			ar[B]=b;
		}
	}
	if(ar[R]<=ar[B]&&ar[R]<=ar[G]) cout<<ar[R]<<"\n";
	else if(ar[B]<=ar[R]&&ar[B]<=ar[G]) cout<<ar[B]<<"\n";
	else cout<<ar[G]<<"\n";
	return 0;
}