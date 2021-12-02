#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


int main(){
    ifstream inFile;

    inFile.open("numbers.csv");
    vector<int> numbersRead;
    int num;
    int count = 0;
    int increasing = 0;
    if(inFile.is_open()){
        while(!inFile.eof()){
            inFile >> num;
            //cout << num << endl;
            numbersRead.push_back(num);
        }
        //PART A
        for(int i = 0; i < numbersRead.size(); i++)
        {
            if(numbersRead[i] > numbersRead[i-1])
            {
                count+=1;
            }
        }
        cout <<"Count: " << count << endl;

        // PART B
        for(int i = 0; i < numbersRead.size(); i++)
        {
            int current; 
            int next;
            
            current = numbersRead[i] + numbersRead[i+1] + numbersRead[i+2];
            next = numbersRead[i+1] + numbersRead[i+2] + numbersRead[i+3];
            if(next > current){
                increasing+=1;
            }
        }
        cout << "Increasing Number: " <<increasing <<endl;
    } else {
        cout << "File was not opened!" <<endl;
    }

    
    inFile.close();
    return 0;
}