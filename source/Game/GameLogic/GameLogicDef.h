#ifndef GAMELOGIC_GAMELOGICDEF_H
#define GAMELOGIC_GAMELOGICDEF_H

#ifndef DANBIAS_GAMELOGIC
	#define DANBIAS_GAMELOGIC
#endif

#ifdef DANBIAS_GAMELOGIC_DLL_EXPORT
	#define DANBIAS_GAMELOGIC_DLL __declspec(dllexport)
#else
	#define DANBIAS_GAMELOGIC_DLL __declspec(dllimport)
#endif

#endif // !GAMELOGIC_GAMELOGICDEF_H
