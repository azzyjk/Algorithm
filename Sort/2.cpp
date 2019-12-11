#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>

using namespace std;

void print(vector<int> v){
	for(int i=0; i<v.size(); i++){
		printf("%d\n", v[i]);
	}
}

int main(){
	int N, num;
	vector<int> v;
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	print(v);
	return 0;
}
https://twpower.github.io/71-use-sort-and-stable_sort-in-cpp