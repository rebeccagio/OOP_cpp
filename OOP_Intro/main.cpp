#include<iostream>
#include<cmath>
using namespace std;


void oz_conversion();
void babylonian_algo();

int main(){
    oz_conversion();
    babylonian_algo();
    return 0;

}

void oz_conversion(){
    /*
    A metric ton is 35,273.92 ounces. Write a program that will read the weight
    of a package of breakfast cereal in ounces and output the weight in metric
    tons as well as the number of boxes needed to yield 1 metric ton of cereal.
    Your program should allow the user to repeat this calculation as often as
    the user wishes. */
    
    cout << "################ 1. OZ Conversion #####################" << endl;
    double t_oz = 35273.92;
    double ton = 1;
    double weight;
    double result;

    cout << "Enter cereal box weight (oz): ";
    cin >> weight;

    result = weight / t_oz;
    
    cout << "Ceral box = " << result << " tons"<< endl;
    
    result = t_oz/ weight;
    
    cout << "This many cereal boxes would equal 1 ton: " << result << " tons"<< endl;
    cout << "End of Problem 1" << endl;
}

void babylonian_algo(){
    /*
    The Babylonian algorithm to compute the square root of a number n is as
    follows:
     1. Make a guess at the answer (you can pick n/2 as your initial guess).
     2. Compute r = n / guess
     3. Set guess = (guess + r) / 2
     4. Go back to step 2 for as many iterations as necessary. The more that
    steps 2 and 3 are repeated, the closer guess will become to the square
    root of n.
    Write a program that inputs a double for n and iterates through the
    Babylonian algorithm 100 times. */
        
    cout << "################ 2. Babylonian Algorithm #####################" << endl;
    double n;
    
    cout << "Enter n: ";
    cin >> n;
    
    double answer = sqrt(n);
    double guess = n/2;
    cout << "Step 1: " << guess << endl;
    
    int i = 0;
    while(i <= 100){
        cout << "i = " << i << endl;
        double r = n/guess;
        cout << "Step 2: " << r << endl;
        guess = (guess + r)/2;
        cout << "Step 3: " << guess << endl;
        i++;
    }
    
    cout << "Answer = " << guess << endl;
    cout << "End of Problem 2" << endl;
}

