#include<iostream>
#include<cmath>
#define MAX 246912
using namespace std;

void sort(int* ar){
	for(int i=0; i<sqrt(MAX); i++){
		if(ar[i]==1) continue;
		for(int j=i+i; j<=MAX; j+=i){
			ar[j]=1;
		}
	}
}

void find(int* ar, int num, int& count){
	for(int i=num+1; i<=(num*2); i++){
		if(ar[i]==0) count++;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int num, count, ar[MAX+1]={1,1};
	sort(ar);
	
	while(1){
		cin>>num;
		if(num==0) break;
		else{
			count=0;
			find(ar, num, count);
			cout<<count<<"\n";
		}
	}
	
	return 0;
}