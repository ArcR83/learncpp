#include <iostream>

int main() {
int n, i;

	std::cout << "Digite um num. primo: ";
	std::cin >> n;
		std::cout << "\n";

	if(n <= 1) {
		std::cout << "É primo." << std::endl;
	} else {
		for(i=2; i < n; i++) {
			if(n%i==0) {
				std::cout << "Não é primo." << std::endl;
			break;
			}
		}
		if(n==i)
			std::cout << "É primo." << std::endl;
	}
return 0;
}
// g++ prim.cpp -o prim && ./prim
