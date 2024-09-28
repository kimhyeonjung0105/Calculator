*#include <iostream>
using namespace std;

class Add {
private:
	int a, b;
public:
	void setValue(int , int y);
	int calculate();
};
void Add::setValue(int x, int y) {
	a=x;
	b=y;
}
int Add::calculate() {
	return a + b;
}

class Sub {
private:
	int a, b;
public:
	void setValue(int, int y);
	int calculate();
};
void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}
int Sub::calculate() {
	return a - b;
}

class Mul {
private:
	int a, b;
public:
	void setValue(int, int y);
	int calculate();
};
void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}
int Mul::calculate() {
	return a * b;
}

class Div {
private:
	int a, b;
public:
	void setValue(int, int y);
	int calculate();
};
void Div::setValue(int x, int y) {
	a = x;
	b = y;
}
int Div::calculate() {
	return a / b;
}

int main() {
	int x, y;
	char z;
	Add a;
	Sub s;
	Mul m;
	Div d;
	
	while (true) {
		cout << "두 정수와 연산자를 입력하세요 >> ";
		cin >> x >> y >> z;
		if (z =='+') {
			a.setValue(x, y);
			cout << a.calculate() << endl;
		}
		else if (z == '-') {
			s.setValue(x, y);
			cout << s.calculate() << endl;
		}
		else if (z == '*') {
			m.setValue(x, y);
			cout << m.calculate() << endl;
		}
		else if (z == '/') {
			d.setValue(x, y);
			cout << d.calculate() << endl;
		}
		else {
			cout << "연산자가 없습니다." << endl;
			break;
		}
	}
}