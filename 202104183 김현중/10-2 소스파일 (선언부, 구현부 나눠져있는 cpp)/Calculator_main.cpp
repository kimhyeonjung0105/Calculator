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
		cout << "�� ������ �����ڸ� �Է��ϼ��� >> ";
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
			cout << "�����ڰ� �����ϴ�." << endl;
			break;
		}
	}
}