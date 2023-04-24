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
    string input;
    cout<<"Enter text: ";
    getline(cin, input);
    //loop will print first layer
    for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<"  ___   ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<" _____  ";
        if (input[i] == 'C' || input[i] == 'c')
            cout<<" _____  ";
        if (input[i] == 'D' || input[i] == 'd')
            cout<<" _____  ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<" _____  ";
        if (input[i] == 'F' || input[i] == 'f')
            cout<<" _____  ";
        if (input[i] == 'G' || input[i] == 'g')
            cout<<" _____  ";
        if (input[i] == 'H' || input[i] == 'h')
            cout<<" _   _  ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<" _____  ";
        if (input[i] == 'J' || input[i] == 'j')
            cout<<"   ___  ";
        if (input[i] == 'K' || input[i] == 'k')
            cout<<" _   __ ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<" _      ";
        if (input[i] == 'M' || input[i] == 'm')
            cout<<" __  __  ";
        if (input[i] == 'N' || input[i] == 'n')
            cout<<" _   _  ";
        if (input[i] == 'O' || input[i] == 'o')
            cout<<" _____  ";
        if (input[i] == 'P' || input[i] == 'p')
            cout<<" _____  ";
        if (input[i] == 'Q' || input[i] == 'q')
            cout<<" _____  ";
        if (input[i] == 'R' || input[i] == 'r')
            cout<<" _____  ";
        if (input[i] == 'S' || input[i] == 's')
            cout<<" _____  ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<" _____  ";
        if (input[i] == 'U' || input[i] == 'u')
            cout<<" _   _  ";
        if (input[i] == 'V' || input[i] == 'v')
            cout<<" _   _  ";
        if (input[i] == 'W' || input[i] == 'w')
            cout<<" _    _  ";
        if (input[i] == 'X' || input[i] == 'x')
            cout<<"__   __ ";
        if (input[i] == 'Y' || input[i] == 'y')
            cout<<"__   __ ";
        if (input[i] == 'Z' || input[i]== 'z')
            cout<<" ______ ";
        if (input[i] == ' ')
            cout<<"  ";
        if (input[i] == '`')
            cout<<" _  ";
        if (input[i] == '~')
            cout<<"      ";
        if (input[i] == '1')
            cout<<" __   ";
        if (input[i]== '2')
            cout<<" _____  ";
        if (input[i]== '3')
            cout<<" _____  ";
        if (input[i] == '4')
            cout<<"   ___  ";
        if (input[i] == '5')
            cout<<" _____  ";
        if (input[i] == '6')
            cout<<"  ____  ";
        if (input[i] == '7')
            cout<<" ______ ";
        if(input[i] == '.')
            cout<<"    ";
        if (input[i] == '8')
            cout<<" _____  ";
        if (input[i] == '9')
            cout<<" _____  ";
        if (input[i] == '0')
            cout<<" _____  ";
            if (input[i] == '!')
            cout<<" _  ";
        if (input[i] == '@')
            cout<<"   ____   ";
        if (input[i] == '#')
            cout<<"   _  _    ";
        if (input[i] == '$')
            cout<<"  _   ";
        if (input[i] == '%')
            cout<<" _   __ ";
        if (input[i] == '^')
            cout<<" /\\  ";
        if (input[i] == '&')
            cout<<"         ";
        if (input[i] == '*')
            cout<<"    _     ";
        if (input[i] == '(')
            cout<<"  __ ";
        if (input[i] == ')')
            cout<<"__   ";
        if (input[i] == '-')
            cout<<"         ";
        if (input[i] == '_')
            cout<<"         ";
        if (input[i] == '=')
            cout<<"         ";
        if (input[i] == '+')
            cout<<"        ";
        if (input[i] == '[')
            cout<<" ___  ";
        if (input[i] == '{')
            cout<<"   __ ";
        if (input[i]== ']')
            cout<<" ___  ";
        if (input[i] == '}')
            cout<<"__    ";
        if (input[i] == '|')
            cout<<" _  ";
        if (input[i] == '\\')
            cout<<"__      ";
        if (input[i] == ';')
            cout<<" _  ";
        if (input[i] == ':')
            cout<<"    ";
        if (input[i] == '\'')
            cout<<" _  ";
        if (input[i] == '"')
            cout<<" _ _  ";
        if (input[i] == '<')
            cout<<"   __ ";
        if (input[i] == ',')
            cout<<"    ";
        if (input[i] == '>')
            cout<<"__    ";
        if (input[i] == '/')
            cout<<"     __ ";
        if (input[i] == '?')
            cout<<" ___   ";
    }
    cout<<endl;
    //loop will print second layer
    for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<" / _ \\  ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<"| ___ \\ ";
        if (input[i] == 'C' || input[i] == 'c')
            cout<<"/  __ \\ ";
        if (input[i] == 'D' || input[i] == 'd')
            cout<<"|  _  \\ ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<"|  ___| ";
        if (input[i] == 'F' || input[i] == 'f')
            cout<<"|  ___| ";
        if (input[i] == 'G' || input[i] == 'g')
            cout<<"|  __ \\ ";
        if (input[i] == 'H' || input[i] == 'h')
            cout<<"| | | | ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<"|_   _| ";
        if (input[i] == 'J' || input[i] == 'j')
            cout<<"  |_  | ";
        if (input[i] == 'K' || input[i] == 'k')
            cout<<"| | / / ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<"| |     ";
        if (input[i] == 'M' || input[i] == 'm')
            cout<<"|  \\/  | ";
        if (input[i] == 'N' || input[i] == 'n')
            cout<<"| \\ | | ";
        if (input[i] == 'O' || input[i] == 'o')
            cout<<"|  _  | ";
        if (input[i] == 'P' || input[i] == 'p')
            cout<<"| ___ \\ ";
        if (input[i] == 'Q' || input[i] == 'q')
            cout<<"|  _  | ";
        if (input[i] == 'R' || input[i] == 'r')
            cout<<"| ___ \\ ";
        if (input[i] == 'S' || input[i] == 's')
            cout<<"/  ___| ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<"|_   _| ";
        if (input[i] == 'U' || input[i] == 'u')
            cout<<"| | | | ";
        if (input[i] == 'V' || input[i] == 'v')
            cout<<"| | | | ";
        if (input[i] == 'W' || input[i] == 'w')
            cout<<"| |  | | ";
        if (input[i] == 'X' || input[i] == 'x')
            cout<<"\\ \\ / / ";
        if (input[i] == 'Y' || input[i] == 'y')
            cout<<"\\ \\ / / ";
        if (input[i] == 'Z' || input[i]== 'z')
            cout<<"|___  / ";
        if (input[i] == ' ')
            cout<<"  ";
        if (input[i] == '`')
            cout<<"( ) ";
        if (input[i] == '~')
            cout<<"      ";
        if (input[i] == '1')
            cout<<"/  |  ";
        if (input[i]== '2')
            cout<<"/ __  \\ ";
        if (input[i]== '3')
            cout<<"|____ | ";
        if (input[i] == '4')
            cout<<"  /   | ";
        if (input[i] == '5')
            cout<<"|  ___| ";
        if (input[i] == '6')
            cout<<" / ___| ";
        if (input[i] == '7')
            cout<<"|___  / ";
        if(input[i] == '.')
            cout<<"    ";
        if (input[i] == '8')
            cout<<"|  _  | ";
        if (input[i] == '9')
            cout<<"|  _  | ";
        if (input[i] == '0')
            cout<<"|  _  | ";
        if (input[i] == '!')
            cout<<"| | ";
        if (input[i] == '@')
            cout<<"  / __ \\  ";
        if (input[i] == '#')
            cout<<" _| || |_  ";
        if (input[i] == '$')
            cout<<" | |  ";
        if (input[i] == '%')
            cout<<"(_) / / ";
        if (input[i] == '^')
            cout<<"|/\\| ";
        if (input[i] == '&')
            cout<<"  ___    ";
        if (input[i] == '*')
            cout<<" /\\| |/\\  ";
        if (input[i] == '(')
            cout<<" / / ";
        if (input[i] == ')')
            cout<<"\\ \\  ";
        if (input[i] == '-')
            cout<<"         ";
        if (input[i] == '_')
            cout<<"         ";
        if (input[i] == '=')
            cout<<" ______  ";
        if (input[i] == '+')
            cout<<"   _    ";
        if (input[i] == '[')
            cout<<"|  _| ";
        if (input[i] == '{')
            cout<<"  / / ";
        if (input[i]== ']')
            cout<<"|_  | ";
        if (input[i] == '}')
            cout<<"\\ \\   ";
        if (input[i] == '|')
            cout<<"| | ";
        if (input[i] == '\\')
            cout<<"\\ \\     ";
        if (input[i] == ';')
            cout<<"(_) ";
        if (input[i] == ':')
            cout<<" _  ";
        if (input[i] == '\'')
            cout<<"( ) ";
        if (input[i] == '"')
            cout<<"( | ) ";
        if (input[i] == '<')
            cout<<"  / / ";
        if (input[i] == ',')
            cout<<"    ";
        if (input[i] == '>')
            cout<<"\\ \\   ";
        if (input[i] == '/')
            cout<<"    / / ";
        if (input[i] == '?')
            cout<<"|__ \\  ";
    }
    cout<<endl;
    //loop will print third layer
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
        if (input[i] == 'F' || input[i] == 'f')
            cout<<"| |_    ";
        if (input[i] == 'G' || input[i] == 'g')
            cout<<"| |  \\/ ";
        if (input[i] == 'H' || input[i] == 'h')
            cout<<"| |_| | ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<"  | |   ";
        if (input[i] == 'J' || input[i] == 'j')
            cout<<"    | | ";
        if (input[i] == 'K' || input[i] == 'k')
            cout<<"| |/ /  ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<"| |     ";
        if (input[i] == 'M' || input[i] == 'm')
            cout<<"| .  . | ";
        if (input[i] == 'N' || input[i] == 'n')
            cout<<"|  \\| | ";
        if (input[i] == 'O' || input[i] == 'o')
            cout<<"| | | | ";
        if (input[i] == 'P' || input[i] == 'p')
            cout<<"| |_/ / ";
        if (input[i] == 'Q' || input[i] == 'q')
            cout<<"| | | | ";
        if (input[i] == 'R' || input[i] == 'r')
            cout<<"| |_/ / ";
        if (input[i] == 'S' || input[i] == 's')
            cout<<"\\ `--.  ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<"  | |   ";
        if (input[i] == 'U' || input[i] == 'u')
            cout<<"| | | | ";
        if (input[i] == 'V' || input[i] == 'v')
            cout<<"| | | | ";
        if (input[i] == 'W' || input[i] == 'w')
            cout<<"| |  | | ";
        if (input[i] == 'X' || input[i] == 'x')
            cout<<" \\ V /  ";
        if (input[i] == 'Y' || input[i] == 'y')
            cout<<" \\ V /  ";
        if (input[i] == 'Z' || input[i]== 'z')
            cout<<"   / /  ";
        if (input[i] == ' ')
            cout<<"  ";
        if (input[i] == '`')
            cout<<" \\| ";
        if (input[i] == '~')
            cout<<" /\\/| ";
        if (input[i] == '1')
            cout<<"`| |  ";
        if (input[i]== '2')
            cout<<"`' / /' ";
        if (input[i]== '3')
            cout<<"    / / ";
        if (input[i] == '4')
            cout<<" / /| | ";
        if (input[i] == '5')
            cout<<"|___ \\  ";
        if (input[i] == '6')
            cout<<"/ /___  ";
        if (input[i] == '7')
            cout<<"   / /  ";
        if(input[i] == '.')
            cout<<"    ";
        if (input[i] == '8')
            cout<<" \\ V /  ";
        if (input[i] == '9')
            cout<<"| |_| | ";
        if (input[i] == '0')
            cout<<"| |/' | ";
        if (input[i] == '!')
            cout<<"| | ";
        if (input[i] == '@')
            cout<<" / / _` | ";
        if (input[i] == '#')
            cout<<"|_  __  _| ";
        if (input[i] == '$')
            cout<<"/ __) ";
        if (input[i] == '%')
            cout<<"   / /  ";
        if (input[i] == '^')
            cout<<"     ";
        if (input[i] == '&')
            cout<<" ( _ )   ";
        if (input[i] == '*')
            cout<<" \\ ` ' /  ";
        if (input[i] == '(')
            cout<<"| |  ";
        if (input[i] == ')')
            cout<<" | | ";
        if (input[i] == '-')
            cout<<" ______  ";
        if (input[i] == '_')
            cout<<"         ";
        if (input[i] == '=')
            cout<<"|______| ";
        if (input[i] == '+')
            cout<<" _| |_  ";
        if (input[i] == '[')
            cout<<"| |   ";
        if (input[i] == '{')
            cout<<" | |  ";
        if (input[i]== ']')
            cout<<"  | | ";
        if (input[i] == '}')
            cout<<" | |  ";
        if (input[i] == '|')
            cout<<"| | ";
        if (input[i] == '\\')
            cout<<" \\ \\    ";
        if (input[i] == ';')
            cout<<"    ";
        if (input[i] == ':')
            cout<<"(_) ";
        if (input[i] == '\'')
            cout<<"|/  ";
        if (input[i] == '"')
            cout<<" V V  ";
        if (input[i] == '<')
            cout<<" / /  ";
        if (input[i] == ',')
            cout<<"    ";
        if (input[i] == '>')
            cout<<" \\ \\  ";
        if (input[i] == '/')
            cout<<"   / /  ";
        if (input[i] == '?')
            cout<<"   ) | ";
    }
    cout << endl;
    //loop will print fourth layer
    for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<"|  _  | ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<"| ___ \\ ";
        if (input[i] == 'C' || input[i] == 'c')
            cout<<"| |     ";
        if (input[i] == 'D' || input[i] == 'd')
            cout<<"| | | | ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<"|  __|  ";
        if (input[i] == 'F' || input[i] == 'f')
            cout<<"|  _|   ";
        if (input[i] == 'G' || input[i] == 'g')
            cout<<"| | __  ";
        if (input[i] == 'H' || input[i] == 'h')
            cout<<"|  _  | ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<"  | |   ";
        if (input[i] == 'J' || input[i] == 'j')
            cout<<"    | | ";
        if (input[i] == 'K' || input[i] == 'k')
            cout<<"|    \\  ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<"| |     ";
        if (input[i] == 'M' || input[i] == 'm')
            cout<<"| |\\/| | ";
        if (input[i] == 'N' || input[i] == 'n')
            cout<<"| . ` | ";
        if (input[i] == 'O' || input[i] == 'o')
            cout<<"| | | | ";
        if (input[i] == 'P' || input[i] == 'p')
            cout<<"|  __/  ";
        if (input[i] == 'Q' || input[i] == 'q')
            cout<<"| | | | ";
        if (input[i] == 'R' || input[i] == 'r')
            cout<<"|    /  ";
        if (input[i] == 'S' || input[i] == 's')
            cout<<" `--. \\ ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<"  | |   ";
        if (input[i] == 'U' || input[i] == 'u')
            cout<<"| | | | ";
        if (input[i] == 'V' || input[i] == 'v')
            cout<<"| | | | ";
        if (input[i] == 'W' || input[i] == 'w')
            cout<<"| |/\\| | ";
        if (input[i] == 'X' || input[i] == 'x')
            cout<<" / ^ \\  ";
        if (input[i] == 'Y' || input[i] == 'y')
            cout<<"  \\ /   ";
        if (input[i] == 'Z' || input[i]== 'z')
            cout<<"  / /   ";
         if (input[i] == ' ')
            cout<<"  ";
        if (input[i] == '`')
            cout<<"    ";
        if (input[i] == '~')
            cout<<"|/\\/  ";
        if (input[i] == '1')
            cout<<" | |  ";
        if (input[i]== '2')
            cout<<"  / /   ";
        if (input[i]== '3')
            cout<<"    \\ \\ ";
        if (input[i] == '4')
            cout<<"/ /_| | ";
        if (input[i] == '5')
            cout<<"    \\ \\ ";
        if (input[i] == '6')
            cout<<"| ___ \\ ";
        if (input[i] == '7')
            cout<<"  / /   ";
        if(input[i] == '.')
            cout<<"    ";
        if (input[i] == '8')
            cout<<" / _ \\  ";
        if (input[i] == '9')
            cout<<"\\____ | ";
        if (input[i] == '0')
            cout<<"|  /| | ";
        if (input[i] == '!')
            cout<<"| | ";
        if (input[i] == '@')
            cout<<"| | (_| | ";
        if (input[i] == '#')
            cout<<" _| || |_  ";
        if (input[i] == '$')
            cout<<"\\__ \\ ";
        if (input[i] == '%')
            cout<<"  / /   ";
        if (input[i] == '^')
            cout<<"     ";
        if (input[i] == '&')
            cout<<" / _ \\/\\ ";
        if (input[i] == '*')
            cout<<"|_     _| ";
        if (input[i] == '(')
            cout<<"| |  ";
        if (input[i] == ')')
            cout<<" | | ";
        if (input[i] == '-')
            cout<<"|______| ";
        if (input[i] == '_')
            cout<<"         ";
        if (input[i] == '=')
            cout<<" ______  ";
        if (input[i] == '+')
            cout<<"|_   _| ";
        if (input[i] == '[')
            cout<<"| |   ";
        if (input[i] == '{')
            cout<<"< <   ";
        if (input[i]== ']')
            cout<<"  | | ";
        if (input[i] == '}')
            cout<<"  > > ";
        if (input[i] == '|')
            cout<<"| | ";
        if (input[i] == '\\')
            cout<<"  \\ \\   ";
        if (input[i] == ';')
            cout<<" _  ";
        if (input[i] == ':')
            cout<<"    ";
        if (input[i] == '\'')
            cout<<"    ";
        if (input[i] == '"')
            cout<<"      ";
        if (input[i] == '<')
            cout<<"< <   ";
        if (input[i] == ',')
            cout<<" _  ";
        if (input[i] == '>')
            cout<<"  > > ";
        if (input[i] == '/')
            cout<<"  / /   ";
        if (input[i] == '?')
            cout<<"  / /  ";
    }
    cout<<endl;
    //loop will print fifth layer
    for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<"| | | | ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<"| |_/ / ";
        if (input[i] == 'C' || input[i] == 'c')
            cout<<"| \\__/\\ ";
        if (input[i] == 'D' || input[i] == 'd')
            cout<<"| |/ /  ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<"| |___  ";
        if (input[i] == 'F' || input[i] == 'f')
            cout<<"| |     ";
        if (input[i] == 'G' || input[i] == 'g')
            cout<<"| |_\\ \\ ";
        if (input[i] == 'H' || input[i] == 'h')
            cout<<"| | | | ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<" _| |_  ";
        if (input[i] == 'J' || input[i] == 'j')
            cout<<"/\\__/ / ";
        if (input[i] == 'K' || input[i] == 'k')
            cout<<"| |\\  \\ ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<"| |____ "; 
        if (input[i] == 'M' || input[i] == 'm')
            cout<<"| |  | | ";
        if (input[i] == 'N' || input[i] == 'n')
            cout<<"| |\\  | ";
        if (input[i] == 'O' || input[i] == 'o')
            cout<<"\\ \\_/ / ";
        if (input[i] == 'P' || input[i] == 'p')
            cout<<"| |     ";
        if (input[i] == 'Q' || input[i] == 'q')
            cout<<"\\ \\/' / ";
        if (input[i] == 'R' || input[i] == 'r')
            cout<<"| |\\ \\  ";
        if (input[i] == 'S' || input[i] == 's')
            cout<<"/\\__/ / ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<"  | |   ";
        if (input[i] == 'U' || input[i] == 'u')
            cout<<"| |_| | ";
        if (input[i] == 'V' || input[i] == 'v')
            cout<<"\\ \\_/ / ";
        if (input[i] == 'W' || input[i] == 'w')
            cout<<"\\  /\\  / ";
        if (input[i] == 'X' || input[i] == 'x')
            cout<<"/ / \\ \\ ";
        if (input[i] == 'Y' || input[i] == 'y')
            cout<<"  | |   ";
        if (input[i] == 'Z' || input[i]== 'z')
            cout<<"./ /___ ";
        if (input[i] == ' ')
            cout<<"  ";
        if (input[i] == '`')
            cout<<"    ";
        if (input[i] == '~')
            cout<<"      ";
        if (input[i] == '1')
            cout<<"_| |_ ";
        if (input[i]== '2')
            cout<<"./ /___ ";
        if (input[i]== '3')
            cout<<".___/ / ";
        if (input[i] == '4')
            cout<<"\\___  | ";
        if (input[i] == '5')
            cout<<"/\\__/ / ";
        if (input[i] == '6')
            cout<<"| \\_/ | ";
        if (input[i] == '7')
            cout<<"./ /    ";
        if(input[i] == '.')
            cout<<" _  ";
        if (input[i] == '8')
            cout<<"| |_| | ";
        if (input[i] == '9')
            cout<<".___/ / ";
        if (input[i] == '0')
            cout<<"\\ |_/ / ";
        if (input[i] == '!')
            cout<<"|_| ";
        if (input[i] == '@')
            cout<<" \\ \\__,_| ";
        if (input[i] == '#')
            cout<<"|_  __  _| ";
        if (input[i] == '$')
            cout<<"(   / ";
        if (input[i] == '%')
            cout<<" / / _  ";
        if (input[i] == '^')
            cout<<"     ";
        if (input[i] == '&')
            cout<<"| (_>  < ";
        if (input[i] == '*')
            cout<<" / , . \\  ";
        if (input[i] == '(')
            cout<<"| |  ";
        if (input[i] == ')')
            cout<<" | | ";
        if (input[i] == '-')
            cout<<"         ";
        if (input[i] == '_')
            cout<<" ______  ";
        if (input[i] == '=')
            cout<<"|______| ";
        if (input[i] == '+')
            cout<<"  |_|   ";
        if (input[i] == '[')
            cout<<"| |_  ";
        if (input[i] == '{')
            cout<<" | |  ";
        if (input[i]== ']')
            cout<<" _| | ";
        if (input[i] == '}')
            cout<<" | |  ";
        if (input[i] == '|')
            cout<<"| | ";
        if (input[i] == '\\')
            cout<<"   \\ \\  ";
        if (input[i] == ';')
            cout<<"( ) ";
        if (input[i] == ':')
            cout<<" _  ";
        if (input[i] == '\'')
            cout<<"    ";
        if (input[i] == '"')
            cout<<"      ";
        if (input[i] == '<')
            cout<<" \\ \\  ";
        if (input[i] == ',')
            cout<<"( ) ";
        if (input[i] == '>')
            cout<<" / /  ";
        if (input[i] == '/')
            cout<<" / /    ";
        if (input[i] == '?')
            cout<<" |_|   ";
    }
    cout<<endl;
    //loop will print sixth layer
    for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<"\\_| |_/ ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<"\\____/  ";
        if (input[i] == 'C' || input[i] == 'c')
            cout<<" \\____/ ";
        if (input[i] == 'D' || input[i] == 'd')
            cout<<"|___/   ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<"\\____/  ";
        if (input[i] == 'F' || input[i] == 'f')
            cout<<"\\_|     ";
        if (input[i] == 'G' || input[i] == 'g')
            cout<<" \\____/ ";
        if (input[i] == 'H' || input[i] == 'h')
            cout<<"\\_| |_/ ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<" \\___/  ";
        if (input[i] == 'J' || input[i] == 'j')
            cout<<"\\____/  ";
        if (input[i] == 'K' || input[i] == 'k')
            cout<<"\\_| \\_/ ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<"\\_____/ ";
        if (input[i] == 'M' || input[i] == 'm')
            cout<<"\\_|  |_/ ";
        if (input[i] == 'N' || input[i] == 'n')
            cout<<"\\_| \\_/ ";
        if (input[i] == 'O' || input[i] == 'o')
            cout<<" \\___/  ";
        if (input[i] == 'P' || input[i] == 'p')
            cout<<"\\_|     ";
        if (input[i] == 'Q' || input[i] == 'q')
            cout<<" \\_/\\_\\ ";
        if (input[i] == 'R' || input[i] == 'r')
            cout<<"\\_| \\_| ";
        if (input[i] == 'S' || input[i] == 's')
            cout<<"\\____/  ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<"  \\_/   ";
        if (input[i] == 'U' || input[i] == 'u')
            cout<<" \\___/  ";
        if (input[i] == 'V' || input[i] == 'v')
            cout<<" \\___/  ";
        if (input[i] == 'W' || input[i] == 'w')
            cout<<" \\/  \\/  ";
        if (input[i] == 'X' || input[i] == 'x')
            cout<<"\\/   \\/ ";
        if (input[i] == 'Y'  || input[i] == 'y')
            cout<<"  \\_/   ";
        if (input[i] == 'Z' || input[i]== 'z')
            cout<<"\\_____/ ";
        if (input[i] == ' ')
            cout<<"  ";
        if (input[i] == '`')
            cout<<"    ";
        if (input[i] == '~')
            cout<<"      ";
        if (input[i] == '1')
            cout<<"\\___/ ";
        if (input[i]== '2')
            cout<<"\\_____/ ";
        if (input[i]== '3')
            cout<<"\\____/  ";
        if (input[i] == '4')
            cout<<"    |_/ ";
        if (input[i] == '5')
            cout<<"\\____/  ";
        if (input[i] == '6')
            cout<<"\\_____/ ";
        if (input[i] == '7')
            cout<<"\\_/     ";
        if(input[i] == '.')
            cout<<"(_) ";
        if (input[i] == '8')
            cout<<"\\_____/ ";
        if (input[i] == '9')
            cout<<"\\____/  ";
        if (input[i] == '0')
            cout<<" \\___/  ";
        if (input[i] == '!')
            cout<<"(_) ";
        if (input[i] == '@')
            cout<<"  \\____/  ";
        if (input[i] == '#')
            cout<<"  |_||_|   ";
        if (input[i] == '$')
            cout<<" |_|  ";
        if (input[i] == '%')
            cout<<"/_/ (_) ";
        if (input[i] == '^')
            cout<<"     ";
        if (input[i] == '&')
            cout<<" \\___/\\/ ";
        if (input[i] == '*')
            cout<<" \\/|_|\\/  ";
        if (input[i] == '(')
            cout<<" \\_\\ ";
        if (input[i] == ')')
            cout<<"/_/  ";
        if (input[i] == '-')
            cout<<"         ";
        if (input[i] == '_')
            cout<<"|______| ";
        if (input[i] == '=')
            cout<<"         ";
        if (input[i] == '+')
            cout<<"        ";
        if (input[i] == '[')
            cout<<"|___| ";
        if (input[i] == '{')
            cout<<"  \\_\\ ";
        if (input[i]== ']')
            cout<<"|___| ";
        if (input[i] == '}')
            cout<<"/_/   ";
        if (input[i] == '|')
            cout<<"|_| ";
        if (input[i] == '\\')
            cout<<"    \\_\\ ";
        if (input[i] == ';')
            cout<<"|/  ";
        if (input[i] == ':')
            cout<<"(_) ";
        if (input[i] == '\'')
            cout<<"    ";
        if (input[i] == '"')
            cout<<"      ";
        if (input[i] == '<')
            cout<<"  \\_\\ ";
        if (input[i] == ',')
            cout<<"|/  ";
        if (input[i] == '>')
            cout<<"/_/   ";
        if (input[i] == '/')
            cout<<"/_/     ";
        if (input[i] == '?')
            cout<<" (_)   ";
    }
    cout<<endl;
}


