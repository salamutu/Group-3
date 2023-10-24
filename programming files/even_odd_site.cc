#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    // creating ofstream object to open a file
    ofstream file;

    //opening the file
    file.open("numbers.html");

    //reading int string contents of the file
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";

    //a for loop to add a number between 1-50 between the string in the file
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    
    file << "</table>\n</body>\n</html>";

    //closing file
    file.close();

    // opeing the file
    ifstream input("numbers.html");

    //returning a pointer to the object 
    cout << input.rdbuf();

    //closing the file
    input.close();
    
    return 0;
}
