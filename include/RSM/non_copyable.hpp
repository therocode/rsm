/*
* Copyright (c) 2017 Jean-Sébastien Fauteux
*
* This software is provided 'as-is', without any express or implied warranty. 
* In no event will the authors be held liable for any damages arising from 
* the use of this software.
*
* Permission is granted to anyone to use this software for any purpose, 
* including commercial applications, and to alter it and redistribute it freely, 
* subject to the following restrictions:
*
* 1. The origin of this software must not be misrepresented; you must not claim 
*    that you wrote the original software. If you use this software in a product, 
*    an acknowledgment in the product documentation would be appreciated but is
*    not required.
*
* 2. Altered source versions must be plainly marked as such, and must not be 
*    misrepresented as being the original software.
*
* 3. This notice may not be removed or altered from any source distribution.
*/

#pragma once

#include <RSM/build_config.hpp>

namespace RSM {

	////////////////////////////////////////////////////////////
	/// \brief NonCopyable class from which class that should be not copyable will inherit
	///
	////////////////////////////////////////////////////////////
	class RSM_API NonCopyable {
	protected:
		////////////////////////////////////////////////////////////
		/// \brief Default Constructor
		///
		/// We must explicitly declare a default constructor because
		/// of the copy constructor.
		///
		////////////////////////////////////////////////////////////
		NonCopyable(){}
	private:
		//Private copy constructor and assignment operator. No copy.
		NonCopyable(const NonCopyable&);
		NonCopyable& operator=(const NonCopyable&);
	};

}
