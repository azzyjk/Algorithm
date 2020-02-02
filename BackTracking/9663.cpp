#include<iostream>
#define MAX 14
using namespace std;

int ar[MAX][MAX];
int res;
				 /*{{0, 0, 1, 0}
				 ,{1, 0, 0, 0}
				 ,{0, 0, 0, 0}
				 ,{0, 0, 0, 0}
				 };*/
int Facto(int n){
	int sum=1;
	for(int i=1; i<=n; i++){
		sum*=i;
	}
	return sum;
}

bool check(int i, int j, int N){
	//cout<<"i, j : "<<i<<", "<<j<<endl;
	for(int k=0; k<N; k++){
		//cout<<"ar[i][k] : "<<ar[i][k]<<endl;
		if(ar[i][k]==1) return false;
		else if(ar[k][j]==1) return false;
		if(i-k>=0){
			if(j-k>=0&&ar[i-k][j-k]==1) return false;
			if(j+k<N&&ar[i-k][j+k]==1) return false;
		}
		if(i+k<N){
			if(j-k>=0&&ar[i+k][j-k]==1) return false;
			if(j+k<N&&ar[i+k][j+k]==1) return false;
		}
	}
	return true;
}

void exer(int N, int cnt){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			//cout<<"level : "<<cnt<<" - "<<check(i,j,N)<<"|| i, j : "<<i<<", "<<j<<endl;
			if(ar[i][j]==1) continue;
			else if(check(i, j, N)==true) {
				if(cnt<N){
					//cout<<"level : "<<cnt<<" || [i][j] : "<<i<<", "<<j<<endl;
					ar[i][j]=1;
					exer(N, cnt+1);
					ar[i][j]=0;
				}
				else{
					//cout<<"checked i, j : "<<i<<", "<<j<<endl;
					res++;
				}		
			}
		}
	}
}

int main(){
	int N;
	cin>>N;
	
	exer(N, 1);
	cout<<res/Facto(N)<<endl;
	
	return 0;
}