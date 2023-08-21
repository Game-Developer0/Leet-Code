#include<iostream>
#include<string>
using namespace std;
class sum {
protected:
	string l1[3] = { "3","7","6" };
	string l2[3] = { "8,3,5" };
public:
	string str1=0;
	string str2= 0;
	string reverse1[3];
	string reverse2[3];
	void reverse() {
		for (int i = 0; i < 3; i++) {
			reverse1[i] = l1[3 - i];
			str1 += reverse1[i];
		}
		for (int j = 0; j < 3; j++) {
			reverse2[j] = l2[3 - j];
			str2 += reverse2[j];

		}
	}
	int num1 = stoi(str1);
	int num2 = stoi(str2);
	void sumofinteger() {
		int result=0;
		result=num1 + num2;
		cout << result;
}
};
int main() {
	sum obj;
	obj.reverse();
	obj.sumofinteger();

}