#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std; // Use the standard namespace

void solve(){
	int n; cin>>n;

	string s1, s2;	cin>>s1>>s2;

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	
	if(s1 == s2)	cout<<"YES\n";
	else cout<<"NO\n";
}

int main(){
	
	int tstCnt; // Declare an integer variable for the number of test cases

	cin>>tstCnt; // Read the number of test cases from the input

	while(tstCnt--){ // Loop for each test case

		solve(); // Call the solve function

	}

	return 0;
}

