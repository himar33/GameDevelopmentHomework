#include "functions.h"
#include <stdlib.h>
using namespace std;

int main()
{

	vec3<float> vec1 = { 2, 3, 4 };
	vec3<float> vec2;
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
					cout << "This vector is actually null" << endl;
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
					cout << "This vector is actually null" << endl;
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
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			break;
		}

	} while (option != 6);

	/*printf("%.2f %.2f %.2f \n", vec1.x, vec1.y, vec1.z);

	vec1.Normalize();
	printf("%.2f %.2f %.2f \n", vec1.x, vec1.y, vec1.z);

	if (vec1.IsZero() == true)
	{
		printf("The vector is null\n");
	}
	else
	{
		printf("The vector isn't null\n");
	}*/

	return 0;
}