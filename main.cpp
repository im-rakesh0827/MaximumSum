#include "bits/stdc++.h"
using namespace std;

long long int calc_sum(long long int num){
  long long int sum=0;
  while(num>0){
    sum+=num%10;
    num/=10;
  }
  return sum;
}
int main(){
  long long int T; cin>>T;
  while(T--){

    long long int n; cin>>n;
    long long int arr[n];
    for(int i=0; i<n; i++){
		 cin>>arr[i];
		}
    vector<long long int>v, ans;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
        v.push_back(arr[i]*arr[j]);
			}
		}

    for(int i=0; i<v.size(); i++){
      ans.push_back(calc_sum(v[i]));
    }

    sort(ans.begin(), ans.end());

    cout<<ans[ans.size()-1]<<"\n";

  }
  return 0;
}