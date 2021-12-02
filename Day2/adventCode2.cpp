#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string movements;
    int numOfMovement;
    int total = 0;
    int depth = 0;
    int aim = 0;
    ifstream inFile;
    inFile.open("movement.csv");

    while (inFile >> movements >> numOfMovement){
        if(movements == "forward"){
            depth = depth +(aim * numOfMovement);
            total += numOfMovement;
        }
        if(movements == "up")
        {
            aim -= numOfMovement;
            //depth += numOfMovement;
        }
        if(movements == "down")
        {
            aim +=numOfMovement;
            //depth -= numOfMovement;
        }
    }
    //if output is negative just     remove negative sign
    cout << depth * total <<endl;

    

}