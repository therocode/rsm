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

#if (defined(_WIN32) || defined(__WIN32__)) && !defined(RSM_STATIC)

	//Export Library (DLL Side)
	#ifdef RSM_EXPORTS
		#define RSM_API __declspec(dllexport)
	//Import Library (Dev Side)
	#else
		#define RSM_API __declspec(dllimport)
	#endif // ORA_EXPORTS

	#ifdef _MSC_VER
		#pragma warning(disable: 4251)
		#pragma warning(disable: 4396) //Deactivates warning for inline of friend function
	#endif // _MSV_VER

//No DLL for other platform
#else
	#define RSM_API
#endif
