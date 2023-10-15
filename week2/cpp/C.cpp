#include <bits/stdc++.h>
using namespace std;

int main() {
  int plantcount = 0;
  int N;
  cin >> N;
  vector<int> arr(N);
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  if (arr.size() == 1 && arr[0] == 0)
    plantcount++;
  else if (arr.size() == 2 && (arr[0] == 0 || arr[1] == 0))
    plantcount++;
  else {
    if (arr[0] == 0) {
      plantcount++;
      arr[0] = -1;
    }
    for (int i = 1; i < N - 1; i++) {
      if (arr[i - 1] != -1 && arr[i] == 0 && arr[i + 1] != -1) {
        plantcount++;
        arr[i] = -1;
      }
    }
    if (arr[N - 2] != -1 && arr[N - 1] == 0)
      plantcount++;
  }
  cout << plantcount << endl;

  return 0;
}
