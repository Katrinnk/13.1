#include <cmath>
#include "dod.h"
#include "var.h" // ��������� ������ ���������� ������
using namespace nsVar;
void nsDod::dod() {
	a *= -pow((1.0), n + 1.0) / ((2.0 * n + 1.0) * pow(x, 2.0 * n + 1.0));; // ������� ����������� ��
}