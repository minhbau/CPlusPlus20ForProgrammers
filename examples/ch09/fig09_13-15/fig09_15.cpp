// fig09_15.cpp
// Order in which constructors and 
// destructors are called.
#include <iostream>
#include "CreateAndDestroy.h" // include CreateAndDestroy class definition
using namespace std;

void create(); // prototype

const CreateAndDestroy first{1, "(global before main)"}; // global object 

int main() {
   cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;
   const CreateAndDestroy second{2, "(local in main)"};
   static const CreateAndDestroy third{3, "(local static in main)"};

   create(); // call function to create objects

   cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
   const CreateAndDestroy fourth{4, "(local in main)"};
   cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;
}

// function to create objects
void create() {
   cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
   const CreateAndDestroy fifth{5, "(local in create)"};
   static const CreateAndDestroy sixth{6, "(local static in create)"};
   const CreateAndDestroy seventh{7, "(local in create)"};
   cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;
}

/**************************************************************************
 * (C) Copyright 1992-2021 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/