#include <iostream>


using namespace std;

class Author{
	int Authorid;
	string Authorname;
    string Bookname;
    int NumberofBook;
    int total;
     
     
     Author(	int Authorid,string Authorname, string Bookname, int NumberofBook,  int total)
	 {
	this.Authorid=Authorid;
	this.Authorname=Authorname;
    this.Bookname=Bookname;
    this.NumberofBook=NumberofBook;
    this.total=total;
 }
	
};
