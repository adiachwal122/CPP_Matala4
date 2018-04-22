#include <string>
#include <stdexcept>
#include <algorithm>
#include <iostream>

#include "CircularInt.hpp"


/*CircularInt::CircularInt(int newStart, int newEnd) {
    start=newStart;
    end=newEnd;
    currentInt=newStart;
}*/

CircularInt :: CircularInt(int f, int l){
    this -> first = f;
    this -> last = l;
    this -> sum = f;
}
CircularInt::~CircularInt() {
}

ostream&  operator<<(ostream& out, const CircularInt& a){
    
}


bool CircularInt::operator >(const CircularInt & num) const {
}

bool CircularInt::operator >=(const CircularInt & num) const {
}

bool CircularInt::operator <(const CircularInt & num) const {
}

bool CircularInt::operator <=(const CircularInt & num) const {
}

CircularInt& CircularInt::operator =(int x) {
    
}

CircularInt& CircularInt::operator +=( int x) {
    
}

CircularInt& CircularInt::operator -=( int x) {

}

CircularInt& CircularInt::operator *=( int x) {
    
}

CircularInt& CircularInt::operator /=( int x) {

}

CircularInt& CircularInt::operator %=( int x) {

}



// prefix increment operator
CircularInt& CircularInt::operator++() {
}

// postfix increment operator
CircularInt& CircularInt::operator++(int) {
    
}

int CircularInt:: operator+( CircularInt& num) {
}

int CircularInt:: operator-() {
    
}

int CircularInt:: operator /( int x){

}

int operator-(int x, CircularInt& num) {
  
}
