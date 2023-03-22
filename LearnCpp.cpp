/*Alexandru Nicolae
*/
#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <map>

using namespace std;

int myAddFunction(int a, int b) //function with parameters
{
    return a+b;
}
double myAddFunction(double a, double b) //function overloading
{
    return a+b;
}
void myDefParFunction(int x = 1) //function with default param
{
    cout << x << endl;
}
void swapNums(int &x, int &y) //function with param passed by reference
{
  int z = x;
  x = y;
  y = z;
}
class myClass1
{
public:
    myClass1(int x)
    {
        cout << "Constructor with param: " << x << endl;
    }
    void myFunction()
    {
        cout << "Hello" << endl;
    }
};
//Inheritance
// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};






void myFunction(bool recursion)   //function
{

    //Variables
    int varInteger1 = 130;
    double varDouble1 = 12.5;    //15 decimals for double
    double varDouble2 = 5.3;
    char varChar1 = 'C';
    string varString1 = "String";
    bool varBool1 = true;
    int varInteger2 = 10, varInteger3 = 3;  //Multiple declarations
    int varArray1[10] = {0,1,2,3,4,5,6,7,8,9};

    //Constants
    const float PI = 3.14;  //7 decimals for float

    //String concatenation
    string varString2 = "Another";
    string varStrings = varString2 + varString1;    //AnotherString (cout)
    varStrings = varString2.append(varString1);     //AnotherString (cout)
    cout << varStrings.size() << endl;      //These two get
    cout << varStrings.length() << endl;    //the size of the string

    //Special characters
    cout << "We are the so-called \"Vikings\" from the north." << endl;
    // Put '\' before special character
    // \n = new line | \t = tab

    //getline() gets the whole line from the input
    //cin is getting all until space/tab is pressed

    //getline(cin, varStrings);
    cout << varStrings << endl;
    //cin >> varStrings;
    cout << varStrings << endl;

    //Math - #include <cmath>
    cout << min(varInteger1,varInteger2) << endl;
    cout << sqrt(varInteger1) << endl;
    cout << round(varDouble1) << endl;
    cout << log(varInteger3) << endl;

    //Ternary operator
    varBool1 = (10 < 9) ? true : false;
    cout << varBool1 << endl;

    //Switch
    switch(varInteger1)
    {
    case 128:
        cout << 128 << endl;
        break;
    case 129:
        cout << 129 << endl;
        break;
    default:
        cout << '?' << endl;
    }

    //Foreach
    for (int v : varArray1)
    {
        if (v<4 || v>4){
            continue;   //continues to the next item if v != 4
        }
        cout << v << endl;
    }

    //Multi-dimensional array
    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };
    for (int i=0; i<2; i++)
    {                           //nested for loop
        for(int j=0; j<4; j++)
        {
            cout << letters[i][j] << endl;
        }
    }

    //Structures
    /*Structures (also called structs) are a way to group several
    related variables into one place. Each variable in the structure is
    known as a member of the structure.*/

    struct {             // Structure declaration
      int myNum;         // Member (int variable)
      string myString;   // Member (string variable)
    } myStructure;       // Structure variable

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    /*By giving a name to the structure, you can treat it as a data type.
    This means that you can create variables with this structure anywhere
    in the program at any time.*/

    struct car {
    string brand;
    string model;
    int year;
    };

    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    //References and pointers
    string &brand = myCar1.brand;
    cout << myCar1.brand << endl;
    brand = "Mercedes";
    //if the reference gets modified the variable that is referenced gets
    //modified also
    cout << &brand << endl; //is outputting the address
    string* myPointer1 = &brand;//the pointer now has the address of the var brand
    cout << *myPointer1 << endl;//outputs the actual data from where the pointer is
    cout << &myPointer1 << endl;//outputs the address of the pointer
    *myPointer1 = "BMW";    //edits the value where the pointer is
    cout << brand << endl;

    //Calling function with parameters
    cout << myAddFunction(1,2) << endl;
    myDefParFunction(2);    //outputs 2
    myDefParFunction();     //outputs 1 because of the default value

    //Calling function with passed references
    cout << varInteger1 << " " << varInteger2 << endl;
    swapNums(varInteger1,varInteger2);
    cout << varInteger1 << " " << varInteger2 << endl;//values after swap
    swapNums(varInteger1,varInteger2);

    //FunctionOverloading
    //calling the function add with var double
    cout << myAddFunction(varDouble1, varDouble2) << endl;

    //Recursion
    if(recursion == false)
    {
        recursion = true;
        myFunction(recursion);   //call function one more time || recursion
    }

    //Classes
    myClass1 myObj1(3);
    myObj1.myFunction();

    //Access specifier
    //public | private | protected

    //Inheritance
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model << endl;

    //Polymorphism
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

    //Files
        // Create and open a text file
    ofstream MyFile("testFile1.txt");
        // Write to the file
    MyFile << "This is what i write in the file!";
        // Close the file
    MyFile.close();
    //if you don't close the file, the next thing that need access to the file won't get it
        // Read from the file
    ifstream MyReadFile ("testFile1.txt");
    while (getline(MyReadFile,varString1))
    {
        cout << varString1 << endl;
    }
        // Close the file
    MyReadFile.close();

    //Exceptions
    int age = 18;
    try
    {
        if (age >= 18)
        {
            cout << "Access granted" << endl;
        }else
        {
            throw (age);
        }
    }
    catch (int myNum)   //you can use catch (...) for any type of exception
    {
        cout << "Access denied" << endl;
        cout << myNum << endl;
    }

    //Vectors
    vector <int> numbers;
    numbers.push_back(30);
    numbers.push_back(29);
    numbers.push_back(28);
    numbers.pop_back();

    for (int i: numbers)
    {
        cout << i << endl;
    }

    //Stacks
    stack <int> plates;
    plates.push(10);
    plates.push(9);
    plates.push(8);
    plates.pop();
    cout << plates.top() << endl;
    cout << plates.size() << endl;

    //Queue
    queue <string> line;
    line.push("Amy");
    line.push("Bella");
    line.push("Chloe");
    cout << line.front() << endl;
    line.pop();
    cout << line.front() << endl;

    //Unordered set
    unordered_set <int> primes({2, 3, 5, 7});
    primes.insert(3);   //duplicate value is not inserted
    primes.erase(3);
    //search for an element in a set
    cout << primes.count(2) << endl;


    std::unordered_set<int> unordered({4, 2, 7, 1, 3});
    std::cout << "unordered_set: ";
    for(int n: unordered) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    //Ordered set
    std::set<int> ordered({4, 2, 7, 1, 3});
    std::cout << "set: ";
    for(int n: ordered) {
    std::cout << n << " ";
    }
    std::cout << "\n";

    //Hash maps
    unordered_map <string, int> country_codes
    ({{"India", 91}, {"Italy", 39}});
    country_codes.insert({"Thailand", 66}); //adding to the map
    country_codes["Thailand"] = 65; //modifying
    //checking for element
    cout << country_codes.count("Thailand") << endl;
    cout << country_codes["Thailand"] << endl;  //gives the data
    cout << country_codes.at("Thailand"); //used for error out_of_range
    cout << endl;
    //iterating through
    for (auto it: country_codes)
    {
        cout << it.first << " " << it.second << endl;
    }
    //Ordered hash map orders by key
}


int main()
{
    myFunction(true);   //call function 2 times if recursion is false
    return 0;
}
