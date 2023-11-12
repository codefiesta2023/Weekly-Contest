#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std; // Use the standard namespace
 
void solve(){
		int a[3];
		for(int i=0; i<3; i++)	cin>>a[i];
 
		sort(a, a+3);
 
		if(a[1] == a[0] || a[1] == a[2])	cout<<-1<<"\n";
		else cout<<a[1]<<"\n";
		
}
 
int main(){
	
	int tstCnt; // Declare an integer variable for the number of test cases
 
	cin>>tstCnt; // Read the number of test cases from the input
 
	while(tstCnt--){ // Loop for each test case
 
		solve(); // Call the solve function
 
	}
 
	return 0;
}
 
