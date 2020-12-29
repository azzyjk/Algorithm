#include<iostream>
#include<cstdio>

using namespace std;

void res(int x, int dis, int cnt, int* out){
	if((*out)==0){
		//cout<<"x: "<<x<<" distance : "<<dis<<" count : "<<cnt<<endl;
		if(x>0&&(dis-x)>=0){
			if(x==1&&dis==1){
				printf("%d\n", cnt);
				*out = true;
			}
			else{
				res(x+1, dis-x, cnt+1, out);
				res(x, dis-x, cnt+1, out);
				res(x-1, dis-x, cnt+1, out);
			}
		}
	}
}

int main(){
	int T, start, end, count=1, out;
	cin>>T;
	for(int i=0; i<T; i++){
		out = 0;
		scanf("%d %d", &start, &end);
		res(1, end-start, count, &out);
	}
	return 0;
}