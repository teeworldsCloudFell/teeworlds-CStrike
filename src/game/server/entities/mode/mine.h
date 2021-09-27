/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/* Copyright � 2013 Neox.                                                                                                */
/* If you are missing that file, acquire a complete release at https://www.teeworlds.com/forum/viewtopic.php?pid=106934  */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef GAME_SERVER_ENTITIES_MINE_H
#define GAME_SERVER_ENTITIES_MINE_H

#include <game/server/entity.h>

class CMine : public CEntity
{
public:
	CMine(CGameWorld *pGameWorld, vec2 Pos, vec2 Dir, int Owner, int Type);

	virtual void Reset();
	virtual void Tick();
	virtual void Snap(int SnappingClient);
	void HitCharacter();

private:
	int m_Owner;
	int m_LifeTime;
	bool m_NeedToGive;
	vec2 m_Dir;
	static const int m_ProximityRadius = 28;
	int m_Type;
	int m_TeamMask;
};

#endif
