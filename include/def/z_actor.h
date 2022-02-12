#pragma once
struct Actor;
struct Lights;
struct GlobalContext;
struct ActorShape;
struct ActorContext;
struct Collider;
struct PosRot;
struct Vec3f;
struct Player;
struct ColliderInfo;
struct ColliderJntSph;
struct ActorEntry;
struct BodyBreak;
struct TitleCardContext;
struct TargetContext;
struct DynaPolyActor;
struct GraphicsContext;
struct CollisionPoly;
struct struct_80034A14_arg1;
struct SkelAnime;
struct struct_80034EC0_Entry;
struct Vec3s;

extern Gfx D_80116280[];

void ActorShadow_DrawCircle(Actor* actor, Lights* lights, GlobalContext* globalCtx);
void ActorShadow_DrawFeet(Actor* actor, Lights* lights, GlobalContext* globalCtx);
void ActorShadow_DrawHorse(Actor* actor, Lights* lights, GlobalContext* globalCtx);
void ActorShadow_DrawWhiteCircle(Actor* actor, Lights* lights, GlobalContext* globalCtx);
void ActorShape_Init(ActorShape* shape, f32 yOffset, ActorShadowFunc shadowDraw, f32 shadowScale);
s32 Actor_ActorAIsFacingActorB(Actor* actorA, Actor* actorB, s16 angle);
s32 Actor_ActorAIsFacingAndNearActorB(Actor* actorA, Actor* actorB, f32 range, s16 angle);
s32 Actor_ActorBIsFacingActorA(Actor* actorA, Actor* actorB, s16 angle);
u8 Actor_ApplyDamage(Actor* actor);
void Actor_ChangeCategory(GlobalContext* globalCtx, ActorContext* actorCtx, Actor* actor, u8 actorCategory);
Actor* Actor_Delete(ActorContext* actorCtx, Actor* actor, GlobalContext* globalCtx);
void Actor_DrawDoorLock(GlobalContext* globalCtx, s32 arg1, s32 arg2);
Actor* Actor_Find(ActorContext* actorCtx, s32 actorId, s32 actorCategory);
Actor* Actor_FindNearby(GlobalContext* globalCtx, Actor* refActor, s16 actorId, u8 actorCategory, f32 range);
Actor* Actor_GetCollidedExplosive(GlobalContext* globalCtx, Collider* collider);
PosRot* Actor_GetFocus(PosRot* arg0, Actor* actor);
Actor* Actor_GetProjectileActor(GlobalContext* globalCtx, Actor* refActor, f32 radius);
void Actor_GetScreenPos(GlobalContext* globalCtx, Actor* actor, s16* x, s16* y);
PosRot* Actor_GetWorld(PosRot* arg0, Actor* actor);
PosRot* Actor_GetWorldPosShapeRot(PosRot* arg0, Actor* actor);
u32 Actor_HasNoParent(Actor* actor, GlobalContext* globalCtx);
u32 Actor_HasParent(Actor* actor, GlobalContext* globalCtx);
f32 Actor_HeightDiff(Actor* actorA, Actor* actorB);
s32 Actor_IsFacingAndNearPlayer(Actor* actor, f32 range, s16 angle);
s32 Actor_IsFacingPlayer(Actor* actor, s16 angle);
s32 Actor_IsInUncullZone(GlobalContext* globalCtx, Actor* actorB, Vec3f* projectedPos, f32 projectedW);
s32 Actor_IsMounted(GlobalContext* globalCtx, Actor* horse);
s32 Actor_IsTargeted(GlobalContext* globalCtx, Actor* actor);
void Actor_Kill(Actor* actor);
void Actor_MountHorse(GlobalContext* globalCtx, Player* player, Actor* horse);
void Actor_MoveForward(Actor* actor);
void Actor_Noop(Actor* actor, GlobalContext* globalCtx);
s32 Actor_NotMounted(GlobalContext* globalCtx, Actor* horse);
s32 Actor_OtherIsTargeted(GlobalContext* globalCtx, Actor* actor);
u32 Actor_ProcessTalkRequest(Actor* actor, GlobalContext* globalCtx);
void Actor_SetColorFilter(Actor* actor, s16 colorFlag, s16 colorIntensityMax, s16 xluFlag, s16 duration);
void Actor_SetDropFlag(Actor* actor, ColliderInfo* colBody, s32 freezeFlag);
void Actor_SetDropFlagJntSph(Actor* actor, ColliderJntSph* colBody, s32 freezeFlag);
void Actor_SetFeetPos(Actor* actor, s32 limbIndex, s32 leftFootIndex, Vec3f* leftFootPos, s32 rightFootIndex, Vec3f* rightFootPos);
void Actor_SetFocus(Actor* actor, f32 offset);
void Actor_SetObjectDependency(GlobalContext* globalCtx, Actor* actor);
u32 Actor_SetRideActor(GlobalContext* globalCtx, Actor* horse, s32 arg2);
void Actor_SetScale(Actor* actor, f32 scale);
void Actor_SetTextWithPrefix(GlobalContext* globalCtx, Actor* actor, s16 textIdLower);
Actor* Actor_Spawn(ActorContext* actorCtx, GlobalContext* globalCtx, s16 actorId, f32 posX, f32 posY, f32 posZ, s16 rotX, s16 rotY, s16 rotZ, s16 params);
Actor* Actor_SpawnAsChild(ActorContext* actorCtx, Actor* parent, GlobalContext* globalCtx, s16 actorId, f32 posX, f32 posY, f32 posZ, s16 rotX, s16 rotY, s16 rotZ, s16 params);
Actor* Actor_SpawnEntry(ActorContext* actorCtx, ActorEntry* actorEntry, GlobalContext* globalCtx);
void Actor_SpawnFloorDustRing(GlobalContext* globalCtx, Actor* actor, Vec3f* posXZ, f32 radius, s32 amountMinusOne, f32 randAccelWeight, s16 scale, s16 scaleStep, u8 useLighting);
void Actor_SpawnTransitionActors(GlobalContext* globalCtx, ActorContext* actorCtx);
s16 Actor_TestFloorInDirection(Actor* actor, GlobalContext* globalCtx, f32 distance, s16 angle);
u32 Actor_TextboxIsClosing(Actor* actor, GlobalContext* globalCtx);
void Actor_UpdateAll(GlobalContext* globalCtx, ActorContext* actorCtx);
void Actor_UpdateBgCheckInfo(GlobalContext* globalCtx, Actor* actor, f32 wallCheckHeight, f32 wallCheckRadius, f32 ceilingCheckHeight, s32 flags);
f32 Actor_WorldDistXYZToActor(Actor* actorA, Actor* actorB);
f32 Actor_WorldDistXYZToPoint(Actor* actor, Vec3f* refPoint);
f32 Actor_WorldDistXZToActor(Actor* actorA, Actor* actorB);
f32 Actor_WorldDistXZToPoint(Actor* actor, Vec3f* refPoint);
s16 Actor_WorldPitchTowardActor(Actor* actorA, Actor* actorB);
s16 Actor_WorldPitchTowardPoint(Actor* actor, Vec3f* refPoint);
s16 Actor_WorldYawTowardActor(Actor* actorA, Actor* actorB);
s16 Actor_WorldYawTowardPoint(Actor* actor, Vec3f* refPoint);
void Audio_PlayActorSound2(Actor* actor, u16 sfxId);
void BodyBreak_Alloc(BodyBreak* bodyBreak, s32 count, GlobalContext* globalCtx);
void BodyBreak_SetInfo(BodyBreak* bodyBreak, s32 limbIndex, s32 minLimbIndex, s32 maxLimbIndex, u32 count, Gfx** dList, s16 objectId);
s32 BodyBreak_SpawnParts(Actor* actor, BodyBreak* bodyBreak, GlobalContext* globalCtx, s16 type);
void Enemy_StartFinishingBlow(GlobalContext* globalCtx, Actor* actor);
s32 Flags_GetClear(GlobalContext* globalCtx, s32 flag);
s32 Flags_GetCollectible(GlobalContext* globalCtx, s32 flag);
s32 Flags_GetEventChkInf(s32 flag);
s32 Flags_GetInfTable(s32 flag);
s32 Flags_GetSwitch(GlobalContext* globalCtx, s32 flag);
s32 Flags_GetTempClear(GlobalContext* globalCtx, s32 flag);
s32 Flags_GetTreasure(GlobalContext* globalCtx, s32 flag);
s32 Flags_GetUnknown(GlobalContext* globalCtx, s32 flag);
void Flags_SetClear(GlobalContext* globalCtx, s32 flag);
void Flags_SetCollectible(GlobalContext* globalCtx, s32 flag);
void Flags_SetEventChkInf(s32 flag);
void Flags_SetInfTable(s32 flag);
void Flags_SetSwitch(GlobalContext* globalCtx, s32 flag);
void Flags_SetTempClear(GlobalContext* globalCtx, s32 flag);
void Flags_SetTreasure(GlobalContext* globalCtx, s32 flag);
void Flags_SetUnknown(GlobalContext* globalCtx, s32 flag);
void Flags_UnsetClear(GlobalContext* globalCtx, s32 flag);
void Flags_UnsetSwitch(GlobalContext* globalCtx, s32 flag);
void Flags_UnsetTempClear(GlobalContext* globalCtx, s32 flag);
void Flags_UnsetUnknown(GlobalContext* globalCtx, s32 flag);
f32 Player_GetHeight(Player* player);
s32 Player_IsFacingActor(Actor* actor, s16 angle, GlobalContext* globalCtx);
f32 Rand_CenteredFloat(f32 f);
f32 Rand_ZeroFloat(f32 f);
void TitleCard_InitBossName(GlobalContext* globalCtx, TitleCardContext* titleCtx, void* texture, s16 x, s16 y, u8 width, u8 height);
void TitleCard_InitPlaceName(GlobalContext* globalCtx, TitleCardContext* titleCtx, void* texture, s32 x, s32 y, s32 width, s32 height, s32 delay);
void func_8002BE04(GlobalContext* globalCtx, Vec3f* arg1, Vec3f* arg2, f32* arg3);
void func_8002C124(TargetContext* targetCtx, GlobalContext* globalCtx);
s32 func_8002D53C(GlobalContext* globalCtx, TitleCardContext* titleCtx);
void func_8002D7EC(Actor* actor);
void func_8002D868(Actor* actor);
void func_8002D908(Actor* actor);
void func_8002D97C(Actor* actor);
void func_8002D9A4(Actor* actor, f32 arg1);
void func_8002DBD0(Actor* actor, Vec3f* result, Vec3f* arg2);
f32 func_8002DCE4(Player* player);
s32 func_8002DD6C(Player* player);
s32 func_8002DD78(Player* player);
s32 func_8002DDE4(GlobalContext* globalCtx);
s32 func_8002DDF4(GlobalContext* globalCtx);
void func_8002DE04(GlobalContext* globalCtx, Actor* actorA, Actor* actorB);
void func_8002DE74(GlobalContext* globalCtx, Player* player);
s32 func_8002DEEC(Player* player);
void func_8002DF18(GlobalContext* globalCtx, Player* player);
s32 func_8002DF38(GlobalContext* globalCtx, Actor* actor, u8 csMode);
s32 func_8002DF54(GlobalContext* globalCtx, Actor* actor, u8 arg2);
void func_8002DF90(DynaPolyActor* dynaActor);
void func_8002DFA4(DynaPolyActor* dynaActor, f32 arg1, s16 arg2);
Hilite* func_8002EABC(Vec3f* object, Vec3f* eye, Vec3f* lightDir, GraphicsContext* gfxCtx);
Hilite* func_8002EB44(Vec3f* object, Vec3f* eye, Vec3f* lightDir, GraphicsContext* gfxCtx);
void func_8002EBCC(Actor* actor, GlobalContext* globalCtx, s32 flag);
void func_8002ED80(Actor* actor, GlobalContext* globalCtx, s32 flag);
s32 func_8002F0C8(Actor* actor, Player* player, s32 arg2);
s32 func_8002F1C4(Actor* actor, GlobalContext* globalCtx, f32 arg2, f32 arg3, u32 arg4);
s32 func_8002F298(Actor* actor, GlobalContext* globalCtx, f32 arg2, u32 arg3);
s32 func_8002F2CC(Actor* actor, GlobalContext* globalCtx, f32 arg2);
s32 func_8002F2F4(Actor* actor, GlobalContext* globalCtx);
s8 func_8002F368(GlobalContext* globalCtx);
s32 func_8002F434(Actor* actor, GlobalContext* globalCtx, s32 getItemId, f32 xzRange, f32 yRange);
void func_8002F554(Actor* actor, GlobalContext* globalCtx, s32 getItemId);
void func_8002F580(Actor* actor, GlobalContext* globalCtx);
void func_8002F5C4(Actor* actorA, Actor* actorB, GlobalContext* globalCtx);
void func_8002F5F0(Actor* actor, GlobalContext* globalCtx);
void func_8002F698(GlobalContext* globalCtx, Actor* actor, f32 arg2, s16 arg3, f32 arg4, u32 arg5, u32 arg6);
void func_8002F6D4(GlobalContext* globalCtx, Actor* actor, f32 arg2, s16 arg3, f32 arg4, u32 arg5);
void func_8002F71C(GlobalContext* globalCtx, Actor* actor, f32 arg2, s16 arg3, f32 arg4);
void func_8002F758(GlobalContext* globalCtx, Actor* actor, f32 arg2, s16 arg3, f32 arg4, u32 arg5);
void func_8002F7A0(GlobalContext* globalCtx, Actor* actor, f32 arg2, s16 arg3, f32 arg4);
void func_8002F7DC(Actor* actor, u16 sfxId);
void func_8002F850(GlobalContext* globalCtx, Actor* actor);
void func_8002F8F0(Actor* actor, u16 sfxId);
void func_8002F91C(Actor* actor, u16 sfxId);
void func_8002F948(Actor* actor, u16 sfxId);
void func_8002F974(Actor* actor, u16 sfxId);
void func_8002F994(Actor* actor, s32 arg1);
s32 func_8002F9EC(GlobalContext* globalCtx, Actor* actor, CollisionPoly* poly, s32 bgId, Vec3f* pos);
void func_800304B0(GlobalContext* globalCtx);
void func_800304DC(GlobalContext* globalCtx, ActorContext* actorCtx, ActorEntry* actorEntry);
void func_800315AC(GlobalContext* globalCtx, ActorContext* actorCtx);
void func_80031A28(GlobalContext* globalCtx, ActorContext* actorCtx);
void func_80031B14(GlobalContext* globalCtx, ActorContext* actorCtx);
void func_80031C3C(ActorContext* actorCtx, GlobalContext* globalCtx);
Actor* func_80032AF0(GlobalContext* globalCtx, ActorContext* actorCtx, Actor** actorPtr, Player* player);
s16 func_80032CB4(s16* arg0, s16 arg1, s16 arg2, s16 arg3);
void func_80033480(GlobalContext* globalCtx, Vec3f* posBase, f32 randRangeDiameter, s32 amountMinusOne, s16 scaleBase, s16 scaleStep, u8 arg6);
Actor* func_80033684(GlobalContext* globalCtx, Actor* explosiveActor);
f32 func_80033AEC(Vec3f* arg0, Vec3f* arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
void func_80033C30(Vec3f* arg0, Vec3f* arg1, u8 alpha, GlobalContext* globalCtx);
void func_80033DB8(GlobalContext* globalCtx, s16 arg1, s16 arg2);
void func_80033E1C(GlobalContext* globalCtx, s16 arg1, s16 arg2, s16 arg3);
void func_80033E88(Actor* actor, GlobalContext* globalCtx, s16 arg2, s16 arg3);
void func_8003424C(GlobalContext* globalCtx, Vec3f* arg1);
Hilite* func_800342EC(Vec3f* object, GlobalContext* globalCtx);
Hilite* func_8003435C(Vec3f* object, GlobalContext* globalCtx);
s32 func_800343CC(GlobalContext* globalCtx, Actor* actor, s16* arg2, f32 interactRange, u16 (*unkFunc1)(GlobalContext*, Actor*), s16 (*unkFunc2)(GlobalContext*, Actor*));
s16 func_800347E8(s16 arg0);
void func_80034A14(Actor* actor, struct_80034A14_arg1* arg1, s16 arg2, s16 arg3);
void func_80034BA0(GlobalContext* globalCtx, SkelAnime* skelAnime, OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw, Actor* actor, s16 alpha);
void func_80034CC4(GlobalContext* globalCtx, SkelAnime* skelAnime, OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw, Actor* actor, s16 alpha);
s16 func_80034DD4(Actor* actor, GlobalContext* globalCtx, s16 arg2, f32 arg3);
void func_80034EC0(SkelAnime* skelAnime, struct_80034EC0_Entry* animations, s32 index);
void func_80034F54(GlobalContext* globalCtx, s16* arg1, s16* arg2, s32 arg3);
s32 func_800354B4(GlobalContext* globalCtx, Actor* actor, f32 range, s16 arg3, s16 arg4, s16 arg5);
void func_8003555C(GlobalContext* globalCtx, Vec3f* pos, Vec3f* velocity, Vec3f* accel);
void func_800355B8(GlobalContext* globalCtx, Vec3f* pos);
u8 func_800355E4(GlobalContext* globalCtx, Collider* collider);
void func_80035844(Vec3f* arg0, Vec3f* arg1, Vec3s* arg2, s32 arg3);
Actor* func_800358DC(Actor* actor, Vec3f* spawnPos, Vec3s* spawnRot, f32* arg3, s32 timer, s16* unused, GlobalContext* globalCtx, s16 params, s32 arg8);
void func_800359B8(Actor* actor, s16 arg1, Vec3s* arg2);
u16 func_80037C30(GlobalContext* globalCtx, s16 arg1);
s32 func_80037D98(GlobalContext* globalCtx, Actor* actor, s16 arg2, s32* arg3);
s32 func_80038290(GlobalContext* globalCtx, Actor* actor, Vec3s* arg2, Vec3s* arg3, Vec3f arg4);
