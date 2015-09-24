// Profile.h
//------------------------------------------------------------------------------
#pragma once
#ifndef CORE_PROFILE_PROFILE_H
#define CORE_PROFILE_PROFILE_H

// Includes
//------------------------------------------------------------------------------
#include "ProfileManager.h"

// Defines
//------------------------------------------------------------------------------
#ifndef PROFILING_ENABLED
	#define PROFILE_FUNCTION
	#define PROFILE_SECTION( sectionName )
	#define PROFILE_SYNCHRONIZE
#else
	#define PASTE_HELPER( a, b ) a ## b
	#define PASTE( a, b ) PASTE_HELPER( a, b )

	#define PROFILE_SECTION( sectionName ) ProfileHelper PASTE( ph, __LINE__ )( sectionName );
	#define PROFILE_FUNCTION PROFILE_SECTION( __FUNCTION__ )

	#define PROFILE_SYNCHRONIZE ProfileManager::Synchronize();

	// RAII helper to manage Start/Stop of a profile section
	class ProfileHelper
	{
	public:
		inline ProfileHelper( const char * id )
		{
			ProfileManager::Start( id );
		}
		inline ~ProfileHelper()
		{
			ProfileManager::Stop();
		}
	private:
	};
#endif // PROFILING_ENABLED

//------------------------------------------------------------------------------
#endif // CORE_PROFILE_PROFILE_H
