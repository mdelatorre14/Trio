#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//void sortDescending(int,int,int);
//void swap(int&,int&);
void sort(int&,int&,int&);

int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  //sortDescending(numA, numB, numC);
  sort(numA, numB, numC);  

  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

void sort(int &first, int &second, int &third){
   int temp; 
    if(first < second){
	temp = first;
	first = second;
	second = temp;
    }
    if(first < third){
    	temp = first;
        first = third;
        third = temp;
    }
    if(second < third){
    	temp = second;
        second = third;
        third = temp;
    }
}
/*
void sortDescending(int first, int second, int third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
}

void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}*/
