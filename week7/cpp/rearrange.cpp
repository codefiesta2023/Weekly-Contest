#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std; // Use the standard namespace

void solve(){
		
	int n;	cin>>n;

	int a[n];	

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i+=2){
		cout<<a[i]<<" ";
	}
	for(int i=1; i<n; i+=2){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	
	int tstCnt; // Declare an integer variable for the number of test cases

	cin>>tstCnt; // Read the number of test cases from the input

	while(tstCnt--){ // Loop for each test case

		solve(); // Call the solve function

	}

	return 0;
}

