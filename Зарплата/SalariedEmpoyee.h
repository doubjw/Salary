#ifndef _SALARIEDEMPOYEE_HPP_
#define _SALARIEDEMPOYEE_HPP_

#include <iostream>
#include <Windows.h>
#include <string>
#include <format>

class SalariedEmpoyee
{
	public:
		SalariedEmpoyee(std::string name, double salary);

		void SetName(std::string name);
		void SetSalary(double salary);

		std::string GetName() const;
		double GetSalary() const;

		double Earning() const;
		std::string toString() const;



	private:
		std::string name{};
		double salary = 0.0;
};

#endif //_SALARIEDEMPOYEE_HPP_

