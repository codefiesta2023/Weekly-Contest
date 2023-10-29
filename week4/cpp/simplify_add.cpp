#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std; // Use the standard namespace

void solve(){
	int n; cin>>n;
	string s;	cin>>s;

	string temp = "";
	for(int i=0; i<n; i+=2){

		temp += s[i];
	}
	sort(temp.begin(), temp.end());

	for(int i=0; i<n; i+=2){

		s[i] = temp[i/2];
	}

	cout<<s<<"\n";
}

int main(){
	
	int tstCnt; // Declare an integer variable for the number of test cases

	cin>>tstCnt; // Read the number of test cases from the input

	while(tstCnt--){ // Loop for each test case

		solve(); // Call the solve function

	}

	return 0;
}

