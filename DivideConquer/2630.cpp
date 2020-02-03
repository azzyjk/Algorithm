#include<iostream>
#define MAX 128
using namespace std;
bool check(int i, int j, int N);

int ar[MAX][MAX];
int black, white;

void divide(int i, int j, int N){
	if(check(i, j, N)==false){
		for(int a=i; a<i+N; a+=N/2){
			for(int b=j; b<j+N; b+=N/2){
				divide(a, b, N/2);
			}
		}
	}
	else{
		if(ar[i][j]==1) black+=1;
		else white+=1;
	}
}

bool check(int i, int j, int N){
	int number;
	if(N==1) return true;
	for(int a=i; a<i+N; a++){
		for(int b=j; b<j+N; b++){
			if(a==i&&b==j) number = ar[a][b];
			if(number!=ar[a][b]) return false;
		}
	}
	return true;
}

int main(){
	int N;
	cin>>N;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cin>>ar[i][j];
		}
	}
	divide(0, 0, N);
	cout<<white<<"\n"<<black<<endl;
	return 0;
}