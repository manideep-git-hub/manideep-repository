#include<bits/stdc++.h>
using namespace std; 
 int numTeams(vector<int>& rating){
	int teams=0;
	for(int i=0;i<rating.size();i++){
		for(int j=i+1;j<rating.size();j++){
			for(int k=j+1;k<rating.size();k++){
				if(rating[i]>rating[j] && rating[j]>rating[k] || rating[i]<rating[j] && rating[j]<rating[k]){
					teams++;
				}
			}
		}
	}
	return teams;
}
int main()
{
	int teams;
	vector<int>rating;
cin>>teams;
for(int i= 0;i<teams;i++)
{ int x; cin >>x;
   rating.push_back(x);}
	cout<<  numTeams(rating);
}
