// C++ program to check if two strings
// are anagrams of each other
#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

/* function to check whether two strings are anagram of
each other */
bool areAnagram(char* str1, char* str2)
{
	int count[NO_OF_CHARS]= {0};
	int i=0;
	for(i=0;str1[i]&&str2[i];i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
	}
	if(str1[i]||str2[i])return false;
	for(i=0;i<NO_OF_CHARS;i++)if(count[i]>0)return false;
	return true;
}

/* Driver code*/
int main()
{
	char str1[] = "geeksforgeeks";
	char str2[] = "forgeeksgeeks";
	if (areAnagram(str1, str2))
		cout << "The two strings are anagram of each other";
	else
		cout << "The two strings are not anagram of each other";

	return 0;
}

// This is code is contributed by rathbhupendra
