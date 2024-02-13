
#include <iostream>
using namespace std;
int main()

{
	char array[] = "qwe 342 er 455 gDe reiou  erre";
	char ar[] = "gD";
	int counter = 0;
	bool resultFlag = false;
	for (int i = 0, flag; array[i] != '\0'; i++){
		if (array[i] == ar[0]) {
			flag = true;
			for (int j = 1; ar[j] != '\0'; j++) {
				if (array[i + j] != ar[j]) {
					flag = false;
					break;
				}
			
			}
			if (flag) resultFlag = true;
		}

	}
		
}

	
