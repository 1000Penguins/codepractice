//Assignment 1:
//Templated class definition of DA ( data array) has been provided below . Implement its functionalities. 
//main() function contain test code to test the class functionalities.
//Do not change the class definition or main code.
//Save the file as <YourUSN>-assignment1.cpp
//Upload the completed file in text format. Ensure it is executing fine before submission
#include<iostream>
using namespace std;

template<class T>

class DA
{
  public:
  T   *ele; //element array buffer pointer ( use malloc or new to allocate memory)
  int len; //length of buffer or maximum size
  int size;// size of array

  DA(); //constructor to initialise len,size

  DA(T *source, int len1)
  {
    ele=source;
    len=len1;
  } // Constructor to initialise from a given array

  void append (T  d)
   {
    T *temp=ele;
    *(temp+len)=d;
    len++;
  } // append an element d in array

  void remove(int index)
  {
    T *temp=ele;
    for(int i=0;i<len-(index+1);i++)
      temp[index+i]=temp[index+i+1];
    len--;
  }// remove element from array mentioned by index

  int find( T  val)
  {
    T *temp=ele;
    int count=0;
    for(int k=0;k<len;k++)
    {
      if(*temp==val)
        count+=1;
      temp++;
    }

    return count;
  } // return number of occurrence of val in array

  void show()
  {
    T *temp=ele;
    for(int k=0;k<len;k++)
    {
      cout<<*temp<<" ";
      temp++;
    }

    cout<<endl;
  }// show all elements in array sequentially

};

int main()
{
  int isource[10]={ 1,2,3,4,5};
  char csource[10]={ 'a','b','c','b','e','f'};
  DA<int> ida(isource,5);
  ida.show(); // should show 1 2 3 4 5
  ida.append(3);
  ida.show(); //should show 1 2 3 4 5 3
  cout<<"Element present = "<<ida.find(3)<<endl; // should show 2
  ida.remove(2);
  ida.show(); // should show 1 2 4 5 3

  DA<char> cda(csource,6);
  cda.show(); // should show a b c b e f
  cda.append('b');
  cda.show(); //should show a b c b e f b
  cout<<"Element present = "<<cda.find('b')<<endl; // should show 3
  cda.remove(4);
  cda.show(); // should show a b c b f b
}