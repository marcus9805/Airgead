#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Input variables
    double initialInvestment;
    double monthlyDeposit;
    double annualInterestRate;
    int numberOfYears;

    // Get user input
    std::cout << "Enter Initial Investment: ";
    std::cin >> initialInvestment;

    std::cout << "Enter Monthly Deposit: ";
    std::cin >> monthlyDeposit;

    std::cout << "Enter Annual Interest Rate (%): ";
    std::cin >> annualInterestRate;

    std::cout << "Enter Number of Years: ";
    std::cin >> numberOfYears;

    // Output headers
    std::cout << std::setw(5) << "Year" << std::setw(20) << "Year-End Balance" << std::setw(20) << "Interest Earned\n";
    std::cout << std::setw(45) << std::setfill('-') << "\n" << std::setfill(' ');

    // Calculate compound interest
    double openingAmount = initialInvestment;
    double depositedAmount;
    double total;
    double interest;
    double closingBalance;

    for (int year = 1; year <= numberOfYears; ++year) {
        depositedAmount = monthlyDeposit * 12; // Monthly deposit for the year
        total = openingAmount + depositedAmount;
        interest = total * ((annualInterestRate / 100) / 12);
        closingBalance = total + interest;

        // Display results for the year
        std::cout << year << "\t" << "|" << closingBalance << "\t\t" << "|" << interest << "\n";

        // Update opening amount for the next iteration
        openingAmount = closingBalance;
    }

    return 0;
}
