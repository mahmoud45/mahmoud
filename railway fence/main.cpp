#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <iterator>
#include <string.h>
using namespace std;

int main()
{
while(true){
cout<<"Ahlan ya user ya habibi. \n";
cout<<"What do you like to do today? \n";
cout<<"1- Cipher a message \n";
cout<<"2- Decipher a message \n";
cout<<"3- End \n";
cout<<">>";
float n;
cin>>n;
if(n==2){
string x;
cout<<"enter text to decipher \n";
cin.ignore();
getline(cin,x);
char y[x.length()];
int i=0;
int j=0;
while(i<x.length()){
    if(x.at(i)!=' '){
        y[j]=x.at(i);
        j++;
    }
    i++;
}
    y[j]='\0';
int key;
int row=0;
int column=0;
int dir=-1;
int h=0;
cout<<"enter key \n";
cin>>key;
if(key==0 || key>j){
        cout<<"u can't use this key";
        return 0;
    }
    if(key==1){
        cout<<y;
        return 0;
    }
char z[key][j];
for(int i=0;i<key;++i){
    for(int k=0;k<j;++k){
        z[i][k]=' ';
    }
  }
for(int i=0;i<j;++i){
    z[row][column]='_';
    if(row==0 || row==key-1)
        dir=dir*(-1);
    row=row+dir;
    column++;
}
for(int i=0;i<key;++i){
    for(int k=0;k<j;++k){
        if(z[i][k]=='_')
            z[i][k]=y[h++];
    }
}
column=row=0;
 dir=-1;
 for(int i=0;i<j;++i){
     cout<<z[row][column];
     if(row==0 || row==key-1)
         dir=dir*(-1);
     row=row+dir;
     column++;
 }
 cout<<endl<<endl;
}
if(n==1){
    string x;
    cout << "enter text to cipher \n";
    cin.ignore();
    getline(cin,x);
    char y[x.length()];
    int i=0;
    int j=0;
    while(i<x.length()){
        if(x.at(i)!=' '){
            y[j]=x.at(i);
            j++;
        }
        i++;
    }
        y[j]='\0';
    int key;
    int row=0;
    int dir=-1;
    int h=0;
    cout<<"enter key \n";
    cin>>key;
   if(key==0 || key>j){
        cout<<"u can't use this key";
        return 0;
    }
    if(key==1){
        cout<<y;
        return 0;
    }
    char z[key][j];
    for(int i=0;i<key;i++){
        for(int l=0;l<j;l++){
            z[i][l]=' ';
        }
    }
    for(int col=0;col<j;col++){
        z[row][col]=y[h];
        if(row==0 || row==key-1){
            dir=dir*(-1);
        }
        row=row+dir;
        h++;
        }
    for(int m=0;m<key;m++){
        for(int n=0;n<j;n++){
            if(z[m][n]!=' ')
                cout<<z[m][n];
    }
  }
  cout<<endl<<endl;
}if(n==3){
    break;
}
    while(n<=0 || n>3 || n!=1 || n!=2){
        cout<<"This option does not exist "<<endl<<endl;
        break;
}
}
}




