#include <iostream>

using namespace std;

// Name: Chris Kardaras
//

// Write any functions you need here!
void takes_pointer(int* X)
{
  (*X)++;
  cout<<"The Value has been incremented via pointer: "<< (*X) << endl;
}

void takes_reference(int& X)
{
  X++;
  cout<<"The Value has been incremented via Reference: "<< (X) << endl;
}

// This function will set the value of the pointer to be equal to the constant
void takes_const_reference_and_pointer_output(const int& references_constant, int* new_pointer)
{
  cout<<"Pointer's Initial Value: "<<*new_pointer<<endl;
  cout<<"Constant Reference Value: "<<references_constant<<endl;
  (*new_pointer) = references_constant;
  cout<<"New Value of Pointer: "<<*new_pointer<<endl;
}



int main() {
    // Add as many prints to cout as you need to answer the questions.
    // Leave them in your code when you turn it in.
    // If you have lines of code that cause errors that test the questions,
    // leave this code in your file but comment it out.

    // 1) Declare an int

    int x=0;
    cout << "x: "<< x << endl;
    cout << "********************************" << endl;

    // 2) Declare a pointer to that int

    int* point_x = &x;
    cout << "Pointer Dereferenced: " << *point_x << endl;
    cout << "********************************" << endl;

    // 3) Increment the int via the pointer

    (*point_x)++;
    cout << "x: "<< x << endl;
    cout << "Pointer Dereferenced: " << *point_x << endl;
    cout << "********************************" << endl;

    // 4) Declare a reference to your int

    int& reference_x = x;
    cout << "Reference: " << reference_x << endl;
    cout << "********************************" << endl;

    // 5) Increment the int via the reference

    reference_x++;
    cout << "x: "<< x << endl;
    cout << "Pointer Dereferenced: " << *point_x << endl;
    cout << "Reference: " << reference_x << endl;
    cout << "********************************" << endl;

    // 6) When you increment the int via the variable declared in #1, from which
    // variables can you see the changes?
    // Answer:
    /*You can see the changes from the int x,
    the pointer to x (once it is dereferenced),
    and the reference to x */

    // 7) When you increment the int via the pointer declared in #2, from which
    // variables can you see the changes?
    // Answer:
    /* The changes to x via the pointer,
    seem to be able to be seen from the reference and original
    as well */

    // 8) When you increment the int via the reference declared in #4, from which
    // variables can you see the changes?
    // Answer:
    /* Changes can be seen in the reference, original int value, and pointer (Dereferenced) */

    // 9) Write a function that takes an int * parameter. How would you pass the
    // variable from #1 into this function? (write the function call below)
    takes_pointer(point_x);
    /* I wrote a function that had its parameter as a pointer to a value,
    the integer defined in number one is passed to this function via a pointer
    to that integer */


    // 10) Can you pass your reference from #4 to the function from #9 without accessing its address?
    // Answer:
    //takes_pointer(reference_x);
    takes_pointer(&reference_x);
    //You cannot, if you want to pass in a reference, you must pass it in in format: &someVar
    cout<<"Variable with & in front: "<< (&reference_x)<<endl;


    // 11) Write a function that takes an int & parameter. How would you pass the
    // variable from #1 into this function? (write the function call below)
    takes_reference(reference_x);
    /*I just pass the reference as it is named in the function, as it is an &int type*/

    // 12) Can you pass your pointer from #2 to the function from #11 without dereferencing it?
    // Answer:
    /*You cannot*/
    //takes_reference(point_x);
    cout<<"Pointer Value: "<< (point_x)<<endl;

    // 13) Can you pass your reference from #4 to the function from #11?
    // Answer:
    takes_reference(reference_x);
    //This works because it is expecting an &int type

    // 14) Write a function that takes one const reference input parameter and one pointer
    // output parameter. The function should fill in the value of the output parameter based
    // on the value of the input parameter. (what it does exactly is up to you).
    // Call your function 3 times below. Be sure to include output as necessary to be sure
    // your function works as described.
    //Got to include const to have reference to const and a new pointer to use as an output parameter
    const int constant = 10;
    int y = 50;
    const int& references_constant = constant;
    int* new_pointer = &y ;
    //For description of function, see function definition at top of page
    takes_const_reference_and_pointer_output(references_constant, new_pointer);

    // 15) What is/are the difference(s) between output parameters and return values?
    // Answer:
    /*I think return values are probably much faster, as a copy of whatever is going into the
    function is not being made when we use output parameters,
    it also allows for multiple values to be returned from a function */
}
