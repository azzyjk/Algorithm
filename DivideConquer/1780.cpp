#include<iostream>
#define MAX 2187
using namespace std;

int ar[MAX][MAX];
int a, b, c;

bool check(int i, int j, int N){
	int number=ar[i][j];
	for(int a=i; a<i+N; a++){
		for(int b=j; b<j+N; b++){
			if(number!=ar[a][b]) return false;
		}
	}
	return true;
}

void divine(int i, int j, int N){
	if(check(i, j, N)==true){
		if(ar[i][j]==-1) a++;
		else if(ar[i][j]==0) b++;
		else c++;
	}
	else{
		for(int a=i; a<i+N; a+=N/3){
			for(int b=j; b<j+N; b+=N/3){
				divine(a, b, N/3);
			}
		}
	}
}

int main(){
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cin>>ar[i][j];
		}
	}
	divine(0, 0, N);
	cout<<a<<endl<<b<<endl<<c<<endl;
	return 0;
}