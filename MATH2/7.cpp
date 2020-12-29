#include<iostream>
using namespace std;

int main(){
	int ar[6]={'\0',};
	
	for(int i=0; i<6; i++){
			cin>>ar[i];
	}
	
	for(int i=0; i<6; i+=2){
		for(int j=i+2; j<6; j+=2){
			if(ar[i]==ar[j]){
				ar[i]=0;
				ar[j]=0;
			}
		}
	}
	
	for(int i=1; i<6; i+=2){
		for(int j=i+2; j<6; j+=2){
			if(ar[i]==ar[j]){
				ar[i]=0;
				ar[j]=0;
			}
		}
	}
	
	for(int i=0; i<6; i+=2){
		if(ar[i]==0) continue;
		cout<<ar[i]<<" ";
	}
	for(int i=1; i<6; i+=2){
		if(ar[i]==0) continue;
		cout<<ar[i];
	}
	return 0;
}