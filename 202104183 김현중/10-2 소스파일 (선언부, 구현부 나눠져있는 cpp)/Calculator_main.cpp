#include <iostream>
using namespace std;

#include "Calculate.h"

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
		if (z == '+') {
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