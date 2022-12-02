#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <Windows.h>
using namespace std;

// Nên đặt tên biến có ý nghĩa để người đọc dễ hiểu và thầy sẽ đáng giá cao
// Thống nhất dùng getline không dùng cin
// Dùng một ngôn ngữ thôi

const int max_menber = 10;
string list_name_teacher[max_menber] = {};
string list_id_teacher[max_menber] = {};

void OpenFile()
{
	vector<string> list_teacher;
	string file_name = "list_teacher.txt";
	ifstream file(file_name);
	string teacher;
	int index_id_name = 0;
	while (file >> teacher)
	{
		list_teacher.push_back(teacher);
	}
	// chuyển họ và tên từ nguyen chi tinh => nguyen_chi_tinh
	for (int index_teacher = 0; index_teacher < list_teacher.size(); index_teacher++)
	{
		teacher = list_teacher[index_teacher];

		for (int i = 0; i < teacher.size(); i++)
		{
			if (teacher[i] == '_')
			{
				teacher = teacher.substr(0, i) + " " + teacher.substr(i + 1, teacher.size());
			}
		}
		// phân loại id và tên
		list_id_teacher[index_id_name] = teacher.substr(0, teacher.find("-"));
		list_name_teacher[index_id_name] = teacher.substr(teacher.find("-") + 1, teacher.size());
		index_id_name++;
	}
	file.close();
}
void AddRecord()
{
	// phải dùng string để lấy chuổi không dùng char[] (cái này là mảng không lấy chuổi được)
	string name;
	string id_teacher;
	cout << "ID: ";
	getline(cin, id_teacher);
	cout << "name: ";
	getline(cin, name);
	ofstream file_teacher;
	file_teacher.open("list_teacher.txt", ios::app);
	int index_id_name = 0;
	for (index_id_name; index_id_name < max_menber; index_id_name++)
	{
		if (list_id_teacher[index_id_name] == "\0")
		{
			list_id_teacher[index_id_name] = id_teacher;
			list_name_teacher[index_id_name] = name;
			break;
		}
	}
	// chuyển đổi tên vd : nguyen chi tinh => nguyen_chi_tinh để cho việc lưu và đọc file dễ
	string name_teacher = list_name_teacher[index_id_name];
	for (int index_char = 0; index_char < name_teacher.size(); index_char++)
	{
		if (name_teacher[index_char] == ' ')
		{
			name_teacher = name_teacher.substr(0, index_char) + "_" + name_teacher.substr(index_char + 1, name_teacher.size());
		}
	}

	string data = id_teacher + '-' + name_teacher;
	// lưu thông tin dạng id-tên
	file_teacher << data << endl;
	file_teacher.close();
}
void ListRecord()
{

	int counter = 0;
	cout << "|No |      ID   |     name     |" << endl;
	cout << "|------------------------------|" << endl;
	for (int index_id_name = 0; index_id_name < max_menber; index_id_name++)
	{
		if (list_id_teacher[index_id_name] != "\0")
		{
			counter++;
			cout << " " << counter << "   " << list_id_teacher[index_id_name] << "    " << list_name_teacher[index_id_name] << endl;
		}
	}
	if (counter == 0)
	{
		cout << "No record found!" << endl;
	}
	cout << "-------------------------------" << endl;
}
void SearchRecord(string search)
{
	system("cls");
	cout << "Tên giáo viên cần tìm : " << endl;
	cout << "=========================================" << endl;
	int counter = 0;
	for (int index_id_name = 0; index_id_name < max_menber; index_id_name++)
	{
		if (list_name_teacher[index_id_name] == search)
		{
			counter++;
			cout << "   " << counter << "      " << list_id_teacher[index_id_name] << "            " << list_name_teacher[index_id_name] << endl;
			break;
		}
	}
	if (counter == 0)
	{
		cout << "Khongg co giao vien dang ki" << endl;
	}
}
void DeleteRecord(string search)
{
	int counter = 0;
	for (int index_id_name = 0; index_id_name < max_menber; index_id_name++)
	{
		if (list_id_teacher[index_id_name] == search)
		{
			counter++;
			list_id_teacher[index_id_name] = " ";
			list_name_teacher[index_id_name] = " ";

			while (list_id_teacher[index_id_name + 1] != "\0")
			{
				list_id_teacher[index_id_name] = list_id_teacher[index_id_name + 1];

				list_name_teacher[index_id_name] = list_name_teacher[index_id_name + 1];

				index_id_name++;
			}
			list_id_teacher[index_id_name] = "";

			list_name_teacher[index_id_name] = "";
			cout << "successfully deleted!" << endl;

			ofstream file_teacher;
			file_teacher.open("list_teacher.txt", ios::trunc);
			file_teacher << "";
			file_teacher.close();
			file_teacher.open("list_teacher.txt", ios::app);
			for (int index = 0; index < max_menber; index++)
			{
				string teacher = list_name_teacher[index];
				if (list_id_teacher[index] != "\0")
				{
					int len = teacher.length();
					for (int i = 0; i < len; i++)
					{
						if (teacher[i] == ' ')
						{
							teacher = teacher.substr(0, i) + "_" + teacher.substr(i + 1, len);
						}
					}
					file_teacher << list_id_teacher[index] + '-' + teacher << endl;
				}
				else
				{
					break;
				}
			}

			break;
		}
	}
	if (counter == 0)
		cout << " khong tim thay id: " << endl;
}

