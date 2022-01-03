#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main ()
{
    // variables
    ifstream inputData;
    ofstream outputData;
    double ticketPrice1, ticketPrice2, ticketPrice3, ticketPrice4;
    int numberOfTicketsSold1, numberOfTicketsSold2, numberOfTicketsSold3, numberOfTicketsSold4;
    int totalTixSold = 0;
    double saleTotal = 0.0;

    // inputs
    inputData.open("Ch3_Ex5Data_Lab02.txt");
    inputData >> ticketPrice1 >> numberOfTicketsSold1;
    inputData >> ticketPrice2 >> numberOfTicketsSold2;
    inputData >> ticketPrice3 >> numberOfTicketsSold3;
    inputData >> ticketPrice4 >> numberOfTicketsSold4;

    // outputs
    outputData.open("Ch3_Ex5Out_Lab02.txt");
    outputData << fixed << showpoint;
    outputData << setprecision(2);

    // math
    totalTixSold = numberOfTicketsSold1 + numberOfTicketsSold2 + numberOfTicketsSold3 + numberOfTicketsSold4;
    saleTotal = ticketPrice1 * numberOfTicketsSold1 + ticketPrice2 * numberOfTicketsSold2 + ticketPrice3 * numberOfTicketsSold3 + ticketPrice4 * numberOfTicketsSold4;

    // output to file
    outputData << "Number of tickets sold = " << totalTixSold << endl;
    outputData << "Sale amount = $" << saleTotal << endl;

    // closing files
    inputData.close();
    outputData.close();

    return 0;
}
