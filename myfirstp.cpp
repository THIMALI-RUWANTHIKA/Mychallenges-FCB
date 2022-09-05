#include <iostream>
using namespace std;

int main()
{
  int chem,phy,bio,sum;
  float avg,per;
  cout<<"Enter the marks of chemistry = ";
  cin>>chem;
  cout<<"Enter the marks of physics = ";
  cin>>phy;
  cout<<"Enter the marks of Bio = ";
  cin>>bio;
  sum=chem+phy+bio;
  cout<<"sum = "<<sum<<endl;
  avg=sum/3.0;
  per=(sum*100)/300.0;
  cout<<"average = "<<avg<<endl;
  cout<<"percentage ="<<per<<endl;

  if(per>=60)
    cout<<"Ranked  1st";
  else
    if(per>=45 && per<60)
    cout<<"Ranked  2nd";
  else
    if(per>=30 && per<45)
    cout<<"Ranked  3rd";


  return 0;
}
