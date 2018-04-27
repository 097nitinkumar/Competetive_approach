/*
#__________________________________________________________#
#Generated by:                                NITIN KUMAR  #
#                                             ASET,BIJWASEN#
#__________________________________________________________#
*/

#define EB emplace_back
//emplace_back is faster than push_back
#define NL cout<<"\n"
#undef NL
#defien NL putchar_unlocked(\n)
//"\n" is faster than endl as endl has fflush included
#define PB push_back
#define MP make_pair

#define GCD(x,y) __gcd(x, y)
//Buildin function to find hcf
#define LCM(x,y) x*y/__gcd(x, y)
//Buildin function to find lcm

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

#define ll long long
#define ull unsigned ll
#define MOD 1000000007
#define VI vector <int>
#define SI set<int>
#define VLL vector <ll>
#define VS vector <string>
//LOOPS
//handels all data types,even pointers
#define FOREACH(i,t) for (__typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
//pointer other than int data type is not possible,and can itterate only max range of unsized int
#define FOR(i,a,b) for(size_t (i)=(a);(i)<=(b);++i)
///USE:FOR(i,0,N) cin >> a[i];
#define FOR_(i,a,b) for(size_t (i)=(a); (i)>=(b);--i)
#define REP(i,n) FOR(i,0,n)
#define REPD_(i,n) FOR_(i,n,0)
#define trav(a, x) for (auto& a : x)
////USE:{ trav(x, v) cout << x << ' '; cout << endl; }
//LOOPS

#define gchu(c) (c)=getchar_unlocked()
#define pchu(c) putchar_unlocked(c)
//MAX OR MIN,ABS
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define MAX(i, j) (((i) > (j)) ? i : j)
#define MIN(i, j) (((i) < (j)) ? i : j)
//cout << "The maximum is " << MAX(a, b) << endl;
#define sz(x) (int)(x).size()
/////////////////////////////////////////////////////////////////////typedef complex<Real> P;
#define B begin()
#define E end()
#define UB upper_bound
#define ALL(x) (x).begin(),(x).end()


//2-D vector
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
//2-D vector
#define scl(x) scanf("%lld",&x)
#define sc(x)  scanf("%d",&x)


///////////////////////////////////////////////////#define lson k<<1
///////////////////////////////////////////////////#define rson k<<1|1
///////////////////////////////////////////////////cin.sync_with_stdio(false);
///////////////////////////////////////////////////cin.exceptions(cin.failbit);

#define concat(a, b) a##b
/*
    int xy = 30;
    printf("%d", concat(x, y));
*/
//i##nt becomes int


//for c only maybe
#define PRINT(x) (#x)
//conevrts i to string and prints "i" excluding ""
//printf("%s\n",PRINT(i));

//macros taking variable__doubt
//https://www.geeksforgeeks.org/variable-length-arguments-for-macros/
//Doubt
//https://www.geeksforgeeks.org/crash-macro-interpretation/
//And hence next doubt due to it,https://www.geeksforgeeks.org/the-offsetof-macro/
//Doubt https://www.geeksforgeeks.org/branch-prediction-macros-in-gcc/



///debug for c
/*
#define __debug(var) printf("%s:%d", #var,var)
	int myVar=100;
	__debug(myVar);
*/
//for c++ 
#define __debug(var) cout<<#var<<":"<<var<<"\n"
#define DBUG(var) __debug(var)

//doubt https://www.geeksforgeeks.org/tmpnam-function-c/
//doubt https://www.geeksforgeeks.org/_generic-keyword-c/


//IMP NOTE:all the functions of header file math/math.h in C/C++ 
//take arguments as double and retrun answer in double data type
//so make sure to convert them in desired data type explictly
#define PI 3.14159265
/*
 val = PI / 180.0;//imporant
 ret = cos( x*val );
*/

/*
val = 180.0 / PI;//imporant
ret = acos(x) * val;
*/
