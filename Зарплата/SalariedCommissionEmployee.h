#ifndef _SALARIEDCOMMISSIONEMPLOYEE_HPP_
#define _SALARIEDCOMMISSIONEMPLOYEE_HPP_

#include "SalariedEmpoyee.hpp"

class SalariedCommissionEmployee final : public SalariedEmpoyee
{
	public:
		SalariedCommissionEmployee(std::string name, double salary, double sales, double commissionRate);

		void SetSales(double sales);
		void SetCommissionRate(double commissionRate);

		double GetSales() const;
		double GetCommisiionRate() const;

		double Earning() const;
		std::string toString() const;

	private:
		double sales = 0.0;
		double commissionRate = 0.0;

};

#endif //_SALARIEDCOMMISSIONEMPLOYEE_HPP_


