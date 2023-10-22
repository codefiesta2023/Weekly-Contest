#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std; // Use the standard namespace
 
void solve(){
	int n, k;	cin>>n>>k;
 
	int arr[n], cnt = 0;
	for(int i=0; i<n; i++)	cin>>arr[i];
 
	unordered_map<int, int>	mp;
 
	for(int i=0; i<n; i++){
 
		mp[arr[i]]++;
		// cout<<mp[arr[i]]<<"\n";
		if(mp[arr[i]] == k){
			cnt++;
			cout<<i+1<<" ";
		}
	}
	if(cnt)	cout<<"\n";
	else cout<<-1<<"\n";
}
 
int main(){
	
	int tstCnt; // Declare an integer variable for the number of test cases
 
	cin>>tstCnt; // Read the number of test cases from the input
 
	while(tstCnt--){ // Loop for each test case
 
		solve(); // Call the solve function
 
	}
 
	return 0;
}
 
