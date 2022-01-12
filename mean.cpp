#include <iostream>

using namespace std;
double mean(double);

double mean(double total){
  double mean = total/15.0;
  return mean;
}

int main(){
  double numArr[15];
  cout<< "Please enter 15 numbers:" <<endl;
  double total = 0;
  for(int i = 0; i < 15; i++)
  {
    cin >> numArr[i];
    total = total + numArr[i];
  }
  double avg = mean(total);
  cout << "The average of these 15 numbers is "<<avg<< "\n";
  return 0;
}
