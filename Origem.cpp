#include <iostream>

using namespace std;

void mexedisco(int d, char origem, char destino, char aux) {
	if (d == 1) {
		cout << "disco " << d << " de " << origem << " para " << destino<<endl;
		
	}
	else {
		mexedisco(d - 1,origem ,aux ,destino ); 
		cout << " disco " << d << " de " << origem << " para " << destino<<endl;
		mexedisco(d - 1, aux, destino, origem);
	}

	
}

int main() {

	int discos;

	cout << "digite a quantidade de discos:";
	cin >> discos;
	cout << endl;
	mexedisco(discos, 'A', 'C', 'B');



	return 0;
} 