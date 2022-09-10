#include "vector131.h"
#include <vector>
#include <iostream>
using namespace std;

vector131::vector131()
{
  int count;
  int resizeArray;
  int backValue;
  int frontValue;
  cout  <<  "Input Dynamic Array Size\n";
  cin >> count;


  int* vector131;
  vector131  = new int [count] ;
  for (int k = 0; k < count; k++)
  {
    cout << "Input Values" << endl;
    cin >> vector131 [k];
    cout <<  endl;
  }
  cout << "Original Array: \n";
  for (int i = 0; i < count; i++)
  {
    cout << vector131[i] << ", ";
  }
  cout << endl;

  // Resized Array
  
  cout << "Which value would you like to resize the array to?";
  cin >> resizeArray;

  int* newResizedArray = new int [resizeArray];
  for (int i = 0; i < resizeArray; i++)
  {
    newResizedArray[i] = vector131[i];
  }
  cout << "Resized Original List \n";
  for (int i = 0; i < resizeArray; i++)
  {
    cout << newResizedArray[i] << ", ";
  }
  cout << endl;

  //push front
  cout << "What value would you like to push front: ";
  cin >> frontValue;
  count = count + 1;
  int* newPushFrontArray = new int [count];
  newPushFrontArray[0] = frontValue;
  for (int i = 0; i < count; i++)
  {
    newPushFrontArray[i+1] = vector131[i];
  }
  cout << "Original List with Push Front Value \n";
  for (int i = 0; i < count; i++)
  {
    cout << newPushFrontArray[i] << ", ";
  }
  cout << endl;
  
  // push back
  cout << "What value would you like to push back: ";
  cin >> backValue;

  int* newPushBackArray = new int [count];
  for (int i = 0; i < count; i++)
  {
    newPushBackArray[i] = vector131[i];
  }
  newPushBackArray[count-1] = backValue;
  cout << "Original List with Push Back Value \n";
  for (int i = 0; i < count; i++)
  {
    cout <<  newPushBackArray[i] << ", ";
  }
  cout << endl;

delete[] vector131;
delete[] newPushBackArray;
delete[] newPushFrontArray;
}
