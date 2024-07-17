#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st no. : ";
    cin>>a;
    cout<<"Enter 2nd no. : ";
    cin>>b;
    cout<<(a>b?a:b);
    return 0;
}

//                        2 Solution

#include<iostream>
using namespace std;
int main(){
    double radius, area, circumference;
    cout<<"Enter the radius of the circle : ";
    cin>>radius;
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    if(area > circumference){
        cout<<"The area is larger than the circumference.";
    }
    else{
        cout<<"The circumference is larger than the area.";
    }
    return 0;
}

//                         3 Solution

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    if(year % 4 == 0){
        if(year % 100 != 0 || year % 400 == 0){
            cout<<"The year "<<year<<" is a leap year.";
        }
        else{
            cout<<"The year "<<year<<" is not a leap year.";
        }
    }
    else{
        cout<<"The year "<<year<<" is not a leap year.";
    }
    return 0;
}

//                         4 Solution

#include<iostream>
using namespace std;
int main(){
    int length, breadth, area, perimeter;
    cout<<"Enter the length : ";
    cin>>length;
    cout<<"Enter the breadth : ";
    cin>>breadth;
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if(area > perimeter){
        cout<<"The area is greater than the perimeter.";
    }
    else{
        cout<<"The perimeter is greater than the area.";
    }
    return 0;
}

//                          5 Solution

#include<iostream>
using namespace std;
int main(){
    int side1, side2, side3;
    cout<<"Enter the length of side 1 : ";
    cin>>side1;
    cout<<"Enter the length of side 2 : ";
    cin>>side2;
    cout<<"Enter the length of side 3 : ";
    cin>>side3;
    if(side1 == side2 && side2 == side3){
        cout<<"The triangle is an equilateral triangle.";
    }
    else if(side1 == side2 || side2 == side3 || side3 == side1){
        cout<<"The triangle is an isosceles triangle.";
    }
    else{
        cout<<"The triangle is a scalene triangle.";
    }
    return 0;
}

//                       6 Solution

#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the marks of student A: ";
    cin>>a;
    cout<<"Enter the marks of student B: ";
    cin>>b;
    cout<<"Enter the marks of student C: ";
    cin>>c;
    if(a < b && a < c){
        cout<<"Student A scores the least marks.";
    }
    else if(b < a && b < c){
        cout<<"Student B scores the least marks.";
    }
    else{
        cout<<"Student C scores the least marks.";
    }
    return 0;
}

//                        7 Solution

#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter the coordinates (x, y): ";
    cin>>x>>y;
    
    if(x == 0 && y == 0){
        cout<<"The point lies at the origin (0, 0).";
    }
    else if(x == 0){
        cout<<"The point lies on the y-axis.";
    }
    else if(y == 0){
        cout<<"The point lies on the x-axis.";
    }
    else{
        cout<<"The point does not lie on the x-axis, y-axis, or at the origin.";
    }
    return 0;
}

//                         8 Solution

#include<iostream>
using namespace std;
int main(){
    int x1, x2, x3, y1, y2, y3;
    cout<<"Enter the coordinates of three points (x1, y1), (x2, y2) and (x3, y3): ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if((y2-y1)*(x3-x1) == (y3-y1)*(x2-x1)){
        cout<<"All three points are collinear.";
    }
    else{
        cout<<"The three points are not collinear.";
    }
    return 0;
}

//                            9 Solution

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        cout<<"The character is an alphabet.";
    }
    else if(ch >= '0' && ch <= '9'){
        cout<<"The character is a digit.";
    }
    else{
        cout<<"The character is a special character.";
    }
    return 0;
}

//                         10 Solution

#include<iostream>
using namespace std;
int main() {
int a = 500, b, c;
if (a >= 400)
b = 300;
c = 200;
cout << "value of b and c are respectively " << b << " and " << c;
return 0;
}                                 //  value of b and c are respectively 300 and 200
