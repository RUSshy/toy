//  Copyright (c) 2018 Hugo Amiard hugo.amiard@laposte.net
//  This software is licensed  under the terms of the GNU General Public License v3.0.
//  See the attached LICENSE.txt file or https://www.gnu.org/licenses/gpl-3.0.en.html.
//  This notice and the license may not be removed or altered from any source distribution.

#pragma once

#include <infra/NonCopy.h>
#include <obj/Unique.h>
#include <math/Vec.h>
#include <core/Forward.h>

using namespace mud; namespace toy
{
	class refl_ TOY_CORE_EXPORT CollisionShape : public NonCopy
	{
	public:
		constr_ CollisionShape(const Shape& shape, const vec3& center = Zero3, float margin = 0.f);
		~CollisionShape();

		CollisionShape(const CollisionShape& shape);
		CollisionShape& operator=(const CollisionShape& shape);

		object_ptr<Shape> m_shape;
		vec3 m_center;
		float m_margin;

		bool checkInside(const vec3& position) { UNUSED(position); return true; }
	};
}
