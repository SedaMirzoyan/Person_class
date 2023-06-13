
#include <iostream>
#include <string>
#include <fstream>

class Student {
	std::string name;
	std::string surname;
	int age;
	std::string faculty;
	int grade;
	int num_of_subjects;
	double* marks_list;

public:
	Student()
	{
		std::cout << "Default constructor\n";

		name = " ";
		surname = " ";
		age = 0;
		faculty = " ";
		grade = 0;
		num_of_subjects = 0;

		//marks_list = new double[num_of_subjects];
	}

	Student(std::string n, std::string sn, int a, std::string f, int g)
	{
		std::cout << "Parametrized constructor for student's info\n";

		name = n;
		surname = sn;
		age = a;
		faculty = f;
		grade = g;
	}

	Student(int ns)
	{
		std::cout << "Parametrized constructor for marks\n";

		num_of_subjects = ns;

		marks_list = new double[num_of_subjects];
	}


	~Student()
	{
		std::cout << "Destructor\n";

		delete[] marks_list;
	}


	void initMarks()
	{
		for (int i = 0; i < num_of_subjects; i++)
		{
			marks_list[i] = rand() % 10 + 1;;
		}
	}


	std::string getName()const
	{
		return name;
	}


	void setName(std::string n)
	{
		if (n.empty()) {
			std::cout << "empty string (name)\n";
		}
		name = n;
	}

	std::string getSurName()const
	{
		return surname;
	}


	void setSurname(std::string sn)
	{
		if (sn.empty()) {
			std::cout << "empty string (surname)\n";
		}
		surname = sn;
	}

	int getAge()const
	{
		return age;
	}


	void setAge(int a)
	{
		if (a < 0) {
			std::cout << "invalid age\n";
		}
		age = a;
	}

	std::string getFaculty()const
	{
		return faculty;
	}


	void setFaculty(std::string f)
	{
		if (f.empty()) {
			std::cout << "empty string (faculty)\n";
		}
		faculty = f;
	}


	int getGrade()const
	{
		return grade;
	}

	void setGrade(int g)
	{
		if (g < 0) {
			std::cout << "invalid grade\n";
		}
		grade = g;
	}

	int getNumSubjects()const
	{
		return num_of_subjects;
	}


	void setNumSubjects(int ns)
	{
		if (ns < 0) {
			std::cout << "invalid number of subjects\n";
		}
		num_of_subjects = ns;
	}

	double averageMark(int num_of_subjects)
	{
		double sum = 0.0;

		for (int i = 0; i < num_of_subjects; i++)
		{
			sum += marks_list[i];
		}

		double avg = sum / num_of_subjects;
		std::cout << "Average mark of the student is " << avg << std::endl;

		return avg;
	}

	void printInfo()
	{
		std::cout << "name is " << this->name << ", surname is " << this->surname << ", age is " << this->age << ", faculty is " << this->faculty
			<< ", grade is " << this->grade << std::endl;
	}

	void printMarks()
	{
		for (int i = 0; i < num_of_subjects; i++)
		{
			std::cout << marks_list[i] << " ";
		}
		std::cout << std::endl;
	}

};

int main()
{
	std::string name;
	std::string surname;
	int age;
	std::string faculty;
	int grade;

	int num_of_subjects;

	std::cout << "Enter name, surname, age, faculty, grade\n";
	std::cin >> name;
	std::cin >> surname;
	std::cin >> age;
	std::cin >> faculty;
	std::cin >> grade;

	std::cout << "Enter the number of subjects\n";
	std::cin >> num_of_subjects;

	Student ob;
	Student ob1(name, surname, age, faculty, grade);
	ob1.printInfo();

	Student ob2(num_of_subjects);
	ob2.initMarks();
	ob2.printMarks();
	ob2.averageMark(num_of_subjects);

	return 0;
}