void asciiart_italic(){

}

void asciiart_bold(){
    //! take string as a input
    string input;
    cout<<"Enter text: ";
    getline(cin, input);
    //loop will print first layer
    for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<"  █████  ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<" ██████  ";
        if (input[i] == 'C' || input[i] == 'c')
            cout<<"  ██████ ";
        if (input[i] == 'D' || input[i] == 'd')
            cout<<" ██████  ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<" ███████";
        if (input[i] == 'F' || input[i] == 'f')
            cout<<" ███████";
        if (input[i] == 'G' || input[i] == 'g')
            cout<<"  ██████  ";
        if (input[i] == 'H' || input[i] == 'h')
            cout<<" ██   ██ ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<" ██ ";
        if (input[i] == 'J' || input[i] == 'j')
            cout<<"      ██ ";
        if (input[i] == 'K' || input[i] == 'k')
            cout<<" ██   ██ ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<" ██      ";
        if (input[i] == 'M' || input[i] == 'm')
            cout<<" ███    ███ ";
        if (input[i] == 'N' || input[i] == 'n')
            cout<<" ███    ██ ";
        if (input[i] == 'O' || input[i] == 'o')
            cout<<"  ██████  ";
        if (input[i] == 'P' || input[i] == 'p')
            cout<<" ██████  ";
        if (input[i] == 'Q' || input[i] == 'q')
            cout<<"  ██████  ";
        if (input[i] == 'R' || input[i] == 'r')
            cout<<" ██████  ";
        if (input[i] == 'S' || input[i] == 's')
            cout<<" ███████ ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<" ████████ ";
        if (input[i] == 'U' || input[i] == 'u')
            cout<<" ██    ██ ";
        if (input[i] == 'V' || input[i] == 'v')
            cout<<" ██    ██ ";
        if (input[i] == 'W' || input[i] == 'w')
            cout<<" ██     ██ ";
        if (input[i] == 'X' || input[i] == 'x')
            cout<<" ██   ██ ";
        if (input[i] == 'Y' || input[i] == 'y')
            cout<<" ██    ██ ";
        if (input[i] == 'Z' || input[i]== 'z')
            cout<<" ███████ ";
        if (input[i] == ' ')
            cout<<"    ";
        if (input[i] == '1')
            cout<<"  ██ ";
        if (input[i]== '2')
            cout<<" ██████  ";
        if (input[i]== '3')
            cout<<" ██████  ";
        if (input[i] == '4')
            cout<<" ██   ██ ";
        if (input[i] == '5')
            cout<<" ███████ ";
        if (input[i] == '6')
            cout<<"  ██████  ";
        if (input[i] == '7')
            cout<<" ███████ ";
        if (input[i] == '8')
            cout<<"  █████  ";
        if (input[i] == '9')
            cout<<"  █████  ";
        if (input[i] == '0')
            cout<<"  ██████  ";
            if (input[i] == '!')
            cout<<" ██ ";
        if (input[i] == '@')
            cout<<"  ██████  ";
        if (input[i] == '#')
            cout<<"  ██  ██  ";
        if (input[i] == '$')
            cout<<" ▄▄███▄▄ ";
        if (input[i] == '%')
            cout<<" ██  ██ ";
        if (input[i] == '^')
            cout<<"  ███  ";
        if (input[i] == '&')
            cout<<"    ██    ";
        if (input[i] == '*')
            cout<<"       ";
        if (input[i] == '(')
            cout<<"  ██ ";
        if (input[i] == ')')
            cout<<" ██  ";
        if (input[i] == '-')
            cout<<"       ";
        if (input[i] == '_')
            cout<<"         ";
        if (input[i] == '[')
            cout<<" ███ ";
        if (input[i]== ']')
            cout<<" ███ ";
        if (input[i] == '|')
            cout<<" _  ";
        if (input[i] == '\\')
            cout<<"__      ";
        if (input[i] == ';')
            cout<<" _  ";
        if (input[i] == ':')
            cout<<"    ";
        if (input[i] == '\'')
            cout<<" _  ";
        if (input[i] == '"')
            cout<<" _ _  ";
        if (input[i] == '<')
            cout<<"   __ ";
        if (input[i] == ',')
            cout<<"    ";
        if (input[i] == '>')
            cout<<"__    ";
        if (input[i] == '/')
            cout<<"     __ ";
        if (input[i] == '?')
            cout<<" ___   ";
    }
    cout<<endl;
}

//! Main Program
int main(){
    while(1){
        asciiart_normal();
    }
}