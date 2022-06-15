#include "Human.h"
int main() {
	string s = "Yes";
	cout << " Number of students: ";
	int n;
	cin >> n;
	int i = 1;
	Student* arr = new Student[n+1];
	
	
	while (i <= n) {
		cout << endl << i << "  Student: " << endl;
		Student Vasya;
		cin >> Vasya;
		cout << Vasya << endl;
		arr[i] = Vasya;
		i += 1;
	}
	
	for (int i = 1; i < n+1; ++i) {
		arr[i].print(arr[i]);
	}
	return 0;

}