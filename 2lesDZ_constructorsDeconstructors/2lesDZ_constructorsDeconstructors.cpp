#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

//struct Date {
//	int day;
//	int month;
//	int year;
//	void printDate() {
//		cout << "birthdate: " << day << "/" << month << "/" << year << endl;
//	}
//};
//
//class Student{
//	string name;
//	string surname;
//	string middleName;
//
//	Date birthdate;
//
//	string phoneNum;
//
//	int *marks;
//	int countMarks;
//
//	float averageMark;
//
//	void averageMarks() {
//		double suma = 0;
//		for (int i = 0; i < countMarks; i++)
//		{
//			suma += marks[i];
//		}
//		averageMark = suma / countMarks;
//	}
//
//public:
//
//	Student()
//	{
//		name = "no name";
//		surname = "no surname";
//		middleName = "no middlename";
//		
//	}
//	Student(string name,string surname,string middleName)
//	{
//		//cout << "parametrized constructor" << endl;
//		this->name = name;
//		this->surname = surname;
//		this->middleName = middleName;
//		birthdate = { 1,1,1 };
//		phoneNum = "no phonenum";
//		marks = nullptr;
//		countMarks = 0;
//		averageMark = 0;
//	}
//	void print() {
//		cout << "name: " << name << endl;
//		cout << "surname: " << surname << endl;
//		cout << "middlename: " << middleName << endl;
//		birthdate.printDate();
//		cout << "phoneNum: " << phoneNum << endl;
//		cout << "marks: ";
//
//		for (int i = 0; i < countMarks; i++)
//		{
//			cout << marks[i] << " ";
//		}
//			cout << "\nAverage mark: " << averageMark << endl;
//	}
//
//	void setName(string name) {
//		this->name = name;
//	}
//	void setSurname(string surname) {
//		this->surname=surname;
//	}
//
//	void addMark(int mark) {
//		int* temp = new int[countMarks + 1];
//		for (int i = 0; i < countMarks; i++)
//		{
//			temp[i] = marks[i];
//		}
//		temp[countMarks] = mark;
//		
//		marks = temp;
//		countMarks++;
//		averageMarks();
//	}
//	~Student()
//	{
//		cout << "destructor " <<name<< endl;
//		if (marks != nullptr)
//		{
//			delete[]marks;
//		}
//	}
//};



//1


//struct Coord {
//	int x;
//	int y;
//	Coord()
//	{
//		x = 0;
//		y = 0;
//	}
//	Coord(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//	void printCoord() {
//		cout << "x=" << x << "|y=" << y << endl;
//	}
//};
//
//
//class Rectangl {
//	int width;
//	int height;
//	char symbol;
//	Coord coord;
//public:
//	Rectangl()
//	{
//		width = 1;
//		height = 1;
//		symbol = '*';
//		coord.x = 0;
//		coord.y = 0;
//	}
//	Rectangl(int width, int height, char symbol)
//	{
//		if (width<=0 or height<=0)
//		{
//			this->width = 1;
//			this->height = 1;
//		}
//		else
//		{
//			this->width = width;
//			this->height = height;
//		}
//		
//		this->symbol = symbol;
//		coord.x = 0;
//		coord.y = 0;
//	}
//	Rectangl(int width, int height)
//	{
//		if (width <= 0 or height <= 0)
//		{
//			this->width = 1;
//			this->height = 1;
//		}
//		else
//		{
//			this->width = width;
//			this->height = height;
//		}
//
//		symbol = '*';
//		coord.x = 0;
//		coord.y = 0;
//	}
//	Rectangl(int size)
//	{
//		if (size<=0)
//		{
//			this->width = 1;
//			this->height = 1;
//		}
//		else
//		{
//			this->width = size;
//			this->height = size;
//		}
//		coord.x = 0;
//		coord.y = 0;
//		symbol = '*';
//
//	}
//
//	void printRectangle() {
//		for (int i = 0; i < height; i++)
//		{
//			setPos(coord.x, coord.y + i);
//			for (int j = 0; j < width; j++)
//			{
//				cout << symbol << " ";
//			}
//		}
//	}
//	void setNewSize(int height, int width) {
//		if (height<=0 or width<=0)
//		{
//			cout << "incorrect size" << endl;
//			return;
//		}
//		this->height = height;
//		this->width = width;
//	}
//
//	void setPos(int x, int y)
//	{
//		COORD c;
//		c.X = x;
//		c.Y = y;
//		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
//	}
//
//	void setSizeXY(int x, int y) {
//		if (x<0 or y<0)
//		{
//			cout << "wrong coordinates" << endl;
//			return;
//		}
//		coord.x = x;
//		coord.y= y;
//	}
//
//	void move(int x, int y) {
//		if (coord.x+x<0 or coord.y+y<0)
//		{
//			cout << "wrong coordinates" << endl;
//			return;
//		}
//		coord.x += x;
//		coord.y += y;
//	}
//
//
//};

