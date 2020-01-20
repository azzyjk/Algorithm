#include<iostream>
using namespace std;

char ar[50][50];

int checkB(int startX, int startY, int endX, int endY){
	int diff=0;
	for(int i=startY; i<=endY; i++){
		if((i-startY)%2==0){//start to BWBWBW
			for(int j=startX; j<=endX; j+=2) if(ar[i][j]=='W') diff++;
			for(int j=startX+1; j<=endX; j+=2) if(ar[i][j]=='B') diff++;
		}
		else{// start to WBWBWB
			for(int j=startX+1; j<=endX; j+=2) if(ar[i][j]=='W') diff++;
			for(int j=startX; j<=endX; j+=2) if(ar[i][j]=='B') diff++;
		}
	}
	return diff;
}

int checkW(int startX, int startY, int endX, int endY){
	int diff=0;
	for(int i=startY; i<=endY; i++){
		if((i-startY)%2==0){//start to BWBWBW
			for(int j=startX; j<=endX; j+=2) if(ar[i][j]=='B') diff++;
			for(int j=startX+1; j<=endX; j+=2) if(ar[i][j]=='W') diff++;
		}
		else{// start to WBWBWB
			for(int j=startX+1; j<=endX; j+=2) if(ar[i][j]=='B') diff++;
			for(int j=startX; j<=endX; j+=2) if(ar[i][j]=='W') diff++;
		}
	}
	return diff;
}

int main(){
	int N, M, diff=9999, black=0, white=0;
	cin>>N>>M;
	
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin>>ar[i][j];
		}
	}
	
	for(int i=0; i+7<N; i++){
		for(int j=0; j+7<M; j++){
			black=checkB(j, i, j+7, i+7);
			white=checkW(j, i, j+7, i+7);
			if(diff>black) diff=black;
			if(diff>white) diff=white;
		}
	}
	cout<<diff<<"\n";
	
	return 0;
}