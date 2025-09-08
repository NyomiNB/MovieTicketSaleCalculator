//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- 
// Program:  Add the name of the program 
// Process: Add the description of the program (3-4 sentences) 
// Results: What are the calculated results? 
// 
// Class: 
//CS2010
//// Section: 1001  
//Term: Spring / Fall 2025
// Author: Nyomi Bell 
// Reflection:  
//          
//Enter your reflection here(4 - 5 sentences).   
// First, I added a comment of all requirements at the top of my program, along with any calculations required.
//It is worth 1 point on the rubric.
//Use complete sentences and proper spelling & grammar.
//Talk about what went well, what gave you some issues,
//how you tested your program, what can you improve on
//for the next assignment, etc.
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#include <iostream>
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
	//const double DISTRIBUTOR_PROFIT;
	const double THEATRE_PROFIT = 0.82;
  double grossSales;
	string movieTitle;

	int adultTicketsSold;
	int childrenTicketsSold;

	double childrenTicketCost = 9.50;
	double adultTicketCost = 11.50;
	//adult 11.50
	//child tkt 9.50
	//dist takes 0.18
	//theater takes 0.82
	//theater's gross: adultSales  + childSales
	//net box office profit: adults sales + child sales - distributor costs
 	cout << "Enter the movie title: ";
	cin >> movieTitle;

		cout << "How many adult tickets were sold: ";
		cin >> adultTicketsSold;

		cout << "How many children's tickets were sold: ";
	cin >> childrenTicketsSold;
;
grossSales = (adultTicketsSold * adultTicketCost) + childrenTicketsSold * (childrenTicketCost);

	cout << "\nGross Ticket Sales for '" << movieTitle << "': $" << fixed << setprecision(2) << grossSales << endl;
	cout << "Theater New Profit: $" << THEATRE_PROFIT*grossSales << endl;
	cout << "Amount Paid to Distributor: $" << fixed << (1.0 - THEATRE_PROFIT) * grossSales << endl;

	return 0;
}
