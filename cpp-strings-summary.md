Strings manipulation
=======================

* definning strings
* get character of the string
* concatenation of strings
* duplicate strings
* uppercase, lowercas, strip, split, join, length
* formatting, interpolation (f-string)
* chars to string
* comparing strings
* containt string
* startwith, endwith
* remplaceAll, remplaceFirst
* stringbuffer stringbuilder
* types to string, double or float to string with point presicion
* comparing string

## Defining Strings


string s1;               // Default constructor - creates an empty or null C++ string of length 0, equal to ""
string s2("hello");      // Explicit constructor call to initialize new object with C string
string s3 = "hello";     // Implicit constructor call to initialize new object with C string
string s4(s2);           // Explicit constructor call to initialize new object with C++ string
string s5 = s2;          // Implicit constructor call to initialize new object with C++ string

## string to char* or const char

```
std::string str;
const char * c = str.c_str();

//-----

std::string str;
char * writable = new char[str.size() + 1];
std::copy(str.begin(), str.end(), writable);
writable[str.size()] = '\0'; // don't forget the terminating 0

// don't forget to free the string after finished using it
delete[] writable;
```

## char to string

```
char c = 'A';
std::string s;
	std::stringstream ss;
	ss << c;
	ss >> s;				  // or s = ss.str();
	std::cout << s << '\n';
```

```
std::string s;
s = c;
std::cout << s << '\n';
```



## access to char

```
The subscript operator may be used to access the individual characters of a C++ string:

cout << s3[1] << endl;     // Prints the character 'e', the second character in the string "Hello"

```

## concatenation of strings

```
result = s1 + s2;
```

## duplicate strings

```
std::string str1 = "test";
std::string str2 = str1;
//str2 + "2";
//print str2 must be diferent that str1
```

## uppercase, lowercas, strip, split, join, length

* uppercase

```
#include <string>
#include <algorithm>
 
int main() {
	std::string data = "This is a sample string.";
 
	// convert string to upper case
	std::for_each(data.begin(), data.end(), [](char & c) {
		c = ::toupper(c);
	});
	std::cout << "In Upper Case : " << data << std::endl;
}
```

* lowercase

```
#include <string>
#include <algorithm>
 
int main() {
	std::string data = "This is a sample string.";
	// convert string to back to lower case
	std::for_each(data.begin(), data.end(), [](char & c) {
		c = ::tolower(c);
	});
 
	std::cout << "In Lower Case : " << data << std::endl;
 
}
```

* strip
    * ref: https://stackoverflow.com/questions/216823/whats-the-best-way-to-trim-stdstring?page=1&tab=votes#tab-top 
```
#include <algorithm> 
#include <cctype>
#include <locale>

// trim from start (in place)
static inline void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) {
        return !std::isspace(ch);
    }));
}

// trim from end (in place)
static inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}

// trim from both ends (in place)
static inline void trim(std::string &s) {
    ltrim(s);
    rtrim(s);
}

// trim from start (copying)
static inline std::string ltrim_copy(std::string s) {
    ltrim(s);
    return s;
}

// trim from end (copying)
static inline std::string rtrim_copy(std::string s) {
    rtrim(s);
    return s;
}
```

* split

```
* http://www.martinbroadhurst.com/how-to-split-a-string-in-c.html 
```


* join

```
#include <sstream>
#include <string>

std::stringstream ss;
ss << "Hello, world, " << myInt << niceToSeeYouString;
std::string s = ss.str();
```

* length

```

```

## formatting, interpolation (f-string)
## comparing strings
## containt string
## startwith, endwith
## remplaceAll, remplaceFirst
## stringbuffer stringbuilder
## types to string, double or float to string with point presicion
## comparing string


