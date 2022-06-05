
#pragma once
#ifndef Human_H

#define Human_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;



class Student{
public:
 string name = "", group = "";
 string age = "";
 string kurs = "";

};

istream& operator >>(istream& in, Student& p);
ostream& operator <<(ostream& os, const Student& p);
void Array(string** arr, int i, Student& p);
#endif