#include<iostream>
#include<cmath>
#define MAX 10001
using namespace std;

int ar[MAX]={1, 1}; 

bool check(int n){
	if(ar[n]==1) return false;
	else return true;
}

void set(){
	for(int i=0; i<=sqrt(MAX); i++){
		if(ar[i]==1) continue;
		for(int j=i+i; j<=MAX; j+=i) ar[j]=1;
	}
}

int main(){
	int T, n, i;
	cin>>T;
	set();
	
	for(int j=0; j<T; j++){
		cin>>n;
		i=n/2;
		while(1){
			if(!check(i)) i--;
			else{
				if(check(n-i)){
					cout<<i<<" "<<n-i<<"\n";
					break;
				}
				else i--;
			}
		}
	}
	
	return 0;
}