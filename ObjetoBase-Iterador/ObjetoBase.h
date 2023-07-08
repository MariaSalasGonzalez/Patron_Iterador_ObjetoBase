#pragma once
#include <iostream>
#include <string>
using namespace std;

class ObjetoBase {
public:
	virtual ~ObjetoBase();
	virtual string toString() const =0; 
	//este toString no hay que desarrollarlo
};

class AdaptadorBase:public ObjetoBase {
public:
	virtual string toString()const;
};
ostream& operator<<(ostream&, const ObjetoBase&);

