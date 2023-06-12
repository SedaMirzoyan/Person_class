
#include <iostream>
#include <string>

class Customer_class {
	std::string name;
	std::string surname;
	int age;
	double salary;
	std::string workplace;

	int account_num; 
	double account_sum; //money owns on account
	int credit_card_num;	
	double credit_card_sum;	 //money owns on credit card

public:
	Customer_class()
	{
		std::cout << "Default constructor\n";

		name = " ";
		surname = " ";
		age = 0;
		salary = 0.0;
		workplace = " ";

		account_num = 0;
		account_sum = 0.0;
		credit_card_num = 0;
		credit_card_sum = 0.0;
	}

	Customer_class(std::string n, std::string sn, int a, double s, std::string w)
	{
		std::cout << "Parametrized constructor for personal info\n";

		name = n;
		surname = sn;
		age = a;
		salary = s;
		workplace = w;
	}

	Customer_class(int an, double as, int cn, double cs)
	{
		std::cout << "Parametrized constructor for accounts/cards\n";

		account_num = an;
		account_sum = as;
		credit_card_num = cn;
		credit_card_sum = cs;
	}

	~Customer_class()
	{
		std::cout << "Destructor\n";
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
		if (age < 0) {
			std::cout << "invalid age\n";
		}
		age = a;
	}

	std::string getWorkplace()const
	{
		return workplace;
	}


	void setWorkplace(std::string w)
	{
		if (w.empty()) {
			std::cout << "empty string (workplace)\n";
		}
		workplace = w;
	}

	int getAccountNum()const
	{
		return account_num;
	}


	void setAccountNum(int cn)
	{
		if (account_num <= 0) {
			std::cout << "invalid account number\n";
		}
		account_num = cn;
	}

	double getAccountSum()const
	{
		return account_sum;
	}


	void setAccountSum(int as)
	{
		if (account_sum < 0.0) {
			std::cout << "invalid account sum\n";
		}
		account_sum = as;
	}


	double getSalary()const
	{
		return salary;
	}


	void setSalary(int s)
	{
		if (salary < 0.0) {
			std::cout << "invalid salary\n";
		}
		salary = s;
	}

	int getCardNum()const
	{
		return credit_card_num;
	}


	void setCardNum(int cn)
	{
		if (credit_card_num <= 0) {
			std::cout << "invalid card number\n";
		}
		credit_card_num = cn;
	}

	
	double getCardSum()const
	{
		return credit_card_sum;
	}


	void setCardSum(int an)
	{
		if (credit_card_sum < 0.0) {
			std::cout << "invalid sum on card\n";
		}
		credit_card_sum = an;
	}

	void printPersonalInfo()
	{
		std::cout << this->name << " " << this->surname << " " << this->age << " " << this->salary << " " << this->workplace << std::endl;
	}

	void printAccountCards()
	{
		std::cout << this->account_num << " " << this->account_sum << " " << this->credit_card_num << " " << this->credit_card_sum << " " <<  std::endl;
	}

};

int main()
{
	std::string name;
	std::string surname;
	int age;
	double salary;
	std::string workplace;

	std::cout << "Enter name, surname, age, salary and workplace\n";
	std::cin >> name;
	std::cin >> surname;
	std::cin >> age;
	std::cin >> salary;
	std::cin >> workplace;

	Customer_class ob;	
	Customer_class ob1(name, surname, age, salary, workplace);
	
	ob1.printPersonalInfo();

	return 0;
}

