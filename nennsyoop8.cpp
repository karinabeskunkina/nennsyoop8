#include "Human.h"
int main() {
	string s = "Yes";
	int n;
	cin >> n;
	int i = 1;
	string** arr = new string*[n+1];
	for (int i = 0; i < n+1; i++) {
		arr[i] = new string[4];
	}
	arr[0][0] = "Name";
	arr[0][1] = "Group";
	arr[0][2] = "Age";
	arr[0][3] = "Kurs";
	while (i <= n) {
		cout << endl << i << "  Student: " << endl;
		Student Vasya;
		cin >> Vasya;
		cout << Vasya << endl;
		Array(arr, i, Vasya);
		i += 1;
	}
	
	for (int j = 0; j < n+1; j++) {
		for (int k = 0; k < 4; k++) {
			cout << arr[j][k] << "  ";
		}
		cout << endl;
	}
	return 0;

}