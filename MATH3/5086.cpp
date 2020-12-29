#include<iostream>
using namespace std;

void multi(int X, int Y, bool& output){
	for(int i=1; X>=Y*i; i++) {
		if(X==Y*i){
			output=true;	
			cout<<"multiple\n";
		} 
	}
}

void divisor(int X, int Y, bool& output){
	for(int i=1; Y>=X*i; i++){
		if(Y==X*i){
			output=true;	
			cout<<"factor\n";
		} 
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int x, y;
	bool output;
	while(cin>>x>>y){
		output=false;
		if(x==0&&y==0) break;
		else{
			multi(x, y, output);
			divisor(x, y, output);
			if(output==false) cout<<"neither\n";
		}
	}
	return 0;
}