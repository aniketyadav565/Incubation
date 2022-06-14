#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    //read input file path
    string ipath;
    cout<<"Enter Input File Path"<<endl;
    cin>>ipath;

    //count no of lines in file
    ifstream IFile;
    IFile.open(ipath);
    string line;
    int count=0;
    while (getline(IFile, line))
        count++;
    IFile.close();
    
    //store the data to 2d array
    IFile.open(ipath);
    float ar[count][2];
    int i=0,j=0;
    while(IFile>>ar[i][j]){
        if(j==1){i++;j=0;}
        else j++;
    }
    IFile.close();
    
    //sort the data using vector
    vector< pair <float,float> > vect;
    for (int m = 0; m < count; m++){
        vect.push_back(make_pair(sqrt((ar[m][0]+ar[m][1])),m));
    }
    sort(vect.begin(),vect.end());

    //get output file path
    cout<<endl;
    cout<<"Enter Output File Path"<<endl;
    string opath;
    cin>>opath;

    //store results
    ofstream OFile(opath);
    for (int i=0; i<count; i++){
        for (int j=0; j<2; j++){
            OFile << ar[(int)vect[i].second][j] << " ";
        }
        OFile<<endl;
    }
    return 0;
}