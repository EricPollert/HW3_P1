 #include <iostream>
#include <cmath>

using namespace std;

int main() {
  /******** declare model parameters ******/
  // hard coded parameters
  int c0;     // number of initial cases
  double r;   //growth rate factor
  double m;   // power of polynomial

  // calculated values based on equation 1 and 2
  double ct;     // c(t)
  double A;      // equation constant related to baseline prevalence

  // user input
  double t;      // weeks

  /********* initialize model parameters *******/
  c0 = 10;
  r = 0.2;
  m = 1.65;
  // t = 10;

  /******** input *******************************/
  // request user input
  cout << "For the Model where m = " << m << ", c0 = " << c0;
  cout << ", and r = " << r << "..." << endl;
  cout << "Input t [weeks] for the sub-exponential growth model" << endl;
  cin >> t;

  /********* Conversions and Calculations *****************/
  // convert t from weeks to days
  t = t*7;

  // solve equation 2, which finds A
  A = pow( ((r/m)*t + A), m);

  /***** Display results to User *********/
  // output for the form c(t) = xx where t in the equation is shown in weeks
  cout << "c(" << t/7.0 << ") = " << ct << endl;

  return 0;
}