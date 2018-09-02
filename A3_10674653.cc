#include <iostream>

using namespace std;

int markscored;

int main()
{
 cout <<"Please enter your marks \n";

 cin >> markscored;

  if ((markscored>= 80)||(markscored==100))
  {
      cout << 'A'<<endl;
  }
  else if ((markscored>=75)||(markscored==79))
    cout << "B+"<<endl;
  else if ((markscored>=70)||(markscored==74))
    cout <<'B'<<endl;
  else if ((markscored>=65)||(markscored==69))
    cout <<"C+"<<endl;
  else if ((markscored>=60)||(markscored==64))
    cout <<'C'<<endl;
  else if ((markscored>=50)||(markscored==59))
    cout <<"D+"<<endl;
  else if ((markscored>=40)||(markscored==49))
    cout <<'D'<<endl;
  else if ((markscored>=30)||(markscored==39))
    cout <<'E'<<endl;
  else if ((markscored>=0)||(markscored==29))
    cout <<'F'<<endl;

    return 0;
}

