//
//  PUBGOffsets.h
//  libShadowTrackerExtraDylib
//
//  Created by y on 2022/4/12.
//

#ifndef PUBGOffsets_hpp
#define PUBGOffsets_hpp

#include <stdio.h>
#include <string.h>

// ── World / Network ──────────────────────────────────────
#define kPersistentLevel       ""   // World -> Level* PersistentLevel
#define kNetDriver             ""   // World -> NetDriver* NetDriver
#define kServerConnection      ""   // NetDriver -> NetConnection* ServerConnection
#define kPlayerController      ""   // NetConnection -> Actor* OwningActor
#define klocalPlayerController ""

// ── Controller / Pawn ────────────────────────────────────
#define kPawn                  ""   // Controller -> Pawn* Pawn
#define kCharacter             ""   // Controller -> Character* Character
#define kControlRotation       ""   // Controller -> Rotator ControlRotation
#define kMyTeam                ""   // UAEPlayerController -> int TeamID

// ── Camera ───────────────────────────────────────────────
#define kCameraCache           ""   // PlayerCameraManager -> CameraCacheEntry CameraCache
#define kViewTarget            ""   // PlayerCameraManager -> TViewTarget ViewTarget
#define kPlayerCameraManager   ""   // PlayerController -> PlayerCameraManager*
#define kMyHUD                 ""   // PlayerController -> HUD* MyHUD

// ── HUD / Canvas ─────────────────────────────────────────
#define kLegacyFontSize        ""   // Font -> int LegacyFontSize
#define kCanvas                ""   // HUD -> Canvas* Canvas
#define kSizeX                 ""   // Canvas -> int SizeX
#define kSizeY                 ""   // Canvas -> int SizeY

// ── Character Stats ──────────────────────────────────────
#define kHealth                ""   // STExtraCharacter -> float Health
#define kHealthMax             ""   // STExtraCharacter -> float HealthMax
#define kbDead                 ""   // STExtraCharacter -> bool bDead
#define kbIsGunADS             ""   // STExtraCharacter -> bool bIsGunADS
#define kCurrentVehicle        ""   // STExtraCharacter -> STExtraVehicleBase*
#define kPoseState             ""   // STExtraBaseCharacter -> ESTEPoseState PoseState
#define kNearDeatchComponent   ""   // STExtraCharacter -> STCharacterNearDeathComp*
#define kBreathMax             ""   // STCharacterNearDeathComp -> float BreathMax
#define kbHidden               ""   // Actor -> bool bHidden
#define kPlayerName            ""   // UAECharacter -> FString PlayerName
#define kNation                ""   // UAECharacter -> FString Nation
#define kTeamID                ""   // UAECharacter -> int TeamID
#define kbIsAI                 ""   // UAECharacter -> bool bIsAI
#define kbIsMLAI               ""   // UAECharacter -> bool bIsMLAI
#define kMLAIPlayer            ""   // UAECharacter -> FString MLAIPlayerUID
#define kMesh                  ""   // Character -> SkeletalMeshComponent* Mesh
#define kStaticMesh            ""   // StaticMeshComponent -> StaticMesh*
#define kLastRenderTime        ""   // float LastRenderTime
#define kVelocity              ""   // MovementComponent -> Vector Velocity

// ── Scene Component ──────────────────────────────────────
#define kRootComponent         ""   // Actor -> SceneComponent* RootComponent
#define kRelativeLocation      ""   // RootComponent -> Vector RelativeLocation
#define kRelativeScale3D       ""   // SceneComponent -> Vector RelativeScale3D
#define kComponentVelocity     ""   // SceneComponent -> Vector ComponentVelocity
#define kRepMovement           ""   // ReplicatedMovement (vehicle)
#define kNearDeathBreath       ""   // STExtraBaseCharacter -> float NearDeathBreath
#define kbIsWeaponFiring       ""   // STExtraBaseCharacter -> bool bIsWeaponFiring

// ── Weapon ───────────────────────────────────────────────
#define kWeaponManagerComponent    ""   // STExtraBaseCharacter -> CharacterWeaponManagerComponent*
#define kCurrentWeaponReplicated   ""   // WeaponManagerComponent -> STExtraWeapon*
#define kShootWeaponComponent      ""   // STExtraShootWeapon -> STExtraShootWeaponComponent*
#define kShootWeaponEntityComp     ""   // STExtraShootWeapon -> ShootWeaponEntity*
#define kShootWeaponEntityComponent ""  // STExtraShootWeaponComponent -> ShootWeaponEntity*
#define kWeaponId                  ""   // WeaponEntity -> int WeaponId
#define kBulletFireSpeed           ""   // ShootWeaponEntity -> float BulletFireSpeed
#define kRecoilKickADS             ""   // ShootWeaponEntity -> float RecoilKickADS
#define kGameDeviationFactor       ""   // ShootWeaponEntity -> float GameDeviationFactor
#define kShootMode                 ""   // EShootWeaponShootMode ShootMode
#define kCurBulletNumInClip        ""   // int CurBulletNumInClip
#define kCurMaxBullet              ""   // int CurMaxBulletNumInOneClip

// ── Vehicle ──────────────────────────────────────────────
#define kVehicleCommon         ""   // STExtraVehicleBase -> VehicleCommonComponent*
#define kHP                    ""   // VehicleCommonComponent -> float HP
#define kHPMax                 ""   // VehicleCommonComponent -> float HPMax
#define kFuel                  ""   // VehicleCommonComponent -> float Fuel
#define kFuelMax               ""   // VehicleCommonComponent -> float FuelMax

// ── Loot / Items ─────────────────────────────────────────
#define kPickUpDataList        ""   // PickUpDataList
#define kGoodsID               ""   // 盒子ID
#define kTableName             ""   // FString ItemTableName

// ── Misc ─────────────────────────────────────────────────
#define kCurrentStates         ""   // uint64 CurrentStates
#define kFPS                   ""
#define kGameReplayType        ""
#define kScopeFov              ""
#define kPickUpAnim            ""
#define kPressingFireBtn       ""
#define kCurrentReloadWeapon   ""
#define kCachedBulletTrackComponent ""
#define wuhou                  ""

// ── Rotation ─────────────────────────────────────────────
#define kYaw                   ""
#define kRoll                  ""
#define kPitch                 ""

#endif /* PUBGOffsets_h */
