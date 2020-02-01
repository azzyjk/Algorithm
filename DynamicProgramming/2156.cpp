#include<iostream>
#define MAX 10001
using namespace std;

int fr[MAX], rst[MAX];

int compare(int now){
	int a=fr[now-2], b=rst[now-2], c=fr[now-3], d=rst[now-3], max=0;
	if(a>max) max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	if(d>max) max=d;
	return max;
	
}

int findMax(int n){
	int max=0;
	for(int i=1; i<=n; i++){
		if(max<fr[i]) max=fr[i];
		if(max<rst[i]) max=rst[i];
	}
	return max;
}

int main(){
	int n, num;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>num;
		if(i==1) fr[i]=num;
		else if(i==2) {
			fr[i]=num;
			rst[i]=fr[i-1]+num;
		}
		else{
			fr[i]=compare(i)+num;
			rst[i]=fr[i-1]+num;
		}
	}
	cout<<findMax(n)<<"\n";
	return 0;
}