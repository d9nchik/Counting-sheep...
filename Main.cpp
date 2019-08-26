using namespace std; 
#include <algorithm>    //For size, back and pop_back.

int count_sheep(vector<bool> arr) 
{
  int size = arr.size();  //Let`s now the size of our array.
  int counter =0;          //We created storage for our number.
  for(int k=0;k<size;k++){  
    if(arr.back()==true)    //If our array contains true, we add one to counter.
      counter++;
    arr.pop_back();
  }
  return counter;      //Return our result
}//P.S.:https://github.com/d9nchik

