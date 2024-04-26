#pragma once
//Tammy Wilson
 //CS 210
// 4/1/2024
//Banking.h
#ifndef banking_h
#define banking_h

// Banking class
class Banking {
public:
	void SetInitialInvestment(double t_initialInvestment);//investment amount
	void SetMonthlyDeposit(double t_monthlyDeposit);//Deposit amount
	void SetInterestRate(double t_annualInterest);//Interest rate
	void SetNumberOfYears(int t_numberOfYears);//Number of years
	double GetInitialInvestment() const;
	double GetMonthlyDeposit() const;
	double GetInterestRate() const;
	int GetNumberOfYears() const;
	double calcBalanceWithoutMonthlyDeposit(double t_initialInvestment, double t_annualInterest, int t_numberOfYears);
	double balanceWithMonthlyDeposit(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterest, int t_numberOfYears);
	//private class
private:
	double m_totalAmount;
	double m_interestAmount;
	double m_yearlyTotalInterest;
	double m_monthlyDeposit;
	double m_numberOfYears;
};

#endif

