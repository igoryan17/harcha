/*
 * main.cpp
 *
 *  Created on: 01.04.2015
 *      Author: nikita
 */
#include <iostream>
#include <string>
template <typename T> class Dick
{
public:
	Dick(){std::cout<<"Dick()\n";}
	Dick(std::string h): dick(h) {}
	void print(){std::cout << dick << std::endl;}
	T sum(T x, T y){return x+y;}
	//double sum(double x, double y){return x+y;}
	~Dick(){}
protected:
	std::string am;
private:
	std::string dick;
};

template <typename T> class Sobol : public Dick<T>
{
public:
	void bombom(){std::cout<<"Fuck off please!\n";}
};

int main()
{
	Dick<int> chlen("Harichking");
	chlen.print();
	Sobol<int> grisha;
	grisha.bombom();
	std::cout << chlen.sum(4,5) << std::endl;
	return 0;
}
