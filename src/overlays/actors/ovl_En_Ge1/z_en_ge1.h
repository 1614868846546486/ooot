#pragma once
#define Z_EN_GE1_H

#include "global.h"
#include "ultra64.h"

struct EnGe1;

typedef void (*EnGe1AnimFunc)(struct EnGe1*);
typedef void (*EnGe1ActionFunc)(struct EnGe1*, GlobalContext*);

enum EnGe1Type
{
	/* 0x00 */ GE1_TYPE_GATE_GUARD,
	/* 0x01 */ GE1_TYPE_GATE_OPERATOR,
	/* 0x04 */ GE1_TYPE_NORMAL = 4,
	/* 0x05 */ GE1_TYPE_VALLEY_FLOOR,
	/* 0x45 */ GE1_TYPE_HORSEBACK_ARCHERY = 0x45,
	/* 0x46 */ GE1_TYPE_TRAINING_GROUNDS_GUARD
};

enum EnGe1Limb
{
	/* 00 */ GE1_LIMB_NONE,
	/* 01 */ GE1_LIMB_WAIST,
	/* 02 */ GE1_LIMB_L_THIGH,
	/* 03 */ GE1_LIMB_L_LOWER_LEG,
	/* 04 */ GE1_LIMB_L_FOOT,
	/* 05 */ GE1_LIMB_R_THIGH,
	/* 06 */ GE1_LIMB_R_LOWER_LEG,
	/* 07 */ GE1_LIMB_R_FOOT,
	/* 08 */ GE1_LIMB_TORSO,
	/* 09 */ GE1_LIMB_L_UPPER_ARM,
	/* 10 */ GE1_LIMB_L_FOREARM,
	/* 11 */ GE1_LIMB_L_HAND,
	/* 12 */ GE1_LIMB_R_UPPER_ARM,
	/* 13 */ GE1_LIMB_R_FOREARM,
	/* 14 */ GE1_LIMB_R_HAND,
	/* 15 */ GE1_LIMB_HEAD,
	/* 16 */ GE1_LIMB_MAX
};

enum EnGe1Hairstyle
{
	/* 00 */ GE1_HAIR_BOB,
	/* 01 */ GE1_HAIR_STRAIGHT,
	/* 02 */ GE1_HAIR_SPIKY
};
struct EnGe1
{
	/* 0x0000 */ Actor actor;
	/* 0x014C */ ColliderCylinder collider;
	/* 0x0198 */ SkelAnime skelAnime;
	/* 0x01DC */ Vec3s jointTable[GE1_LIMB_MAX];
	/* 0x023C */ Vec3s morphTable[GE1_LIMB_MAX];
	/* 0x029C */ Vec3s headRot;
	/* 0x02A2 */ Vec3s unk_2A2;
	/* 0x02A8 */ s16 eyeIndex;
	/* 0x02AA */ Timer blinkTimer;
	/* 0x02AC */ u16 stateFlags;
	/* 0x02AE */ u8 hairstyle;
	/* 0x02AF */ TimerU8 cutsceneTimer;
	/* 0x02B0 */ AnimationHeader* animation;
	/* 0x02B4 */ EnGe1ActionFunc actionFunc;
	/* 0x02B8 */ EnGe1AnimFunc animFunc;
};
