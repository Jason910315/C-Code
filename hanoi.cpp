#include <iostream>
#include <vector>
void hanoiTower(int n, char* from, char* to, char* aux) {
	if (n == 1) {
		printf ("Move disk %d from %s to %s\n", n, from, to);
	}
	else {
		hanoiTower(n - 1, from, aux, to);
		printf ("Move disk %d from %s to %s\n", n - 1, from, to);
		hanoiTower(n - 1, aux, to, from);
	}
}
int main() {
	int number;
	std::cout << "Please enter the number of hanoi:";
	std::cin >> number;
	char A[] = "A";
	char B[] = "B";
	char C[] = "C";
	hanoiTower(number, A, B, C);

}


