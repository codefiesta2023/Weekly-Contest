#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std; // Use the standard namespace

void solve(){
		
	int n; cin>>n;
	string s; cin>>s;

	stack<char> sk;

	for(char i : s){

		if(!sk.empty() && sk.top() == 'A' && i == 'B')	sk.pop();
		else sk.push(i);
	}

	string ans = "";
	while(!sk.empty()){

		ans += string(1, sk.top());
		sk.pop();
	}

	reverse(ans.begin(), ans.end());

	cout<<ans<<"\n";
}

int main(){
	
	int tstCnt; // Declare an integer variable for the number of test cases

	cin>>tstCnt; // Read the number of test cases from the input

	while(tstCnt--){ // Loop for each test case

		solve(); // Call the solve function

	}

	return 0;
}