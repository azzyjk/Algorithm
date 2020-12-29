#include<iostream>
using namespace std;

int greatestFactor(int x, int y){//Euclidean algorithm
	int remine=1;
	while(remine!=0){
		remine=x%y;
		x=y;
		y=remine;
	}
	return x;
}

int leastMultiple(int x, int y){
	int i=x, j=y;
	while(i!=j){
		while(i>j) j+=y;
		if(i==j) break;
		else i+=x;
	}
	return i;
}

int main(){
	int x, y;
	cin>>x>>y;
	
	if(x<y) swap(x, y);
	cout<<greatestFactor(x, y)<<"\n"<<leastMultiple(x, y)<<"\n";
	return 0;
}