#include <iostream>
#include <cmath>
#include <conio.h>
#include <cstdio>
using namespace std;
void drawTriangle();
void drawCircle();

int main(){
    drawCircle();
    drawTriangle();
    cout<<"\nEnter any key to close...........\n";
    getch();
}
void drawCircle(){
    //----------------------------------CIRCLE------------------------------//
    cout <<"//----------------------------------CIRCLE------------------------------//"<<endl;
    int RAD;
    cout<<"Enter your desire RAD : ";
    cin>>RAD;

    // tolerance
    int TOL;
    cout<<"Enter your desire Populate : ";
    cin>>TOL;
    for(int x = -RAD; x <= RAD; x++)
    {
        for(int y = -RAD; y <= RAD; y++)
        {
            int eq = x*x + y*y - RAD * RAD;
            printf(abs(eq) < TOL ? "*" : " ");
        }
        printf("\r\n");
    }
    cout << "\u0394\n";
    //----------------------------------CIRCLE------------------------------ENDs//
}
void drawTriangle(){
    //----------------------------------TRIANGLE------------------------------//
    cout <<"//----------------------------------TRIANGLE------------------------------//"<<endl;
    int space, rows;
    cout <<"Enter number of rows: ";
    cin >> rows;
    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }
        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    //----------------------------------TRIANGLE------------------------------ENDs//
}
