#pragma once
#include <Vertex.h>
#include <vector>
#include <cassert>

struct Triangle
{
	Vertex m_v1;
	Vertex m_v2;
	Vertex m_v3;

	Vertex& operator[](const int p_index)
	{
		switch (p_index)
		{
		case 0:
			return m_v1;
		case 1:
			return m_v2;
		case 2:
			return m_v3;
		default:
			break;
		}
		if (p_index > 2)
		{
			return m_v1;
		}
		else if (p_index < 0)
		{
			return m_v3;
		}
	}
};