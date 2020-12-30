#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    cout << "****************************************\n";
    cout << "*          Project 1                   *\n";
    cout << "*      ODU Computer Science            *\n";
    cout << "*        Programmer: Mimi Ho           *\n";
    cout << "*        Due Date: 09/27/2017          *\n";
    cout << "*        Diem_Ho_project1.cpp          *\n";
    cout << "****************************************\n\n";
    //Step 1	- Declare Variables
    string mobileAppName;
    string firstnameoftheprogramer;
    string lastnameoftheprogramer;
    string programerIDnumber;
    char programergender;
    string name;
    double  fullVersionPrice;
    double  trialVersionPrice;
    int    noOfFullVersionsDownload;
    int    noOfTrialVersionsDownload;
    float  Taxrate;
    double grossAmount;
    double taxDeduction;
    double netearnigTotal;
    double Taxpercent;




    //Step 1b	- declare output file stream variable (done)
    ofstream outFile;
	outFile.open("Ho_outP1.txt");		// your name here
    //Step 2
    cout <<"\n\nprogram info\n\n";
    cout << "This program collects programmer information and mobile \napp sales information, including price, number of \ndownloads and tax rate. Total gross earnings are \ncalculated and displayed to the standard output device \nand written to an output file, along with the programmer \ninformation.";



    //Step 3
    cout <<"\n\nget app sales info.\n\n";
    cout << " Enter the name of the mobile app: ";
    getline(cin,mobileAppName);
    cout << endl;

    cout << " Enter the price of a full version: ";
    cin  >> fullVersionPrice;
    cout << endl;

    cout << " Enter the price of a trial version: ";
    cin  >> trialVersionPrice;
    cout << endl;

    cout << " Enter the number of full versions download: ";
    cin  >>  noOfFullVersionsDownload;
    cout << endl;

    cout << " Enter number trial versions download: ";
    cin  >>  noOfTrialVersionsDownload;
    cout << endl;

    cout << " Enter tax percent: ";
    cin  >>  Taxpercent;
    cout << endl << endl;

    /*

    Gather data in the following order
    Enter the name of the mobile app
    Enter price of a full version
    Enter price of a trial version
    Enter number full versions sold
    Enter number trial versions sold
    Enter tax rate
    */
    //Step 4
    cout <<"\n\nget programmer info\n\n";
    cout <<" Enter the first name of the programer:, Last name , PID , and gender: ";
    cin  >> firstnameoftheprogramer >> lastnameoftheprogramer>> programerIDnumber>> programergender;






    //Step 5
    cout <<"\n\nformat output\n\n";

    cout<< fixed<< setprecision (2)<<endl;

    cout <<"Mobile App Name: " << mobileAppName<<endl;
    cout <<"Full Version Price: "<< fullVersionPrice <<endl;
    cout <<"Trial Version Price: "<< trialVersionPrice <<endl;
    cout <<"Number of full Versions Download: " << noOfFullVersionsDownload<<endl;
    cout <<"Number of trial Versions Download: " <<noOfTrialVersionsDownload<<endl;
    cout <<"Tax percent: " <<Taxpercent<<Taxpercent<<endl;

    //Step 6
    cout <<"\n\ncalculations\n\n";
    grossAmount = fullVersionPrice * noOfFullVersionsDownload +
                  trialVersionPrice * noOfTrialVersionsDownload;
    taxDeduction = grossAmount * Taxpercent / 100;
    netearnigTotal = grossAmount - taxDeduction;




    //Step 7: Output results to the monitor
    cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
         << "-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    cout << "Programmer Info\n";
    cout << setfill (' ') << left << setw (35) << " Name:  "
         <<firstnameoftheprogramer<<  " " << lastnameoftheprogramer
         << " (" << programergender << ")" << endl;


    cout << setfill (' ') << left << setw(35) << " PID: " <<programerIDnumber;

    cout << "\n";

    cout << "Sales Info\n";
    cout << setfill ( ' ') << left << setw (35) << " Mobile App Name: "
         << right << " "  << mobileAppName << endl;
    cout << left << setw (35) <<  setfill ( ' ')<< " Number of trial Versions Sold: "
         << setfill ( ' ') << right << setw (10)
         << noOfFullVersionsDownload + noOfTrialVersionsDownload
         << endl;

    cout << setfill (' ') << left << setw(35)
         << " Gross Amount: " << "$"
         << setfill (' ') << right
         << setw (8) << grossAmount << endl;

    cout << setfill (' ') << left << setw(35)
         << " Tax Percent: "
         << setw (8) << Taxpercent << '%'<<endl;

    cout << setfill (' ') << left << setw(35)
         << " Tax Deduction: "
         << setfill ( ' ') << right << "$"
         << setw (9) << taxDeduction << endl;

    cout << setfill (' ') << left << setw(35)
         << " Net earning Total: "
         << setfill (' ') << right << "$"
         << setw (8) << netearnigTotal << endl;


    //Step 8: Output results to OUTPUT FILE
    outFile << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
            << "-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    outFile << "Programmer Info\n";
    outFile << setfill (' ') << left << setw (35) << " Name:  "
            <<firstnameoftheprogramer<<  " " << lastnameoftheprogramer
            << " (" << programergender << ")" << endl;

    outFile <<setfill (' ') << left << setw(35) << " PID: " <<programerIDnumber;

    outFile << "\n";
    outFile << "Sales Info\n";

    outFile << setfill ( ' ') << left << setw (35) << " Mobile App Name: "
            << right << " "  << mobileAppName << endl;
    outFile << left << setw (35) <<  setfill ( ' ')<< " Number of trial Versions Sold: "
            << setfill ( ' ') << right << setw (10)
            << noOfFullVersionsDownload + noOfTrialVersionsDownload
            << endl;


    outFile << setfill (' ') << left << setw(35)
            << " Gross Amount: " << "$"
            << setfill (' ') << right
            << setw (8) << grossAmount << endl;

    outFile << setfill (' ') << left << setw(35)
            << " Tax Percent: "
            << setw (8) << Taxpercent << '%'<<endl;

    outFile << setfill (' ') << left << setw(35)
            << " Tax Deduction: "
            << setfill ( ' ') << right << "$"
            << setw (9) << taxDeduction << endl;

    outFile << setfill (' ') << left << setw(35)
            << " Net earning Total: "
            << setfill (' ') << right << "$"
            << setw (8) << netearnigTotal << endl;





    //Step 9 done
    outFile.close();

	return 0;
}
///=======end of main()=================================