#include<bits/stdc++.h>
using namespace std;
int numTeams(vector<int>& rating) {
    vector<int> arr(rating.size(), 0);
    int res = 0;
    for (int i=1; i<rating.size(); i++) {
        int count = 0;
        for (int j=0; j<i; j++) {
            if (rating[j]<rating[i]) {
                count++;
                res += arr[j];
            }
            arr[i] = count;
        }
    }
    for (int i=0; i<rating.size(); i++)
        arr[i]=0;

    reverse(rating.begin(), rating.end());
    for (int i=1; i<rating.size(); i++) {
        int count = 0;
        for (int j=0; j<i; j++) {
            if (rating[j]<rating[i]) {
                count++;
                res += arr[j];
            }
            arr[i] = count;
        }
    }
    return res;
}
main ()
{
int n ;
cin>>n; 
vector<int>a;
for(int i =0;i<n;i++){
int x;
cin>>x;
a.push_back(x);
}
cout<<numTeams(a)<<endl;
}
