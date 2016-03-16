/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Thomas Brenner, Adam Djabra, Andrew Nomura, Gerado Varela  <tommyb@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<vector>
#include<set>
#include<map>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;
using std::set;
using std::map;



double exceptions(double);
void templates();
void RestaurantMenu(); //This is for vectors
void fruit(); //This is for set
void fruit2();
int fib(int);
int fib_iter(int);


int main()
{

	double a = 100;
	cout << "This function will take the square root 100:" << endl;
	cout << exceptions(a) << endl;
	templates();
	RestaurantMenu();
	fruit();
	fruit2();
	
	for (int i = 1; i <= 10; i++)
		cout << fib(i) << " ";
	cout << endl;
	int n = 15;
	cout << fib_iter(n) << " ";


	return 0;
}
void fruit() {
	string banana, apple, pineapple, pear;

	set<string> fruits;
	fruits.insert(banana);
	fruits.insert(apple);
	fruits.insert(pineapple);

	if (fruits.find(apple) == fruits.end()) { //work on if statement 
		cout << "I have no pears" << endl;
	}

}

void fruit2() {
	string banana, apple, pineapple;

	map<string, double> fruits;
	fruits[banana] = 1.05;
	fruits[apple] = 0.85;
	fruits[pineapple] = 3.05;

	cout << "Pineapple is the most expensive at: $" << fruits[pineapple] << endl;

}

double exceptions(double a) 
{
	
	if (a < 0)
	{
		try
		{
			throw - 100;
		}
		catch (double e)
		{
			cout << e << " is invalid." << endl;
			cout << "Moving on..." << endl;
			cout << "I will now find the averages of 10 and 14:" << endl;
		}
	}
	else
	{
		return sqrt(a);
	}

}

template <typename T>
T avg(T x, T y)
{
	return (x + y) / 2;
}

void templates()
{
	cout << "I will now find the averages of 10 and 14:" << endl;
	cout << avg(10, 14) << endl;

	
}


void RestaurantMenu() {

	vector<double> menu;
	
	menu.push_back(2.99);
	menu.push_back(3.99);
	menu.push_back(4.99);
	menu.push_back(5.99);
	menu.push_back(6.99);


	cout << "Menu" << endl;
	cout << "Small Fries: $" << menu[0] << endl;
	cout << "Medium Fries: $" << menu[1] << endl;
	cout << "Large Fries: $" << menu[2] << endl;
	cout << "Hamburger: $" << menu[3] << endl;
	cout << "Cheeseburger: $" << menu[4] << endl;
}


int fib(int n) {

	if (n == 1)
		return 1;
	if (n == 2)
		return 2;

	return fib(n - 1) + fib(n - 2);
}


int fib_iter(int n) {
	int fib[] = { 0, 1, 1 };

	for (int i = 2; i <= n; i++) {
		fib[i % 3] = fib[(i - 1) % 3] + fib[(i - 2) % 3];
		cout << fib[i % 3] << " ";
	}
	return fib[n % 3];

}
