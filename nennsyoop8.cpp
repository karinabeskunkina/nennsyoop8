#include "Human.h"
int main() {
	string s = "Yes";
	cout << " Number of students: ";
	int n;
	cin >> n;
	int i = 0;
	Student* arr = new Student[n];
	
	
	while (i < n) {
		cout << endl << i + 1 << "  Student: " << endl;
		Student Vasya;
		cin >> Vasya;
		cout << Vasya << endl;
		arr[i] = Vasya;
		i += 1;
	}
	cout << endl << endl;
	for (int i = 0; i < n; ++i) {
		arr[i].print(arr[i]);
	}
	return 0;

}