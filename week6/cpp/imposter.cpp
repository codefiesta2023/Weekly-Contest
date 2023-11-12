#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std; // Use the standard namespace
 
void solve(){
		int n; cin>>n; 
		int a[n];
		unordered_map<int, int> mp;
 
		for(int i=0; i<n; i++){
			cin>>a[i];
			mp[a[i]]++;
		}
 
		for(int i=0;i<n;i++){
			if(mp[a[i]]==1) cout<<i<<endl;
		}
}
 
int main(){
	
	int tstCnt; // Declare an integer variable for the number of test cases
 
	cin>>tstCnt; // Read the number of test cases from the input
 
	while(tstCnt--){ // Loop for each test case
 
		solve(); // Call the solve function
 
	}
 
	return 0;
}
 
