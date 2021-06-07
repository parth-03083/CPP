//In this code we will define some functions based on strings
#include<iostream>
#include<string>

using namespace std;
int main(){
   /*
    //Comparisions of strings

    string s1 = "abc";
    string s2 = "abc";
    //cout << s1.compare(s2) << endl;
    cout << s2.compare(s1) << endl;
    */

   //EMPTY FUNCTION
   //To check if string is empty or not at any point 
   string s1 = "abc";
   cout<< s1 <<endl;
   s1.clear(); //Used to clear the string 
   if(s1.empty())
   cout<<"The string is empty" <<endl;
    

    return 0;
}