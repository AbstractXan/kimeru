#include "kimeru.hpp"
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main(){
    ifstream myFile("input.txt");
    while(myFile.is_open()){
        string line;
        while( getline(myFile,line)){
            
            int lsize = line.size();
            for(int i=0 ; i<lsize; i++){
                
                // skip unnecessary whitespace
                while(line[i]=" ")
                {i++;}

                if( i<lsize-1 && line[i]=='@' && line[i+1]=='@')
                {kimeru::parseTemplate()}
                //Give parsing control to Kimeru?
                //Sol: send file and index references

            }
        }
    }
}
