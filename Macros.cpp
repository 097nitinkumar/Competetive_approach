/*
#__________________________________________________________#
#Generated by:                                NITIN KUMAR  #
#                                             ASET,BIJWASEN#
#__________________________________________________________#
*/
#define EB emplace_back
//emplace_back is faster than push_back
#define NL cout<<"\n"
//"\n" is faster than endl as endl has fflush included
#define GCD(x,y) _gcd(x, y)
//Buildin function to find hcf
#define CPYAR(Arr,x,Arr1) copy_n(Arr, x, Arr1)
//copy x elements from Arr to Arr1
// Using iota() to assign values
#define GIVE(Arr,y,z)  iota(Arr, Arr+y, z);
//assign values to array Arr starting from z next element having +1 value upto y elements

//auto number = 0b011;//binary 
//are all of the elements positive?
//all_of(first, first+n, ispositive()); 
//is there at least one positive element?
//any_of(first, first+n, ispositive());
//are none of the elements positive?
//none_of(first, first+n, ispositive()); 
/////////////////////////swap///////////////////////////
//a ^= b;
//b ^= a;
//a ^= b;
////////////////////////////////////////////////////////
/*
n = n << 1;   // Multiply n with 2
n = n << p;   // Multiply by 2^p
n = n >> 1;   // Divide n by 2
n = n >> p;   // Divide n by 2^p
*/
/*
//EVEN OR ODD
if (num & 1)
   cout << "ODD";
else
   cout << "EVEN";
*/
#define vector <int> VI
#define vector <long long> VLL
#define vector <string> VS
#define long long ll
#define unsigned long long ull
#define MIN(a,b) a=min((a),(b))
#define MAX(a,b) a=max((a),(b))
/////////////////////////////////////////////////////////////////////typedef complex<Real> P;
#define B begin()
#define E end()

/*
Approach 1
//int no_of_cols = 5;
//int no_of_rows = 10;
//int initial_value = 0;
#define vector<vector<int>> VVI 
//VVI matrix;
//matrix.resize(no_of_rows, vector<int>(no_of_cols, initial_value));
*/

/*
Approach 2
vector<vector<int>> matrix;
//initialize the 1D vector you would like to insert into matrix
vector<int> row;
//initializing row with values
row.push_back(val1);
row.push_back(val2);
//now inserting values into matrix
matrix.push_back(row);
*/
