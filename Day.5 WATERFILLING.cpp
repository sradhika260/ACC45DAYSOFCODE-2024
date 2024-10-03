#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
    int b1, b2, b3;
	cin >> b1 >> b2 >> b3;
	
    if (b1 + b2 + b3 <= 1) {
  cout << "Water filling time" << endl;
    }
    else {
       cout <<  "Not now" <<endl;
    }
}
 return 0;
}