void Watch()
{
	vector<string> list_register;
	string str;

	// lấy file danh sách lưu vào
	ifstream file_register("tkb.txt");
	while (getline(file_register, str))
	{
		list_register.push_back(str);
	}
	for (const auto &item_register : list_register)
		cout << item_register << endl;
	file_register.close();
}

void SaveToFile()
{
	ofstream add_register;
	ifstream file_register("TKb.txt");
	string day, lesson, data, item_register;
	vector<string> list_register;
	string total_day_register;
	// lấy danh sách đăng kí
	while (getline(file_register, item_register))
	{
		list_register.push_back(item_register);
	}
	file_register.close();
	add_register.open("TKb.txt", ios::app);

	cout << "So ngay can muon dat lich:\t";
	getline(cin, total_day_register);
	for (int i = 1; i <= int(total_day_register[0]) - 48; i++)
	{
		// nếu trùng với lịch trong danh sách thì nhập lại
		while (true)
		{
			cout << "Nhap ngay, thang, nam (dd/mm/year):\t"; // ngay thang nam
			getline(cin, day);
			cout << "Nhap buoi (sang, chieu, toi)\t";
			getline(cin, lesson);
			data = day + "-" + lesson;
			bool check = false;
			for (const auto &item_register : list_register)
			{
				check = data == item_register ? true : check;
			}

			if (check)
			{
				system("cls");
				cout << "da co nguoi dang ki vui long chon ngay hoac buoi khac" << endl;
				Sleep(5000);
				system("cls");
			}
			else
			{
				break;
			}
		}
		add_register << data << endl;
	}
	add_register.close();
}

int main()
{

	// int i = 1;
	int option;
	string q, w, str_option;
	string name_teacher;
	string id_teacher;
	OpenFile();
	cout << "MENU\n";
	do
	{

		cout << "0.Them ten gv\n";
		cout << "1.Coi TKB\n";
		cout << "2.Xem danh sach giang vien dang ki\n";
		cout << "3.Tim giang vien da dang ki\n";
		cout << "4.Xem lich dang ki\n";
		cout << "5.Them lich\n";
		cout << "6.Xoa lich\n";
		cout << "7.Thoat\n";
		cout << "========================================\n";
		cout << "Chon chuc nang >> ";
		getline(cin, str_option);
		option = int(str_option[0]) - 48;

		switch (option)
		{
		case 0:

			system("cls");
			AddRecord();
			// nhấn enter đẻ vô menu
			cout << "Nhấn enter để vô menu";
			cin.get();
			break;
		case 2:
			system("cls");
			ListRecord();
			cout << "Nhấn enter để vô menu";
			cin.get();

			break;
		case 3:

			cout << "nhap ho va ten can tim kiem : ";
			getline(cin, name_teacher);
			SearchRecord(name_teacher);

			cout << "Nhấn enter để vô menu";
			cin.get();
			break;
		case 4:
			system("cls");
			Watch();
			cout << "\n";
			cout << "Nhấn enter để vô menu";
			cin.get();
			break;
		case 5:
			system("cls");
			SaveToFile();
			break;
		case 6:

			cout << "xoa bang id" << endl;
			cout << "vui long nhap id : ";
			getline(cin, id_teacher);
			DeleteRecord(id_teacher);
			system("CLS");
			break;
		default:
			goto nhan;
		}
	} while (option != 8);
nhan:
	cout << "THOAI\n";
	// system("pause");
	return 0;
}
