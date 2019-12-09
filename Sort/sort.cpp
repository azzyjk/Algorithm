#include<iostream>
#define N 5

using namespace std;

void out(int *ar){
	for(int i=0; i<N; i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}

void change(int& a, int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void bubble(int *ar){
	int temp=0;
	for(int i=0; i<N-1; i++){
		for(int j=0; j<N-1; j++){
			if(ar[j]>ar[j+1]){
				change(ar[j], ar[j+1]);
			}
		}
	}
}

void select(int *ar){
	int max=0, pos=0, temp = 0;
	
	for(int i=0; i<N; i++){
		max=-1;
		for(int j=i; j<N; j++){
			if(ar[j]>max) {
				max = ar[j];
				pos = j;
			}
		}
		if(max!=-1){
			change(ar[i], ar[pos]);
		}
	}
}

int main(){
	int ar[5];
	
	for(int i=0; i<N; i++){
		cin>>ar[i];
	}
	
	select(ar);
	out(ar);
	return 0;
}