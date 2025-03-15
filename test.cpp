// #include<iostream>
// using namespace std;
// int main()
// {
//  int n;
//  cout << "enter your age:";
//  cin >> n ;
//  cout << "your age is: " << n;
//  return 0;
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     string mode = "hello";
//     string dog = "world";
//     string variable1 = "Hello World";
//     int a = 3;
//     int b = 4;
//     cout << pow(a,b) << endl;
//     cout << sqrt(b) << endl ;
//     cout << max(a,b) << endl;
//     dog[1] = 'i';
//     variable1[1] = 'i';
// cout << variable1 << endl ;
//     cout << dog << endl;
//     cout << mode.append(dog) << endl;
//     cout << mode.length();
//  return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {    
//    string sarr[3] = {"flower","flow","flor"};
//    sarr[2] = "abebe";
//    cout << sarr[2];

//  return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     double r;
//     const double  pi = 3.14;
//     cout << "enter the radius:" ;
//     cin >> r;
//     double ans = pi*r*r;
//     cout << "the radius of the circle is:" << ans << endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     double a,b ; 
//     cout << "enter the first numberand second number " << endl;
//     cin >> a ;
//     cin >> b ;
//     cout << "the sum of the two number is " << a+b <<endl;
//     cout << "the differnce  of the two number is " << a-b <<endl;
//     cout << "the product of the two number is " << a*b <<endl;
//     cout << "the div of the two number is " << a/b <<endl;


//  return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a ;
//     cout << "enter the number:";
//     cin >> a;
//     if(a>0){
//         cout << "yes your number is positive" << endl;
//     }
//     else if (a==0){
//         cout << "you have enterd 0";
//     }
//     else{
//         cout << "you have enterd negative number";
//     }
//  return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout << "enter the number:";
//     cin >> a;
//     if(a!=0){
//         if (a%2==0){
//             cout << "it is even";
//         }
//         else{
//             cout << " it is odd ";
//         }
//     }
//     else{
//         cout <<  "the number you have enterd is nither even nor odd";
//     }
//  return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout << "enter the first number";
//     cin >> a;
//     cout << "enter the second number";
//     cin >> b;
//     cout << "enter the last number";
//     cin >> c;
//     if (a>b && a>c){
//         cout << "a is greather";
//     }
//     else if (b>a && b>c){
//         cout << "b is greather";
//     }
//     else{
//         cout << "c is greather";
//     }
//  return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;
//     int sum = 0;
//     for(i ; i<=10 ; ++i){
//          sum += i ;
//     }
//     cout << sum;
//  return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;
//     int factorial = 1;
//     for ( i=4; i>=1; --i ){
//      factorial*=i;
//     }
//     cout << factorial;
//  return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 4;
//     int factroial = 1;
//     while(a>0){ 
//         factroial*=a;
//         --a;
//     }   
//     cout << factroial;
//  return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int a = 0;
   int sum = 0 ;

    do{
     sum += a;
     ++a;
    }
    while (a<=10);
    cout << sum;
 return 0;
}