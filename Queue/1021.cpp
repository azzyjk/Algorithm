#include<iostream>
#include<queue>
using namespace std;

queue<int> q;

void find(int& cnt, int num){
	int check=0;
	while(q.front()!=num){
		check++;
		q.push(q.front());
		q.pop();
	}
	if(q.size()-check<check) cnt+=q.size()-check;
	else cnt+=check;
	q.pop();
}

int main(){
	int N, M, num, count=0;
	cin>>N>>M;
	
	for(int i=1; i<=N; i++){
		q.push(i);
	}
	
	for(int i=0; i<M; i++){
		cin>>num;
		find(count, num);
	}
	
	cout<<count<<"\n";
	
	return 0;
}