#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
	int N, num, sum=0, high=0;
	int ar[8001]={'\0',};
	vector<int> v, v2;
	cout.precision(0);
	
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>num;
		v.push_back(num);
	}
	
	sort(v.begin(), v.end());
	//sum
	for(vector<int>::size_type i = 0; i<v.size(); i++){
		sum+=v[i];
	}
	
	for(vector<int>::size_type i=0; i<v.size(); i++){
		if(v[i]>=0) {
			ar[v[i]]++;
			if(high<ar[v[i]]) high=ar[v[i]];
		}
		else {
			ar[4000-v[i]]++;
			if(high<ar[4000-v[i]]) high = ar[4000-v[i]]; 
		}
	}
	
	for(int i=0; i<8001; i++){
		if(ar[i]==high){
			if(i>4000) v2.push_back(-(i-4000));
			else v2.push_back(i);
		}
	}
	
	sort(v2.begin(), v2.end());
	
	cout<<fixed;
	cout<<(double)sum/v.size()<<endl;
	cout<<v[v.size()/2]<<endl;
	if(v2.size()==1) cout<<v2.front()<<endl;
	else cout<<v2[1]<<endl;
	cout<<v.back()-v.front()<<endl;
	
	return 0;
}