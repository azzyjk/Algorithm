#include<iostream>
#include<queue>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int N, K, i=1;
	queue<int> q;
	cin>>N>>K;
	
	for(int i=1; i<=N; i++){
		q.push(i);
	}
	cout<<"<";
	while(!q.empty()){
		if(i%K==0) {
			if(i!=K) cout<<", ";
			cout<<q.front();
			q.pop();
			
		}
		else{
			q.push(q.front());
			q.pop();
		}
		i++;
	}
	cout<<">\n";
	return 0;
}