#include "minortable.h"

#include "module.h"

// Constructors/Destructors
//  

MinorTable::MinorTable ( ) {
}

MinorTable::~MinorTable ( ) { }

void MinorTable::setMinorID ( int new_var ) {
			minorID = new_var;
}

int MinorTable::getMinorID ( ) {
			return minorID;
}

void MinorTable::setModule ( Module * new_var ) {
			module = new_var;
}

Module * MinorTable::getModule ( ) {
			return module;
}

void MinorTable::setName ( string new_var ) {
			name = new_var;
}

string MinorTable::getName ( ) {
			return name;
}

void MinorTable::setShow ( bool new_var ) {
			show = new_var;
}

bool MinorTable::getShow ( ) {
			return show;
}

