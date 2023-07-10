//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int N;
//	int position_x = 1, position_y = 1;
//
//	cin >> N;
//	for (int i = 0; i < 6; i++) {
//		char command;
//		cin >> command;
//		switch (command) {
//		case 'L':
//			if (position_y == 1) {
//				continue;
//			}
//			position_y--;
//			break;
//		case 'R':
//			if (position_y == N) {
//				continue;
//			}
//			position_y++;
//			break;
//		case 'U':
//			if (position_x == 1) {
//				continue;
//			}
//			position_x--;
//			break;
//		case 'D':
//			if (position_x == N) {
//				continue;
//			}
//			position_x++;
//			break;
//		}
//	}
//	cout << position_x << ' ' << position_y << '\n';
//	return 0;
//}