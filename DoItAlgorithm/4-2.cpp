#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int result = 0;
	string hour, min, sec, time;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= 59; j++) {
			for (int k = 0; k <= 59; k++) {
				hour = to_string(i);
				min = to_string(j);
				sec = to_string(k);
				time = hour + min + sec;

				for (auto a : time) {
					if (a == '3') {
						result++;
						break;
					}
				}
			}
		}
	} 
	cout << result << '\n';
	return 0;
}