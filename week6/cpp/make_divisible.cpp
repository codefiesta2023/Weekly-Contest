#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std; // Use the standard namespace
 
void solve(){
	
	int a, b;	cin>>a>>b;
	if(b){
		cout<<((b-a%b)%b)<<"\n";
	}else cout<<-1<<"\n";
}
 
int main(){
	
	int tstCnt; // Declare an integer variable for the number of test cases
 
	cin>>tstCnt; // Read the number of test cases from the input
 
	while(tstCnt--){ // Loop for each test case
 
		solve(); // Call the solve function
 
	}
 
	return 0;
}
 
