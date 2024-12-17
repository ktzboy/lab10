#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;


int main() {
    int n = 0;
    double sum = 0, mean, sd;
    string num;
    ifstream s;

    s.open("score.txt");
    while(getline(s, num)) {
        sum += atof(num.c_str());
        n++;
    }
    mean = sum / n;
    s.close();
    
    sum = 0;
    s.open("score.txt");
    while(getline(s, num)) {
        sum += pow(atof(num.c_str()), 2);
    }
    sd = sqrt((sum/n) - pow(mean, 2));
    s.close();

    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd;
}