/* 
* PROGRAM :: ASCII ART GENERATOR
* DATE    :: 22/04/2023
* AUTHOR  :: RAHUL MISTRY, MELITA CASTELINO, DEVANSHI DAVE
* ID NO   :: 22CS042, 22CS013, 22CS018
*/

//! Header File
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define read(n) for(int i = 0; i < n; i++){cin >> arr[i]}
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

void asciiart_normal(){
    // take string as a input
    string s;
    cout<<"Enter text:";
    getline(cin, s);
    //loop will print first layer
    for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<"/ /_\\ \\ ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<"| |_/ / ";
        if (input[i] == 'C' || input[i] == 'c')
            cout<<"| /  \\/ ";
        if (input[i] == 'D' || input[i] == 'd')
            cout<<"| | | | ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<"| |__   ";
    
}
}


void asciiart_italic(){

}

void asciiart_bold(){

}

//! Main Program
int main(){
    while(1){
        asciiart_normal();
    }
}