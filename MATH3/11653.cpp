#include<iostream>
#include<cmath>
#define MAX 10000001
using namespace std;

int ar[MAX]={1, 1};

void set(int n){
	for(int i=0; i<=sqrt(n); i++){
		if(ar[i]==1) continue;
		for(int j=i+i; j<=n; j+=i){
			ar[j]=1;
		}
	}
}

void divine(int& n){
	int i=0;
	while(n!=1){
		if(ar[i]==1){
			i++;
			continue;
		}
		else if(n%i==0){
			cout<<i<<"\n";
			n=n/i;
		}
		else{
			i++;
		}
	}
}

int main(){
	int n;
	cin>>n;
	
	set(n);
	divine(n);
	return 0;
}