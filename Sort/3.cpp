#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int N, num, ar[10001]={'\0',};
	cin>>N;

	for(int i=0; i<N; i++){
		scanf("%d", &num);
		ar[num]++;
	}

	for(int i=0; i<=10000; i++){
		if(ar[i]==0) continue;
		else {
			while(ar[i]!=0){
				printf("%d\n", i);
				ar[i]--;	
			}
		}
	}
	return 0;
}