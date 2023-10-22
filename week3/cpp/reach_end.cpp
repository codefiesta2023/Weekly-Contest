#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std; // Use the standard namespace
 
void solve(){
	long long n;	cin>>n;
 
	string s;	cin>>s;
 
	unordered_map<char, long long>	mp;
 
	for(char i : s){
		if(islower(i))	mp[i]++;
 
		else if(mp[i+32])	mp[i+32]--;
 
		else{
			cout<<"NO\n";
			return;
		}
	}
 
	cout<<"YES\n";
}
 
int main(){
	
	int tstCnt; // Declare an integer variable for the number of test cases
 
	cin>>tstCnt; // Read the number of test cases from the input
 
	while(tstCnt--){ // Loop for each test case
 
		solve(); // Call the solve function
 
	}
 
	return 0;
}
 
