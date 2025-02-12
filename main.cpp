#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
int
float
bool
char
double
unsigned int
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int add = 1;
    int age = 28;

    float kilos = 26.6f;
    float height = 1.76f;
    float speed = 105.f;
    
    bool isRed = false;
    bool hasSound = true;
    bool isEmpty = false;

    char nameInitial = 'R';
    char city = 'M';
    char grade = 'C';

    double pi = 3.1415926535897932;
    double epsilon = 2.71828182845904523;
    double x = 3.912348239293;

    unsigned int daysPassed = 345;
    unsigned int timeMinutes = 300;
    unsigned int numWordsRead = 1002;
    
    ignoreUnused(number, add, age, kilos, height, speed, isRed, hasSound, isEmpty, nameInitial, city, grade, pi, epsilon, x, daysPassed, timeMinutes, numWordsRead);
    
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 The function sum two numbers
 */
 int sumTwoIntegers(int numA, int numB)
{
    ignoreUnused(numA, numB);
    return {};
}
    
/*
 2)
The function prints on the screen an introduction of myself
 */
void introduction()
{
    
}

/*
 3)
The function returns the letter of the alphabet with the indicated position
 */
char alphabetLetter(int numLetter = 1)
{
    ignoreUnused(numLetter);
    return {};
}

/*
 4)
The function checks if the number is prime.
 */
bool checkIfPrimeNumber(int n)
{
    ignoreUnused(n);
    return {};
}
/*
 5)
The function returns the number in a binary form
 */
int convertToBin(int num)
{
    ignoreUnused(num);
    return {};
}

/*
 6)
The function returns the youngest child.
 */
int youngestChild(int ageChild1, int ageChild2, int ageChild3)
{
    ignoreUnused(ageChild1, ageChild2, ageChild3);
    return {};
}

/*
 7)
The function returns if there is chocolate in the fridge.
 */
bool eatChocolate(int ouncesConsumed, int totalOunces)
{
    ignoreUnused(ouncesConsumed, totalOunces);
    return {};
}
/*
 8)
 */
void buyObjectOnAmazon(int idObject, int quantityObjects)
{
    ignoreUnused(idObject, quantityObjects);
}

/*
 9)
 */
float numSecondsDuringLunch(float entryHourInSecods, float exitHourInSecods)
{
    ignoreUnused(entryHourInSecods, exitHourInSecods);
    return {};
}

/*
 10)
 */
unsigned int max(unsigned int num1, unsigned int num2)
{
    ignoreUnused(num1, num2);
    return {};
}


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto result = sumTwoIntegers(2, 3);
    //2)
    introduction();
    //3)
    auto letter = alphabetLetter(9);
    //4)
    auto isPrime = checkIfPrimeNumber(7);
    //5)
    auto binary = convertToBin(1024);
    //6)
    auto youngAge = youngestChild(10, 12, 4);
    //7)
    auto allowEat = eatChocolate(4, 10);
    //8)
    buyObjectOnAmazon(1234, 10);
    //9)
    auto numSecs = numSecondsDuringLunch(1800, 2700);
    //10)
    auto maxNumber = max(478393902, 785475389);
    
    ignoreUnused(carRented, result, letter, isPrime, binary, youngAge, allowEat, numSecs, maxNumber);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
