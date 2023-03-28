
#include <iostream>

int main() {

	double n, m;
	std::cout << "Insert tuw numbers -> ";
	std::cin >> n >> m;
	

	double* pn = &n;
	double* pm = &m;
	double res = (*pn + *pm) / 2;
	std::cout << "Average: " << res;

	return 0;
}