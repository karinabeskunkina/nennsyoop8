#include "Human.h"


istream& operator >>(istream& in, Student& p) {
	in >> p.name >> p.group >> p.age >> p.kurs;
	return in;

}


ostream& operator <<(ostream& os, const Student& p) {
	return os << "name=" << p.name << "\tgroup= " << p.group << "\tage= " << p.age << "\theight= " << p.kurs;

}
void Array(string** arr, int i, Student& p) {

	arr[i][0] = p.name;
	arr[i][1] = p.group;
	arr[i][2] = p.age;
	arr[i][3] = p.kurs;

 }
