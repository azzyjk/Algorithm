#include<iostream>

using namespace std;

void find(int a, int b, int& sum, int& min){
	int div=2;
	for(int i=a; i<=b; i++){
		div=2;
		if(i>1){
			while(i>=div){
				if(i==div) {
					sum+=i;
					if(min>i) min=i;
				}
				else if((i%div)==0) break;
				div++;
			}
		}
	}
}

int main(){
	int M, N, sum=0, min=10001;
	cin>>M>>N;
	
	find(M, N, sum, min);
	if(sum==0&&min==10001) cout<<"-1";
	else cout<<sum<<"\n"<<min;
	return 0;
}