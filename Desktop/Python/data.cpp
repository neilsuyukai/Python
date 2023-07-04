#include<iostream>
using namespace std;
#include<vector>
int main() {
	string film[3][4] = { {"12","topgun","200","3"},{"15","Justice","150","3"},{"18","Toystory","250","4"} };
	string member[3][4] = { {"22","Jack","1380049","4000"},{"25","Baiden","1394452","300"},{"26","Trump","155667","50000"} };
	string watch[5][4] = { {"12","22","3","0%"},{"15","22","4","20%"},{"18","26","2","0%"},{"12","26","2","0%"},{"12","25","2","0%"} };
	cout << "請輸入使用者名稱";
	string Temp;
	cin >> Temp;
	int i = 0, j = 0;
	string temp;
	for (i = 0; i < 3; i++) {
		if (member[i][1] == Temp) { temp = member[i][0]; } // temp is user ID
	}
	cout << "看過的片名" << endl;
	for (j = 0; j < 5; j++) {
		if (watch[j][1] == temp) {  // find user ID 相同的watch[j] 
			for (i = 0; i < 3; i++) {
				if (film[i][0] == watch[j][0]) {   // watch[j][0] is film ID, find film[i] 就是索要找的片
					cout << film[i][1] << endl;  // film[i][1]  就是片名  印出
				}
			}
		}
	}
	cout << "請輸入第二位使用者名稱";
	cin >> Temp;
	for (i = 0; i < 3; i++) {
		if (member[i][1] == Temp) { temp = member[i][0]; }
	}
	cout << "看過的片名:" << endl;
	for (j = 0; j < 5; j++) {
		if (watch[j][1] == temp) {
			for (i = 0; i < 3; i++) {
				if (film[i][0] == watch[j][0]) {
					cout << film[i][1] << endl;
				}
			}
		}
	}
	cout << "請輸入片名:";
	cin >> Temp;

	for (i = 0; i < 3; i++) {
		if (film[i][1] == Temp) { temp = film[i][0]; }
	}
	cout << "看過的人:" << endl;

	for (j = 0; j < 5; j++) {
		if (watch[j][0] == temp) {
			for (i = 0; i < 3; i++) {
				if (member[i][0] == watch[j][1]) {
					cout << member[i][1] << "     " << member[i][2] << endl;
				}
			}
		}
	}
}
