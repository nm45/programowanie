#include <iostream>
#include <string>

using namespace std;

string ConvertFromSymbolic(string st) {
	int wynik;
	string w;
	char string1;
	char string2;
	bool kropka = false;
	for (int x = 0; x < st.length(); x++) {
		string1 = st[x];
		string2 = st[x + 1];
		if (string1 == '.') { kropka = true; }
		else if (string1 == 'M') { w = w + "00000"; }
		else if (string1 == 'B') { w = w + "00000000"; }
		else if (string1 == 'T') { w = w + "00000000000"; }
		else if (string1 == 'Q' && string2 == 'a') { w = w + "00000000000000"; }
		else if (string1 == 'Q' && string2 == 'i') { w = w + "00000000000000000"; }
		else if (string1 == 'S' && string2 == 'x') { w = w + "00000000000000000000"; }
		else if (string1 == 'S' && string2 == 'p') { w = w + "00000000000000000000000"; }
		else if (string1 == 'O' && string2 == 'c') { w = w + "00000000000000000000000000"; }
		else w = w + string1;
	}
	if (kropka == false)
		w = w + "0";
	return w;
}

int main() {

	cout << ConvertFromSymbolic("4M") << endl;
	system("pause");
	return 0;
}