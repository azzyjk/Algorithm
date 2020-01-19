#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;



int find(queue<pair<int, int> > q, vector<int> v, int M){
	int count=0, now=0;
	while(1){
		if(q.front().second==v[now]) {
			if(q.front().first==M){
				q.pop();
				count++;	
				break;
			}
			else{
				q.pop();
				count++;
				now++;
			}
			
		}
		else{
			q.push(make_pair(q.front().first, q.front().second));
			q.pop();
		}
	}
	return count;
}

int main(){
	int T, N, M, num;
	
	cin>>T;
	
	for(int i=0; i<T; i++){
		queue<pair<int, int> > q;
		vector<int> v;
		cin>>N>>M;
		for(int j=0; j<N; j++){
			cin>>num;
			q.push(make_pair(j, num));
			v.push_back(num);
		}
		sort(v.begin(), v.end(), greater<int>());
		cout<<find(q, v, M)<<"\n";
	}
	return 0;
}