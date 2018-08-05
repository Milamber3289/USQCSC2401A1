// palindrome.cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool is_palindrome(string);
int main()
{
	cout << "Enter a string: ";
	string input;
	getline(cin, input);
	cout << input << " is ";
	if (!is_palindrome(input)) cout << "not ";
		cout << "a palindrome.\n";
	return 0;
}
bool is_palindrome(string s)
{
	if (s.length() <= 1) return true;
	
	//if last character is a capital, change to lowercase then call function again
	if(isupper(s[s.length() - 1])){
		s[s.length() - 1]=tolower(s[s.length() - 1]);
		return is_palindrome(s.substr(0, s.length()));			
	}
	
	//if first character is a capital, change to lowercase then call function again
		if(isupper(s[0])){
		s[0]=tolower(s[s.length() - 1]);
		return is_palindrome(s.substr(0, s.length()));			
	}
	
	//if last character is a space, digit, or non numeric character call function again skipping last character
	if(!isalpha(s[s.length() - 1])){
		return is_palindrome(s.substr(0, s.length() - 1));	
	}

	//if first character is a space, digit, or non numeric character call function again skipping first character
	if(!isalpha(s[0])){
		return is_palindrome(s.substr(1, s.length() - 1));	
	}
	
	if (s[0] == s[s.length() - 1]){
		return is_palindrome(s.substr(1, s.length() - 2));
	} else {
		return false;
	}
}