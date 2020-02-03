#include<iostream>
#define MAX 64
using namespace std;

int ar[MAX][MAX];

bool check(int i, int j, int N){
	int number=ar[i][j];
	for(int a=i; a<i+N; a++){
		for(int b=j; b<j+N; b++){
			if(number!=ar[a][b]) return false;
		}
	}
	return true;
}

void divide(int i, int j, int N){
	if(check(i, j, N)==true){
		cout<<ar[i][j];
	}
	else{
		cout<<"(";
		for(int a=i; a<i+N; a+=N/2){
			for(int b=j; b<j+N; b+=N/2){
				divide(a, b, N/2);
			}
		}
		cout<<")";
	}
}

void Input(int i, string str, int N){
	for(int j=0; j<N; j++){
		ar[i][j]=str[j]-'0';
	}
}


int main(){
	int N;
	string str;
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>str;
		Input(i, str, N);
	}
	
	divide(0, 0, N);
	
	return 0;
}