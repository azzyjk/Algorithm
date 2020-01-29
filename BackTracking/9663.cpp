#include<iostream>
#define MAX 14
using namespace std;
void Print(int ar[][MAX]);

int N, res=0;

void copy(int ar[][MAX], int cp[][MAX]){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cp[i][j]=ar[i][j];
		}
	}
}

void check(int x, int y, int cnt, int ar[][MAX]){
	int cp[MAX][MAX]={'\0', };
	copy(ar, cp);
	if(cnt<4){
		for(int i=0; i<N; i++){
			cp[y][i]=1;
			cp[i][x]=1;
			if(x+i<N){
				if(y-i>=0) cp[y-i][x+i]=1;
				if(y+i<N) cp[y+i][x+i]=1;
			}
			if(x-i>=0){
				if(y-i>=0) cp[y-i][x-i]=1;
				if(y+i<N) cp[y+i][x-i]=1;
			}
		}
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(cp[i][j]==1) continue;
				else{
					check(j, i, cnt+=1, cp);
				}
			}
		}
	}
	else{
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(cp[i][j]==1) continue;
				else {
					cout<<"i, j : "<<i<<", "<<j<<"\n";
					Print(cp);
					res++;
				}
			}
		}
	}
}

void Print(int ar[][MAX]){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	cin>>N;
	int ar[MAX][MAX]={'\0', };
	check(0, 0, 1, ar);
	Print(ar);
	
	cout<<res<<"\n";
	return 0;
}