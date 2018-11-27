#pragma once

namespace Math::Vector
{
	class Vec3
	{

	public:
		Vec3();
		Vec3(const float pf_x, const float pf_y, const float pf_z);

		~Vec3();

		float mf_x;
		float mf_y;
		float mf_z;

		float GetMagnitude() const;
		void Normalize();

		Vec3& operator*(float pf_scalar);
		Vec3& operator+(Vec3& p_other);
	};
}