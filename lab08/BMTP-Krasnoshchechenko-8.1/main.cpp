#include <locale.h>
#include <math.h>
#include <iostream>
#include "sum.h"
int main ( ){
float x, y, z;
setlocale(LC_ALL, "ukr");
std::cout << "������ x, y, z: ";
std::cin >> x >> y >> z;
std::cout << "��������� = " << s_calculation (x, y, z);
return 0;
}
