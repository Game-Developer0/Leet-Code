#include<iostream>
using namespace std;
class input {
protected:
	string enter;
public:
	void give_data() {
		cout << "Enter  a Romen number to convert it in integer" << endl;
		cin >> enter;
	}
};
class romen:public input {
	string symbol[8] = {"M","D","C","L","X","V","IV","I"};            
	int  value[8] = {1000,500,100,50,10,5,4,1};
public:
	int result = 0;
	void converting() {
		for (int i = 0; i < enter.length(); i++) {
			for (int j = 0; j < 8; j++) {
				if (enter[i] == symbol[j][0]) {
					result += value[j];

				}
			}
		}
	}
	void get_result() {
		cout << "The converted number is into integer is" << endl << result;

	}


};

int main() {
	romen obj;
	obj.give_data();
	obj.converting();
	obj.get_result();

}