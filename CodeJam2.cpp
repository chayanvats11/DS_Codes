#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	for(int t=1;t<=T;t++)
    {
		vector<vector<int>>vec(3,vector<int>());
		for(int i=0;i<3;i++){
			for(int j=0;j<4;j++){
				int x;
				cin>>x;
				vec[i].push_back(x);
			}
		}
		int a = INT_MAX;
		vector<int> minVec;
		for(int i = 0;i<4;i++){
			a = INT_MAX;
			a = min({a,vec[0][i],vec[1][i],vec[2][i]});
			minVec.push_back(a);
		}
		int sum = 0;
		for(int i = 0;i<minVec.size();i++){
			sum+=minVec[i];
		}
		if(sum<1000000){
			printf("Case #%d: IMPOSSIBLE",t);
            cout << endl;
		}
		else{
			int rem = 1000000;
			for(int i = 0;i<minVec.size();i++){
				int a1 = min(minVec[i],rem);
				rem-=a1;
				minVec[i]=a1;
			}
			printf("Case #%d: ",t);
			for(int i = 0;i<minVec.size();i++){
				cout<<minVec[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}