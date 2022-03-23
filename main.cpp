#include "classroom.cpp"
#include "student.cpp"

bool exit_pro = false;
classroom a;
void setup()
{
	cin >> a;
}
void Input()
{
	cout << "Nhap lai tong so sinh vien: ";
	cin >> a.total;
	a.students = new student[a.total];
	cin >> a;
}
void Menu()
{
	cout << "Menu: " << endl;
	cout << "0. Nhap lai danh sach sinh vien." << endl;
	cout << "1. In ra danh sach sinh vien." << endl;
	cout << "2. Liet ke nhung sinh vien co diem trung binh cao nhat." << endl;
	cout << "3. Cho biet so sinh vien co diem trung binh >= 5." << endl;
	cout << "4. Tim sinh vien theo ten." << endl;
	cout << "5. Tim sinh vien theo ma." << endl;
	cout << "X. Thoat chuong trinh." << endl;
	cout << "My action: ";
	char action;
	cin >> action;
	system("cls");
	switch (action)
	{
	case '0':
		Input();
		break;
	case '1':
		cout << a;
		break;
	case '2':
		a.find_max_average_p();
		break;
	case '3':
		a.CountAverage();
		break;
	case '4':
		a.find_by_name();
		break;
	case '5':
		a.find_by_id();
		break;
	case 'x':
		exit_pro = true;
		break;
	}
}


int main() 
{
	setup();
	while (exit_pro==false) 
		Menu();
	system("pause");
}