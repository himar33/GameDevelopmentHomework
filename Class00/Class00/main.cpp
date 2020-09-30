#include "functions.h"
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << std::setprecision(2);
	vec3<float> vec1 = { 2, 3, 4 };
	vec3<float> vec2;
	vec3<float> vecDis;
	int option, vecOpt;

	do {
		system("cls");
		cout << "What do you want to do?" << endl;
		cout << "1. Set vector to zero" << endl << "2. Normalize" << endl << "3. Prove if vector is null" << endl << "4. Distance between 2 vectors" << endl << "5. Set vector" << endl << "6. Exit" << endl;
		do
		{
			cout << "Choose a number: ";
			scanf_s("%d", &option);

		} while (option < 1 || option > 6);
		switch (option)
		{
		case 1:
			system("cls");
			cout << "What vector?" << endl << "1. Vec1(" << vec1.x << ", " << vec1.y << ", " << vec1.z << ")" << endl;
			cout << "2. Vec2(" << vec2.x << ", " << vec2.y << ", " << vec2.z << ")" << endl;
			scanf_s("%d", &vecOpt);
			if (vecOpt == 1)
			{
				if (vec1.IsZero() == true)
				{
					cout << "This vector is currently null" << endl;
					system("pause");
				}
				else
				{
					vec1.Zero();
					cout << "Vec1(" << vec1.x << ", " << vec1.y << ", " << vec1.z << ")" << endl;
					system("pause");
				}
			}
			else if (vecOpt == 2)
			{
				if (vec2.IsZero() == true)
				{
					cout << "This vector is currently null" << endl;
					system("pause");
				}
				else
				{
					vec2.Zero();
					cout << "Vec2(" << vec2.x << ", " << vec2.y << ", " << vec2.z << ")" << endl;
					system("pause");
				}
			}
			break;
		case 2:
			system("cls");
			cout << "What vector?" << endl << "1. Vec1(" << vec1.x << ", " << vec1.y << ", " << vec1.z << ")" << endl;
			cout << "2. Vec2(" << vec2.x << ", " << vec2.y << ", " << vec2.z << ")" << endl;
			scanf_s("%d", &vecOpt);
			if (vecOpt == 1)
			{
				if (vec1.IsZero() == true)
				{
					cout << "You can't normalize a null vector" << endl;
					system("pause");
				}
				else
				{
					vec1.Normalize();
					cout << "Vec1(" << vec1.x << ", " << vec1.y << ", " << vec1.z << ")" << endl;
					system("pause");
				}
			}
			else if (vecOpt == 2)
			{
				if (vec2.IsZero() == true)
				{
					cout << "You can't normalize a null vector" << endl;
					system("pause");
				}
				else
				{
					vec2.Normalize();
					cout << "Vec2(" << vec2.x << ", " << vec2.y << ", " << vec2.z << ")" << endl;
					system("pause");
				}
			}
			break;
		case 3:
			system("cls");
			cout << "What vector?" << endl << "1. Vec1(" << vec1.x << ", " << vec1.y << ", " << vec1.z << ")" << endl;
			cout << "2. Vec2(" << vec2.x << ", " << vec2.y << ", " << vec2.z << ")" << endl;
			scanf_s("%d", &vecOpt);
			if (vecOpt == 1)
			{
				if (vec1.IsZero() == true)
				{
					cout << "This vector is null" << endl;
					system("pause");
				}
				else
				{
					cout << "This vector isn't null" << endl;
					system("pause");
				}
			}
			else if (vecOpt == 2)
			{
				if (vec2.IsZero() == true)
				{
					cout << "This vector is null" << endl;
					system("pause");
				}
				else
				{
					cout << "This vector isn't null" << endl;
					system("pause");
				}
			}
			break;
		case 4:
			system("cls");
			cout << "The distance between vec1 and vec2 is: " << vecDis.DistanceTo(vec1, vec2) << endl;
			system("pause");
			break;
		case 5:
			system("cls");
			cout << "What vector?" << endl << "1. Vec1(" << vec1.x << ", " << vec1.y << ", " << vec1.z << ")" << endl;
			cout << "2. Vec2(" << vec2.x << ", " << vec2.y << ", " << vec2.z << ")" << endl;
			scanf_s("%d", &vecOpt);
			if (vecOpt == 1)
			{
				cout << "x: ";
				scanf_s("%f", &vec1.x);
				cout << "y: ";
				scanf_s("%f", &vec1.y);
				cout << "z: ";
				scanf_s("%f", &vec1.z);
			}
			else if (vecOpt == 2)
			{
				cout << "x: ";
				scanf_s("%f", &vec2.x);
				cout << "y: ";
				scanf_s("%f", &vec2.y);
				cout << "z: ";
				scanf_s("%f", &vec2.z);
			}
			break;
		default:
			break;
		}

	} while (option != 6);

	return 0;
}