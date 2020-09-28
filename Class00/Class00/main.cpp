#include <iostream>
#include <math.h>
#include <vector>

template < class T >
class vec3 {

public:


	T x, y, z;
	vec3() { x = y = z = 0; };

	vec3(T xV, T yV, T zV) {

		x = xV;
		y = yV;
		z = zV;

	}

	~vec3() {

	}

	void Zero() { x = y = z = 0; }

	void Normalize() {

		T module;

		module = sqrt((x * x) + (y * y) + (z * z));
		
		if (module != 0)
		{
			x /= module;
			y /= module;
			z /= module;
		}
	}

	bool IsZero() {
		if (x == 0 && y == 0 && z == 0)
		{
			return true;
		}
		else { return false; }
	}

	float DistanceTo(const vec3& vec1, const vec3& vec2) {
		T dx = vec2.x - vec1.x;
		T dy = vec2.y - vec1.y;
		T dz = vec2.z - vec1.z;

		return sqrt((dx * dx) + (dy * dy) + (dz * dz));
	}

	vec3 operator+(const vec3& vector) const
	{
		return vec3(x + vector.x, y + vector.y, z + vector.z);
	}

	vec3 operator+=(const vec3& vector)
	{
		x += vector.x;
		y += vector.y;
		z += vector.z;
	}

	vec3 operator-(const vec3& vector) const
	{
		return Vec3(x - vector.x, y - vector.y, z - vector.z);
	}

	vec3 operator-=(const vec3& vector)
	{
		x -= vector.x;
		y -= vector.y;
		z -= vector.z;
	}

	vec3 operator=(const vec3& vector)
	{
		return vec3(x = vector.x, y = vector.y, z = vector.z);
	}

	vec3 operator==(const vec3& vector)
	{
		if (x == vector.x && y == vector.y && z = vector.z)
		{
			return true;
		}
		else { return false;  }
	}
};

int main()
{

	vec3<float> vec = { 10, 10, 5 };

	printf("%.2f %.2f %.2f \n", vec.x, vec.y, vec.z);

	vec.Normalize();
	printf("%.2f %.2f %.2f \n", vec.x, vec.y, vec.z);

	vec.Zero();
	printf("%.2f %.2f %.2f \n", vec.x, vec.y, vec.z);

	if (vec.IsZero() == true)
	{
		printf("The vector is null\n");
	}
	else
	{
		printf("The vector isn't null\n");
	}



	system("pause");
	return 0;
}