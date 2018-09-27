// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows list sum  :  " << cows.sum() << endl;
	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows list sum  :  " << cows.sum() << endl;
	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows list sum  :  " << cows.sum() << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "horses list size  :  " << horses.getSize() << endl;
	cout << "horses list sum  :  " << horses.sum() << endl;
	horses.removeFirst();
	horses.insertAsFirst(5.67);
	horses.InsertatEnd(11.5);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows list sum  :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "horses list size  :  " << horses.getSize() << endl;
	cout << "horses list sum  :  " << horses.sum() << endl;

	List pigs;
	cows.InsertatEnd(3.61);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "cows list sum  :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	pigs.InsertatEnd(7.29);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs list size  :  " << pigs.getSize() << endl;
	cout << "pigs list sum  :  " << pigs.sum() << endl;
	cout << "End of code" << endl;

	system("pause");
	return 0;
}