//2


class Student{
	string name;

	int age;

	int *marks;
	int countMarks;

	float averageMark;

	void averageMarks() {
		double suma = 0;
		for (int i = 0; i < countMarks; i++)
		{
			suma += marks[i];
		}
		averageMark = suma / countMarks;
	}

public:

	Student()
	{
		name = "no name";
		marks = 0;
		countMarks = 0;
		averageMark = 0;
		
	}
	Student(string name, int age)
	{
		//cout << "parametrized constructor" << endl;
		this->name = name;
		this->age = age;
		
		marks = nullptr;
		countMarks = 0;
		averageMark = 0;
	}
	void print() {
		cout << "name: " << name << endl;
		
		cout << "marks: ";

		for (int i = 0; i < countMarks; i++)
		{
			cout << marks[i] << " ";
		}
			cout << "\nAverage mark: " << averageMark << endl;
	}

	void setName(string name) {
		this->name = name;
	}
	void setAge(int age) {
		this->age = age;
	}


	void addMark(int mark) {
		int* temp = new int[countMarks + 1];
		for (int i = 0; i < countMarks; i++)
		{
			temp[i] = marks[i];
		}
		temp[countMarks] = mark;
		marks = temp;
		countMarks++;
		averageMarks();
	}
	~Student()
	{
		cout << "destructor " <<name<< endl;
		if (marks != nullptr)
		{
			delete[]marks;
		}
	}


	void saveToFile() {
		ofstream out ("students.txt");
		if (out.is_open())
		{
			out <<"name: "<< name << endl;
			out <<"age: "<< age << endl;
			out << "marks: "<<countMarks<<" ";
			for (int i = 0; i < countMarks; i++)
			{
				out << marks[i]<<" ";
			}
			out << endl;
			out <<"average mark: "<< averageMark << endl;
			out.close();
		}
		else
		{
			cout << "file is not open" << endl;
		}
	}

	void readFromFile() {
		ifstream in("students.txt");	
		if (in.is_open())
		{
			string text;
			
			in >>text>>name;
			in >> text >>age;
			in >> text >> countMarks;
			if (marks!=nullptr)
			{
				delete[]marks;
			}
			if (countMarks>0)
			{
				marks = new int[countMarks];
				for (int i = 0; i < countMarks; i++)
				{
					in >> marks[i];
				}
			}
			else
			{
				marks = nullptr;
			}
		
			in >>text>>text>> averageMark;
			
			print();

			in.close();
		}
		else
		{
			cout << "file not read" << endl;
		}
	}

};












int main()
{
	//Student st;

	//st.setName("bemko");
	//st.setSurname("yurich");
	//st.addMark(3);
	//st.addMark(8);
	//st.addMark(9)
	//st.addMark(11);
	//st.print();


	//Student st2("mell","stroy","lob");
	//st.addMark(11);
	//st.addMark(5);
	//st.addMark(12);

	//st2.print();


	//1

	//Rectangl rg(3, 4, '$');
	//rg.printRectangle();
	//int w;
	//cin >> w;
	//if (w)system("cls");

	//rg.setSizeXY(5, 2);
	//rg.printRectangle();

	//system("pause");
	//system("cls");
	//rg.move(5, 3);
	//rg.printRectangle();
	//rg.setSizeXY(10, 5);
	//rg.setNewSize(6, 10);
	//rg.printRectangle();
	

	//2

	Student st;

	st.setName("nazar");
	st.setAge(17);
st.addMark(10);
st.addMark(8);
st.addMark(9);
st.print();

st.saveToFile();
cout << "below is from file" << endl;
st.readFromFile();

}