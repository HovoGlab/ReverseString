#include <iostream>
#include <string>

using namespace std;

void reverse_str(char * ch);

int main()
{
	char ch[100];
	cout << "enter string ";
	cin >> ch;

	reverse_str(ch);
}

void reverse_str(char * ch) {
	char * result = new char[strlen(ch)];
	char *tmp = ch + strlen(ch);
	char * res = result;
	while (tmp != ch)
	{
		tmp--;
		*res = *tmp;
		res++;
	}

	*res = '\0';
	cout << "The reverse is " << result;
	cout << endl;

}