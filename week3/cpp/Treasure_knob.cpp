#include<bits/stdc++.h>
using namespace std;
 
int main(){
	string n; cin >> n;
	unordered_map<char,int> m;
	for (auto i:n) m[i]++;
	bool flag=false;
	for (auto [i,v]:m){
		if (v%2==1)
		{   
		    if(flag){
						cout << "5"; return 0;
					}
			flag=true;
		}
	}
	cout << "3"; return 0;
}

