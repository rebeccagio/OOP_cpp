#include<iostream>
#include<cmath>
using namespace std;


void oz_conversion();
void babylonian_algo();

int main(){
    //oz_conversion();
    babylonian_algo();
    return 0;

}

void oz_conversion(){
    //so in the code it would look like this

    double t_oz = 35273.92;
    double ton = 1;
    double weight;
    double result;

    // 1 ton       20oz
    // _____   x           =
    // 35k oz
    
    
//    1             // 1 ton
//    ---       =   // _____
//    20 oz         // 35k oz
    
    
    // 35273.92 oz      0.000566991 tons
    // _____        x   ______               =   ______
    // 1 ton            20oz

    cout << "Enter cereal box weight (oz): ";
    cin >> weight;

    result = weight / t_oz;
    
    cout << "Ceral box = " << result << " tons"<< endl;
    
    result = t_oz/ weight;
    
    cout << "This many cereal boxes would equal 1 ton: " << result << " tons"<< endl;
    // HOW MANY CEREAL BOXES FOR 1 TON
}

void babylonian_algo(){
    // looking for the sqrt of n
    // ex: sqrt(25) = 5
    
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
}

