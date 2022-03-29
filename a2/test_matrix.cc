#include "Matrix.h"
// Arithmetic operators are not members
Matrix operator+(const Matrix& l, const Matrix&r); // return l+r
Matrix operator-(const Matrix& l, const Matrix&r); // return l-r
Matrix operator*(const Matrix& l, const Matrix&r); // return l*r
Matrix operator*(double d, const Matrix& r); // return d*l
Matrix operator*(const Matrix& m, double d); // return l*d

template <class T>
void writeToFile(vector<T> & a, int len, int nrow, int ncol, const string data);


//overload << as nonmember
ostream& operator<<(ostream& out, const Matrix& x);

int main() {
  double i = 5.0, r;
  Matrix m1(2,3,{1,1,2,2,3,3});
  Matrix m2(3,2,{1,1,1,1,1,1});
  Matrix m3(0,0,0.0);
  m3 = m1 * m2;
  cout << m3 << endl << m2 << endl << m1;
}

Matrix operator+(const Matrix& l, const Matrix&r) {
  Matrix tmp(l);
  tmp += r;
  return tmp;
}

Matrix operator-(const Matrix& l, const Matrix&r) {
  Matrix tmp(l);
  tmp -= r;
  return tmp;
}

Matrix operator*(const Matrix& l, const Matrix&r) {
  Matrix tmp(l);
  tmp *= r;
  return tmp;
}

Matrix operator*(double d, const Matrix& r) {
  Matrix tmp(r);
  tmp *= d;
  return tmp;
}

Matrix operator*(const Matrix& m, double d) {
  Matrix tmp(m);
  tmp *= d;
  return tmp;
}

ostream& operator<<(ostream& out, const Matrix& x) {
  x.print(out);
  return out;
}
