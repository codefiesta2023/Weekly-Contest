#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std; // Use the standard namespace

void solve(){
		
	long long n, k; cin>>n>>k;

	int s = 0;
	while(n){
		
		if(n&1)	s++;
		n = n>>1;
	}

	if(s >= k)	cout<<(s - k)<<"\n";
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