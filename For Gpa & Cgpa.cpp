#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <windows.h>
#include <dos.h>
using namespace std;
int correctMarks(int marks, int creditHours);
void show();
int main()
{
	float crdtHour1[21] = {1, 1, 1, 1, 1, 1, 1, 1, 1.5, 2, 2.33, 2.67, 3, 3.33, 3.67, 4, 4, 4, 4, 4};
	float crdtHour2[41] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2.5, 3, 3.5, 4};
	crdtHour2[21] = 4.33, crdtHour2[22] = 4.67, crdtHour2[23] = 5, crdtHour2[24] = 5.33, crdtHour2[25] = 5.67, crdtHour2[26] = 6, crdtHour2[27] = 6.33, crdtHour2[28] = 6.67, crdtHour2[29] = 7, crdtHour2[30] = 7.33, crdtHour2[31] = 7.67, crdtHour2[32] = 8, crdtHour2[33] = 8, crdtHour2[34] = 8, crdtHour2[35] = 8, crdtHour2[36] = 8, crdtHour2[37] = 8, crdtHour2[38] = 8, crdtHour2[39] = 8, crdtHour2[40] = 8;
	float crdtHour3[61] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	crdtHour3[24] = 3, crdtHour3[25] = 3.5, crdtHour3[26] = 4, crdtHour3[27] = 4.5, crdtHour3[28] = 5, crdtHour3[29] = 5.5, crdtHour3[30] = 6, crdtHour3[31] = 6.33, crdtHour3[32] = 6.67, crdtHour3[33] = 7, crdtHour3[34] = 7.33, crdtHour3[35] = 7.67, crdtHour3[36] = 8, crdtHour3[37] = 8.33, crdtHour3[38] = 8.67, crdtHour3[39] = 9, crdtHour3[40] = 9.33, crdtHour3[41] = 9.67, crdtHour3[42] = 10, crdtHour3[43] = 10.33, crdtHour3[44] = 10.67, crdtHour3[45] = 11, crdtHour3[46] = 11.33, crdtHour3[47] = 11.67, crdtHour3[48] = 12, crdtHour3[49] = 12, crdtHour3[50] = 12, crdtHour3[51] = 12, crdtHour3[52] = 12, crdtHour3[53] = 12, crdtHour3[54] = 12, crdtHour3[55] = 12, crdtHour3[56] = 12, crdtHour3[57] = 12, crdtHour3[58] = 12, crdtHour3[59] = 12, crdtHour3[60] = 12;
	float crdtHour4[81] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
	crdtHour4[32] = 4, crdtHour4[33] = 4.5, crdtHour4[34] = 5, crdtHour4[35] = 5.5, crdtHour4[36] = 6, crdtHour4[37] = 6.5, crdtHour4[38] = 7, crdtHour4[39] = 7.5, crdtHour4[40] = 8, crdtHour4[41] = 8.33, crdtHour4[42] = 8.67, crdtHour4[43] = 9, crdtHour4[44] = 9.33, crdtHour4[45] = 9.67, crdtHour4[46] = 10, crdtHour4[47] = 10.33, crdtHour4[48] = 10.67, crdtHour4[49] = 11, crdtHour4[50] = 11.33, crdtHour4[51] = 11.67, crdtHour4[52] = 12, crdtHour4[53] = 12.33, crdtHour4[54] = 12.67, crdtHour4[55] = 13, crdtHour4[56] = 13.33, crdtHour4[57] = 13.67, crdtHour4[58] = 14, crdtHour4[59] = 14.33, crdtHour4[60] = 14.67, crdtHour4[61] = 15, crdtHour4[62] = 15.33, crdtHour4[63] = 15.67, crdtHour4[64] = 16, crdtHour4[65] = 16, crdtHour4[66] = 16, crdtHour4[67] = 16, crdtHour4[68] = 16, crdtHour4[69] = 16, crdtHour4[70] = 16, crdtHour4[71] = 16, crdtHour4[72] = 16, crdtHour4[73] = 16, crdtHour4[74] = 16, crdtHour4[75] = 16, crdtHour4[76] = 16, crdtHour4[77] = 16, crdtHour4[78] = 16, crdtHour4[79] = 16, crdtHour4[80] = 16;	
	float crdtHour5[101] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	crdtHour5[40] = 5, crdtHour5[41] = 5.5, crdtHour5[42] = 6, crdtHour5[43] = 6.5, crdtHour5[44] = 7, crdtHour5[45] = 7.5, crdtHour5[46] = 8, crdtHour5[47] = 8.5, crdtHour5[48] = 9, crdtHour5[49] = 9.5, crdtHour5[50] = 10, crdtHour5[51] = 10.33, crdtHour5[52] = 10.67, crdtHour5[53] = 11, crdtHour5[54] = 11.33, crdtHour5[55] = 11.67, crdtHour5[56] = 12, crdtHour5[57] = 12.33, crdtHour5[58] = 12.67, crdtHour5[59] = 13, crdtHour5[60] = 13.33, crdtHour5[61] = 13.67, crdtHour5[62] = 14, crdtHour5[63] = 14.33, crdtHour5[64] = 14.67, crdtHour5[65] = 15, crdtHour5[66] = 15.33, crdtHour5[67] = 15.67, crdtHour5[68] = 16, crdtHour5[69] = 16.33, crdtHour5[70] = 16.67, crdtHour5[71] = 17, crdtHour5[72] = 17.33, crdtHour5[73] = 17.67, crdtHour5[74] = 18, crdtHour5[75] = 18.33, crdtHour5[76] = 18.67, crdtHour5[77] = 19, crdtHour5[78] = 19.33, crdtHour5[79] = 19.67, crdtHour5[80] = 20, crdtHour5[81] = 20, crdtHour5[82] = 20, crdtHour5[83] = 20, crdtHour5[84] = 20, crdtHour5[85] = 20, crdtHour5[86] = 20, crdtHour5[87] = 20, crdtHour5[88] = 20, crdtHour5[89] = 20, crdtHour5[90] = 20, crdtHour5[91] = 20, crdtHour5[92] = 20, crdtHour5[93] = 20, crdtHour5[94] = 20, crdtHour5[95] = 20, crdtHour5[96] = 20, crdtHour5[97] = 20, crdtHour5[98] = 20, crdtHour5[99] = 20, crdtHour5[100] = 20;   
	float n1, result;
	int subjects, marks, creditHours, markA;
	string gpaorCgpa;
	float mark[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	float creditHour[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	float gpa[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	int n;
	char yN;
	int smesters;
	bool rightGpa;
	bool rightMarks = correctMarks(marks, creditHours);
	//bool rightSubjects = correctSubjects(checkSubjects);
	show();
	do{
	cout << "-You want to calculate (gpa/cgpa) ? : ";
	cin >> gpaorCgpa;
	system("cls");
	if(gpaorCgpa.compare("gpa") == 0 || gpaorCgpa.compare("GPA") == 0 || gpaorCgpa.compare("Gpa") == 0){
		cout << endl << "-Enter the number of subjects you want to calculate GPA for : ";
		cin >> subjects;
		cout << endl;
		if(subjects >= 11){
			cout << "-Sorry you entered wrong number of subjects, try again .";
		}
		for(int i = 1; i <= subjects; i++){
			cout << "- Enetr the Marks for subject " << i << "        :- ";
			cin >> mark[i];
			cout << "- Enetr the Credit Hours for subject " << i << " :- ";
			cin >> creditHour[i];
			marks =  mark[i];
			creditHours = creditHour[i];
			if(rightMarks){
				mark[i] = correctMarks(marks, creditHours);
				creditHour[i] = creditHours;
			}else{
				mark[i] = marks;
				creditHour[i] = creditHours;
			}
			markA = mark[i];
			if(creditHour[i] == 1){
			n1 = crdtHour1[markA];
			}else if(creditHour[i] == 2){
			n1 = crdtHour2[markA];
			}else if(creditHour[i] == 3){
			n1 = crdtHour3[markA];
			}else if(creditHour[i] == 4){
			n1 = crdtHour4[markA];
			}else if(creditHour[i] == 5){
			n1 = crdtHour5[markA];
			}
			mark[i] = n1;
			cout << endl;
			}
		cout << endl;
		result = (mark[1]+mark[2]+mark[3]+mark[4]+mark[5]+mark[6]+mark[7]+mark[8]+mark[9]+mark[10])/(creditHour[1]+creditHour[2]+creditHour[3]+creditHour[4]+creditHour[5]+creditHour[6]+creditHour[7]+creditHour[8]+creditHour[9]+creditHour[10]);
		cout << result << "  is your total GPA .";
	}else if(gpaorCgpa.compare("cgpa") == 0 || gpaorCgpa.compare("Cgpa") == 0 || gpaorCgpa.compare("CGPA") == 0){
		cout << endl << "-Enter the total number of smesters you want to calculate CGPA for : ";
		cin >> smesters;
		cout << endl;
		if(smesters >= 9){
			cout << "-Sorry you entered wrong no of smesters, try again .";
		}
		for(int j = 1; j <= smesters; j++){
			cout << "- Enter the GPA of smester " << j << " :- ";
			cin >> gpa[j];
			if(gpa[j] > 4){
				rightGpa = true;
				cout << endl;
				cout << "GPA can not be more than 4 .";
				Sleep(1000);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "-  Enter correct GPA : ";
				cin >> gpa[j];
				if(gpa[j] > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			    Sleep(1000);
			}
			n= j;
		}
		cout << endl;
		result = (gpa[1]+gpa[2]+gpa[3]+gpa[4]+gpa[5]+gpa[6]+gpa[7]+gpa[8])/(n);
		cout << result << " is your cjpa for " << smesters << " smesters .";
	}else{
	cout << "-You entered some invalid input which we can not detect , try calculating from start ." << endl;
	Sleep(1000);
	cout << "--Thanks ! ";
	}
	Sleep(5000);system("cls");
	cout << "Do you want to calculate again gpa/cgpa ? (Y/N) ? : ";
	cin >> yN;system("cls");
	}while(tolower(yN) == 'y');
	system("pause");	
}

int correctMarks(int marks, int creditHours){
	int newMarks;
	newMarks = marks;
	if(creditHours == 1 && newMarks >= 21){
		Sleep(1000);
		cout << "Your marks are not according to your given credit hours." << endl;
		while(newMarks >= 21){
			Sleep(1000);
			cout  << endl << "Enter correct marks : ";
			cin >> newMarks;
		}
		marks = newMarks;
	}else if(creditHours == 2 && newMarks >= 41){
		Sleep(1000);
		cout << "Your marks are not according to your given credit hours." << endl;
		while(newMarks >= 41){
			Sleep(1000);
			cout << endl << "Enter correct marks : ";
			cin >> newMarks;
		}
		marks = newMarks;
	}else if(creditHours == 3 && newMarks >= 61){
		Sleep(1000);
		cout << "Your marks are not according to your given credit hours." << endl;
		while(newMarks >= 61){
			Sleep(1000);
			cout << endl << "Enter correct marks : ";
			cin >> newMarks;
		}
		marks = newMarks;
	}else if(creditHours == 4 && newMarks >= 81){
		Sleep(1000);
		cout << endl << "Your marks are not according to your given credit hours." << endl;
		while(newMarks >= 81){
			Sleep(1000);
			cout << "Enter correct marks : ";
			cin >> newMarks;
		}
		marks = newMarks;
	}else if(creditHours == 5 && newMarks >= 101){
		Sleep(1000);
		cout << endl << "Your marks are not according to your given credit hours." << endl;
		while(newMarks >= 101){
			Sleep(1000);
			cout << "Enter correct marks : ";
			cin >> newMarks;
		}
		marks = newMarks;
	return marks;
}
}
void show(){
	Sleep(1000);Beep (3000, 300);cout << endl << endl << "                                        University of Agriculture Faisalabad"; Sleep(1502); Beep (3000, 300);
	cout << endl << "                                                GPA & CGPA calculator." << endl << endl; Sleep(1502);
	cout << "I"; Sleep(1); Beep (10, 100); cout << "m"; Sleep(1); Beep (10, 100); cout << "p"; Sleep(1); Beep (10, 100);
	cout << "o"; Sleep(1); Beep (10, 100); cout << "r"; Sleep(1); Beep (10, 100); cout << "t"; Sleep(1); Beep (10, 100);
	cout << "a"; Sleep(1); Beep (10, 100); cout << "n"; Sleep(1); Beep (10, 100); cout << "t"; Sleep(1); Beep (10, 100);
	cout << " "; Sleep(1); Beep (10, 100); cout << "I"; Sleep(1); Beep (10, 100); cout << "n"; Sleep(1); Beep (10, 100);
	cout << "s"; Sleep(1); Beep (10, 100); cout << "t"; Sleep(1); Beep (10, 100); 
	cout << "r"; Sleep(1); Beep (10, 100); cout << "u"; Sleep(1); Beep (10, 100); cout << "c"; Sleep(1); Beep (10, 100);
	cout << "t"; Sleep(1); Beep (10, 100); cout << "i"; Sleep(1); Beep (10, 100); cout << "o"; Sleep(1); Beep (10, 100);
	cout << "n"; Sleep(1); Beep (10, 100); cout << " :"; Sleep(1); Beep (10, 100); cout << " T"; Sleep(1); Beep (10, 100);
	cout << "h"; Sleep(1); Beep (10, 100); cout << "i"; Sleep(1); Beep (10, 100); cout << "s"; Sleep(1); Beep (10, 100);
	cout << " C"; Sleep(1); Beep (10, 100); cout << "a"; Sleep(1); Beep (10, 100); cout << "l"; Sleep(1); Beep (10, 100);
	cout << "c"; Sleep(1); Beep (10, 100); cout << "u"; Sleep(1); Beep (10, 100); cout << "l"; Sleep(1); Beep (10, 100); 
	cout << "a"; Sleep(1); Beep (10, 100); cout << "t"; Sleep(1); Beep (10, 100); cout << "o"; Sleep(1); Beep (10, 100);
	cout << "r"; Sleep(1); Beep (10, 100); cout << " i"; Sleep(1); Beep (10, 100); cout << "s"; Sleep(1); Beep (10, 100);
	cout << " o"; Sleep(1); Beep (10, 100); cout << "n"; Sleep(1); Beep (10, 100); cout << "l"; Sleep(1); Beep (10, 100); 
	cout << "y"; Sleep(1); Beep (10, 100); cout << " f"; Sleep(1); Beep (10, 100); cout << "o"; Sleep(1); Beep (10, 100);
	cout << "r"; Sleep(1); Beep (10, 100); cout << " U"; Sleep(1); Beep (10, 100); cout << "A"; Sleep(1); Beep (10, 100);
	cout << "F"; Sleep(1); Beep (10, 100); cout << " s"; Sleep(1); Beep (10, 100); cout << "t"; Sleep(1); Beep (10, 100);
	cout << "u"; Sleep(1); Beep (10, 100); cout << "d"; Sleep(1); Beep (10, 100); cout << "e"; Sleep(1); Beep (10, 100);
	cout << "n"; Sleep(1); Beep (10, 100); cout << "t"; Sleep(1); Beep (10, 100); cout << "s"; Sleep(1); Beep (10, 100);
	cout << " ."; Sleep(1000); Beep (10, 100); cout << endl << endl << "---BEST OF LUCK !!!!!!" << endl << endl; Sleep(500); Beep (10, 100); Sleep(1000); system("cls");
	cout << endl << "1. If you want to calculate GPA write gpa ." << endl;
	Sleep(1000);
	cout << "2. If you want to calculate CGPA write cgpa ." << endl << endl;
	Sleep(1000);
}
