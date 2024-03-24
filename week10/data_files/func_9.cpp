#include <iostream>
#include <fstream>

using namespace std;

void copyFileContents(const string source_file_name, const string destination_file_name) {
    ifstream source_file(source_file_name);
    ofstream destination_file(destination_file_name);

    if (source_file.is_open() && destination_file.is_open()) {
        string line;
        string output_line = "":

        while (getline(source_file, line)) {
            for (int i = 0; i < static_cast<int>line.length(); i++) {
                // if (isalpha(line[i])) {
                //     output_line += toupper(line[i]);
                // } else if (isdigit(line[i])) {
                //     output_line += stoi(line[i]) * 10;
                // } else if (line[i] == '$'){
                //     output_line += "USD ";
                // } else {
                //     output_line += line[i];
                // }
                output_line += line[i];
            }

            destination_file << output_line << endl;
        }

        source_file.close();
        destination_file.close();
    } else {
        // if (source_file.fail() && destination_file.is_open()) {
        //     cerr << "Error: Unable to open source file." << endl;
        // } else if (source_file.is_open() && destination_file.fail()) {
        //     cerr << "Error: Unable to open destination file." << endl;
        // } else {
        //     cerr << "Error: Unable to open files." << endl;
        // }
        cerr << "Error: Unable to open files." << endl;
    }
}
