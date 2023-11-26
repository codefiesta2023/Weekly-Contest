#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std; // Use the standard namespace

void solve(){
		
	int n, al = 0, b = 0;	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)	cin>>a[i];

	int i=0, j = n-1;
	for(int k=0; k<n; k++){
		if(a[i] >= a[j] && k%2){
			b += a[i];
			i++;
		}
		else if(a[i] < a[j] && k%2){
			b += a[j];
			j--;
		}

		else if(a[i] >= a[j] && k%2 == 0){
			al += a[i];
			i++;
		}
		else if(a[i] < a[j] && k%2 == 0){
			al += a[j];
			j--;
		}
	}

	if(al == b)	cout<<"Tie\n";
	else if(al > b)	cout<<"Alice\n";
	else cout<<"Bob\n";
}

int main(){
	
	int tstCnt; // Declare an integer variable for the number of test cases

	cin>>tstCnt; // Read the number of test cases from the input

	while(tstCnt--){ // Loop for each test case

		solve(); // Call the solve function

	}

	return 0;
}

