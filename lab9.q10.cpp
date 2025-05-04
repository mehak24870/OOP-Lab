#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Step 1: Create and write to the file
    ofstream outfile("data_records.txt");
    outfile << "Record 1\n";
    outfile << "Record 2\n";
    outfile << "Record 3\n";
    outfile << "Record 4\n";
    outfile.close();

    // Step 2: Open the file using ifstream
    ifstream infile("data_records.txt");

    if (!infile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Step 3: Calculate offset for third record
    // "Record 1\n" = 9 bytes
    // "Record 2\n" = 9 bytes
    // So, offset for Record 3 = 9 + 9 = 18
    infile.seekg(18, ios::beg);  // Move to the start of Record 3

    // Step 4: Read and print the third record
    string record;
    getline(infile, record);
    cout << "Third record: " << record << endl;

    // Step 5: Close the file
    infile.close();

    return 0;
}
