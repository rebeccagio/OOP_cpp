#include<iostream>
#include<cmath>
using namespace std;


void oz_conversion();
void babylonian_algo();
void mph_conversion();

int main(){
    oz_conversion();
    babylonian_algo();
    mph_conversion();
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
    double weight;
    double result;

    cout << "Enter cereal box weight (oz): ";
    cin >> weight;

    result = weight / t_oz;
    
    cout << "cereal box = " << result << " tons"<< endl;
    
    result = t_oz/ weight;
    
    cout << "This many cereal boxes would equal 1 ton: " << result << " tons"<< endl;
    cout << "End of Problem #1" << endl;
}

void babylonian_algo(){
/*
The Babylonian algorithm to compute the square root of a number n is as
follows:
 1. Make a guess at the answer (you can pick n/2 as your initial guess).
 2. Compute r = n / guess
 3. Set guess = (guess + r) / 2
 4. Go back to step 2 for as many iterations as necessary.The more that
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
    cout << "End of Problem #2" << endl;
}

void mph_conversion(){
    
/*
Many treadmills output the speed of the treadmill in miles per hour
(mph) on the console, but most runners think of speed in terms of a pace.
A common pace is the number of minutes and seconds per mile instead
of mph.
 
Write a program that starts with a quantity in mph and converts the
quantity into minutes and seconds per mile. As an example, the proper
output for an input of 6.5 mph should be 9 minutes and 13.8 seconds per
mile. If you need to convert a double to an int, which will discard any
value after the decimal point, then you may use
intValue = static_cast<int>(dblVal); */
    
    
/*
    60 min
    ____       =   ____.00 min
    6.5 miles
 
    60 sec    x   0.___ min
    ______
    1 min

 */
    cout << "################ 3. MPH Conversion #####################" << endl;
    
    double mph, seconds, dblValMin, dblValSec;
    int minute;
    
    
    cout << "Enter quantity in mph: ";
    cin >> mph;
    
    // convert mph to min
    // 60 min / mile
    dblValMin = 60/mph;
    minute = static_cast<int>(dblValMin);
    cout << "minute = " << minute << endl;
    dblValSec = dblValMin - minute;
    
    seconds = 60 * dblValSec;
    cout << "seconds = " << seconds << endl;
    cout << mph << " mph = " << minute << " minute(s) and " << seconds << " seconds per mile" << endl;
    
    cout << "End of Problem #3" << endl;
}
