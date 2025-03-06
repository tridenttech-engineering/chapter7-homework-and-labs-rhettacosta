//Lab7-4.cpp - displays the average electric bill
//Created/revised by Rhett Acosta on 3/6/25

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  int months = 1;
  double totalBills = 0.0;
  double avgBill = 0.0;
  double bill = 0.0;

  cout << "Bill for month 1: ";
  cin >> bill;
  
  while (bill >= 0.0 && bill != -1)
    {
      totalBills += bill;
      months += 1;
      cout << "Bill for month " << months << ": ";
      cin >> bill;
      //end while
    }

  if (months > 0)
    {
      avgBill = static_cast <double> (totalBills) / (months - 1);
      cout << fixed << setprecision(2);
      cout << "Average electric bill for " << months << " months: $" << avgBill << endl;
    }
      
  else
      cout << "No bill amount entered." << endl;
    
    

  return 0;
  
}	//end of main function




