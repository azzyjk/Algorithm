#include<iostream>
#define MAX 301
using namespace std;

int fr[MAX], rstrct[MAX];

int compare(int now){
	int a=fr[now-2], b=rstrct[now-2];
	if(a>b) return a;
	else return b;
}

int main(){
	int N, num;
	cin>>N;
	
	for(int i=1; i<=N; i++){
		cin>>num;
		if(i==1) fr[i]=num;
		else if(i==2) {
			fr[i]=num;
			rstrct[i]=fr[i-1]+num;
		}
		else {
			rstrct[i]=fr[i-1]+num;
			fr[i]=compare(i)+num;
		}
	}
	if(fr[N]>rstrct[N]) cout<<fr[N]<<"\n";
	else cout<<rstrct[N]<<"\n";
	return 0;
}