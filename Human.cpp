#include "Human.h"


istream& operator >>(istream& in, Student& p) {
	in >> p.name >> p.group >> p.age >> p.kurs;
	return in;

}


ostream& operator <<(ostream& os, const Student& p) {
	return os << "name=" << p.name << "		group= " << p.group << "	age= " << p.age << "	height= " << p.kurs;

}

void Student::print(Student arr) {
	cout << arr.name << "\t" << arr.age << "\t" << arr.group << "\t" << arr.kurs << endl;

}
