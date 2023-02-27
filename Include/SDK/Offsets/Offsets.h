#pragma once
#include<Windows.h>

#include <cstdint>

namespace Offsets
{
	uintptr_t client_render_targets = 0x1db7988;
	uintptr_t ibase_client_dll = 0x1b1d620;
	uintptr_t iclient_entity_list = 0x1b37937;
	uintptr_t cprediction = 0x0;
	uintptr_t iv_model_render = 0x0;
	uintptr_t vgui_system = 0x0;
	uintptr_t iv_render_view = 0x136ba88;
	uintptr_t iv_debug_overlay = 0x0;
	uintptr_t iv_model_info_client = 0x0;
	uintptr_t iv_engine_client = 0x0;
	uintptr_t iv_engine_trace = 0x0;
	uintptr_t inetwork_string_table = 0x0;
	uintptr_t cinput = 0x0;
	uintptr_t cengine = 0x0;
	uintptr_t iswapchain = 0xbbb8898;
	uintptr_t cl_entitylist = 0x0;
	uintptr_t local_entity_handle = 0x0;
	uintptr_t local_player = 0x7744cd8;
	uintptr_t global_vars = 0x13609a8;
	uintptr_t name_list = 0xbc9ec10;
	uintptr_t view_render = 0x54ab63;
	uintptr_t view_matrix = 0x0;
	uintptr_t client_state = 0x14622a0;
	uintptr_t sign_on_state = 0x1462338;
	uintptr_t level_name = 0x1462460;

	uintptr_t glow_enable = 0x765;
	uintptr_t glow_type = 0x2c0;
	uintptr_t glow_color = 0x1d0;

	uintptr_t cl_liveapi_spectator_only = 0x1410B7018;

	inline uintptr_t thirdperson_override = 0x01b11020 + 0x6c;
	inline uintptr_t m_thirdPersonShoulderView = 0x36c8;
	inline uintptr_t host_timescale = 0x014c72c0;
	inline uintptr_t heirloom_addr = 0x14118C2F8;
	//inline uintptr_t give_heirloom = 0x14118C2F8;

	namespace Classes
	{
		namespace Buttons
		{
			constexpr auto in_attack = 0x0766a958;
			constexpr auto	in_backward = 0x0766aa38;
			constexpr auto	in_break = 0x0bbdf1e8;
			constexpr auto	in_camin = 0x0bfdde50;
			constexpr auto	in_camout = 0x0bbdf560;
			constexpr auto	in_campitchdown = 0x0bbdf510;
			constexpr auto	in_campitchup = 0x0bfddee8;
			constexpr auto	in_camyawleft = 0x0bbdfe30;
			constexpr auto	in_camyawright = 0x0bbdf540;
			constexpr auto	in_commandermousemove = 0x0766a910;
			constexpr auto	in_dodge = 0x0766a9e8;
			constexpr auto	in_duck = 0x0bbdf208;
			constexpr auto	in_forward = 0x0766aa10;
			constexpr auto	in_graph = 0x0766a968;
			constexpr auto	in_jump = 0x0766a9c8;
			constexpr auto	in_klook = 0x0bfddec0;
			constexpr auto	in_left = 0x0bbdfdf8;
			constexpr auto	in_lookdown = 0x0bbdf530;
			constexpr auto	in_lookup = 0x0bbdf1f8;
			constexpr auto	in_melee = 0x0bfdded0;
			constexpr auto	in_movedown = 0x0bbdfe40;
			constexpr auto	in_moveleft = 0x0766aa00;
			constexpr auto	in_moveright = 0x0766aa28;
			constexpr auto	in_moveup = 0x0bfddea0;
			constexpr auto	in_offhand0 = 0x0bfddeb0;
			constexpr auto	in_offhand1 = 0x0bbdfde8;
			constexpr auto	in_offhand2 = 0x0bbdf340;
			constexpr auto	in_offhand3 = 0x0bbdf320;
			constexpr auto	in_offhand4 = 0x0bbdf2e0;
			constexpr auto	in_pause_menu = 0x0766a9b8;
			constexpr auto	in_ping = 0x0766a928;
			constexpr auto	in_reload = 0x0766a978;
			constexpr auto	in_right = 0x0bbdf550;
			constexpr auto	in_score = 0x0bbdf350;
			constexpr auto	in_scriptCommand3 = 0x0bfdde70;
			constexpr auto	in_showscores = 0x0bbdf350;
			constexpr auto	in_speed = 0x0766a900;
			constexpr auto	in_strafe = 0x0766a988;
			constexpr auto	in_toggle_duck = 0x0bfdde80;
			constexpr auto	in_toggle_zoom = 0x0bfdde60;
			constexpr auto	in_use = 0x0bbdf330;
			constexpr auto	in_useAndReload = 0x0bbdf2d0;
			constexpr auto	in_use_alt = 0x0bfdde90;
			constexpr auto	in_use_long = 0x0bbdf2c0;
			constexpr auto	in_variableScopeToggle = 0x0766a9a0;
			constexpr auto	in_walk = 0x0bbdf300;
			constexpr auto	in_weaponCycle = 0x0bbdf520;
			constexpr auto	in_weapon_discard = 0x0bbdf2f0;
			constexpr auto	in_zoom = 0x0bbdf310;
		}
		// Inheritance: 

		namespace CBaseEntity
		{
			constexpr auto m_parentAttachment = 0x20; // Integer
			constexpr auto m_fEffects = 0x40; // Integer
			constexpr auto m_usableType = 0x44; // Integer
			constexpr auto m_cellX = 0x48; // Integer
			constexpr auto m_cellY = 0x4c; // Integer
			constexpr auto m_cellZ = 0x50; // Integer
			constexpr auto m_clrRender = 0x50; // Integer
			constexpr auto m_localOrigin = 0x54; // Vector
			constexpr auto m_clIntensity = 0x54; // Integer
			constexpr auto m_nModelIndex = 0x60; // Integer
			constexpr auto m_bossPlayer = 0x124; // Integer
			constexpr auto m_shieldHealth = 0x170; // Integer
			constexpr auto m_shieldHealthMax = 0x174; // Integer
			constexpr auto m_wantsScopeHighlight = 0x3ec; // Integer
			constexpr auto m_networkedFlags = 0x3f0; // Integer
			constexpr auto m_visibilityFlags = 0x444; // Integer
			constexpr auto m_iTeamNum = 0x44c; // Integer
			constexpr auto m_teamMemberIndex = 0x454; // Integer
			constexpr auto m_squadID = 0x458; // Integer
			constexpr auto m_grade = 0x45c; // Integer
			constexpr auto m_ignorePredictedTriggerFlags = 0x460; // Integer
			constexpr auto m_passThroughFlags = 0x468; // Integer
			constexpr auto m_passThroughThickness = 0x46c; // Integer
			constexpr auto m_passThroughDirection = 0x470; // Float
			constexpr auto m_bIsSoundCodeControllerValueSet = 0x480; // Integer
			constexpr auto m_flSoundCodeControllerValue = 0x484; // Float
			constexpr auto m_localAngles = 0x494; // Vector
			constexpr auto m_hOwnerEntity = 0x4a8; // Integer
			constexpr auto m_bRenderWithViewModels = 0x4ac; // Integer
			constexpr auto m_nRenderFX = 0x4ad; // Integer
			constexpr auto m_nRenderMode = 0x4b9; // Integer
			constexpr auto m_vecMins = 0x4d0; // Vector
			constexpr auto m_vecMaxs = 0x4dc; // Vector
			constexpr auto m_usSolidFlags = 0x4e8; // Integer
			constexpr auto m_nSolidType = 0x4ec; // Integer
			constexpr auto m_triggerBloat = 0x4ed; // Integer
			constexpr auto m_collisionDetailLevel = 0x4ee; // Integer
			constexpr auto m_nSurroundType = 0x4fc; // Integer
			constexpr auto m_vecSpecifiedSurroundingMins = 0x508; // Vector
			constexpr auto m_vecSpecifiedSurroundingMaxs = 0x514; // Vector
			constexpr auto m_CollisionGroup = 0x540; // Integer
			constexpr auto m_contents = 0x544; // Integer
			constexpr auto m_collideWithOwner = 0x548; // Integer
			constexpr auto m_iSignifierName = 0x580; // String
			constexpr auto m_iName = 0x589; // String
			constexpr auto m_scriptNameIndex = 0x690; // Integer
			constexpr auto m_instanceNameIndex = 0x694; // Integer
			constexpr auto m_holdUsePrompt = 0x718; // String
			constexpr auto m_pressUsePrompt = 0x720; // String
			constexpr auto m_phaseShiftFlags = 0x7b8; // Integer
			constexpr auto m_baseTakeDamage = 0x7bc; // Integer
			constexpr auto m_invulnerableToDamageCount = 0x7c0; // Integer
			constexpr auto m_attachmentLerpStartOrigin = 0x83c; // Vector
			constexpr auto m_attachmentLerpStartAngles = 0x848; // Vector
			constexpr auto m_parentAttachmentModel = 0x858; // Integer
			constexpr auto m_fadeDist = 0x864; // Float
			constexpr auto m_dissolveEffectEntityHandle = 0x914; // Integer
			constexpr auto m_usablePriority = 0x924; // Integer
			constexpr auto m_usableDistanceOverride = 0x928; // Float
			constexpr auto m_usableFOV = 0x92c; // Float
			constexpr auto m_usePromptSize = 0x930; // Float
			constexpr auto m_firstChildEntityLink = 0xa40; // Integer
			constexpr auto m_firstParentEntityLink = 0xa44; // Integer
			constexpr auto m_realmsBitMask = 0xa48; // Integer64
		}

		// Inheritance: 
		namespace CPlayer
		{
			constexpr auto m_passives = 0x0; // Array
			constexpr auto m_vecAbsOrigin = 0x4; // Vector
			constexpr auto m_fFlags = 0x98; // Integer
			constexpr auto m_hGroundEntity = 0x438; // Integer
			constexpr auto m_iHealth = 0x43c; // Integer
			constexpr auto m_flMaxspeed = 0x440; // Float
			constexpr auto m_iMaxHealth = 0x578; // Integer
			constexpr auto m_lifeState = 0x798; // Integer
			constexpr auto m_decalIndex = 0xe64; // Integer
			constexpr auto m_titanSoul = 0x1aac; // Integer
			constexpr auto m_bZooming = 0x1c51; // Integer
			constexpr auto m_zoomBaseFrac = 0x1c58; // Float
			constexpr auto m_flHullHeight = 0x2114; // Float
			constexpr auto m_angEyeAnglesx = 0x2118; // Float
			constexpr auto m_angEyeAnglesy = 0x211c; // Float
			constexpr auto m_traversalAnimProgress = 0x2124; // Float
			constexpr auto m_sprintTiltFrac = 0x2128; // Float
			constexpr auto m_ziprailBankTiltFrac = 0x212c; // Float
			constexpr auto m_ammoPoolCapacity = 0x25ac; // Integer
			constexpr auto m_hasBadReputation = 0x25b0; // Integer
			constexpr auto m_hardware = 0x25b8; // Integer
			constexpr auto m_unspoofedHardware = 0x25b9; // Integer
			constexpr auto m_platformUserId = 0x25c0; // Integer64
			constexpr auto m_unSpoofedPlatformUserId = 0x25c8; // Integer64
			constexpr auto m_EadpUserId = 0x25d0; // Integer64
			constexpr auto m_crossPlayChat = 0x25d8; // Integer
			constexpr auto m_crossPlayChatFriends = 0x25d9; // Integer
			constexpr auto m_laserSightColorCustomized = 0x25da; // Integer
			constexpr auto m_laserSightColor = 0x25dc; // Vector
			constexpr auto m_classModsActive = 0x25e8; // Integer64
			constexpr auto m_passives0 = 0x2720; // Integer64
			constexpr auto m_bleedoutState = 0x2740; // Integer
			constexpr auto m_bleedoutStartTime = 0x2744; // Float
			constexpr auto m_damageComboStartHealth = 0x28f0; // Integer
			constexpr auto m_gestureAutoKillBitfield = 0x29a4; // Integer
			constexpr auto m_autoSprintForced = 0x29e8; // Integer
			constexpr auto m_fIsSprinting = 0x29ec; // Integer
			constexpr auto m_playerSettingForStickySprintForward = 0x29fa; // Integer
			constexpr auto m_playerVehicleCount = 0x2a30; // Integer
			constexpr auto m_playerVehicleDriven = 0x2a34; // Integer
			constexpr auto m_duckState = 0x2a3c; // Integer
			constexpr auto m_leanState = 0x2a40; // Integer
			constexpr auto m_canStand = 0x2a45; // Integer
			constexpr auto m_StandHullMin = 0x2a48; // Vector
			constexpr auto m_StandHullMax = 0x2a54; // Vector
			constexpr auto m_DuckHullMin = 0x2a60; // Vector
			constexpr auto m_DuckHullMax = 0x2a6c; // Vector
			constexpr auto m_entitySyncingWithMe = 0x2a78; // Integer
			constexpr auto m_upDir = 0x2a7c; // Vector
			constexpr auto m_traversalState = 0x2b04; // Integer
			constexpr auto m_traversalType = 0x2b08; // Integer
			constexpr auto m_traversalForwardDir = 0x2b34; // Vector
			constexpr auto m_traversalRefPos = 0x2b40; // Vector
			constexpr auto m_traversalYawDelta = 0x2b6c; // Float
			constexpr auto m_traversalYawPoseParameter = 0x2b70; // Integer
			constexpr auto m_wallClimbSetUp = 0x2b88; // Integer
			constexpr auto m_wallHanging = 0x2b89; // Integer
			constexpr auto m_grapplePoints = 0x2c88; // Array
			constexpr auto m_grappleVel = 0x2c90; // Vector
			constexpr auto m_grapplePoints0 = 0x2c9c; // Vector
			constexpr auto m_grapplePointCount = 0x2ccc; // Integer
			constexpr auto m_grappleAttached = 0x2cd0; // Integer
			constexpr auto m_grapplePulling = 0x2cd1; // Integer
			constexpr auto m_grappleSwinging = 0x2cd2; // Integer
			constexpr auto m_grappleRetracting = 0x2cd3; // Integer
			constexpr auto m_grappleForcedRetracting = 0x2cd4; // Integer
			constexpr auto m_grappleGracePeriodFinished = 0x2cd5; // Integer
			constexpr auto m_grappleUsedPower = 0x2cd8; // Float
			constexpr auto m_grappleMeleeTarget = 0x2cec; // Integer
			constexpr auto m_grappleAutoAimTarget = 0x2cf0; // Integer
			constexpr auto m_grappleHasGoodVelocity = 0x2cf4; // Integer
			constexpr auto m_grappleSwingDetachLowSpeed = 0x2cfc; // Float
			constexpr auto m_grappleActive = 0x2d18; // Integer
			constexpr auto m_turret = 0x2d5c; // Integer
			constexpr auto m_activeZipline = 0x2ea0; // Integer
			constexpr auto m_ziplineValid3pWeaponLayerAnim = 0x2eac; // Integer
			constexpr auto m_ziplineState = 0x2eb0; // Integer
			constexpr auto m_ziplineGrenadeBeginStationEntity = 0x2f4c; // Integer
			constexpr auto m_ziplineGrenadeBeginStationAttachmentId = 0x2f50; // Integer
			constexpr auto m_isPerformingBoostAction = 0x2f8d; // Integer
			constexpr auto m_lastJumpPadTouched = 0x3088; // Integer
			constexpr auto m_launchCount = 0x3090; // Integer
			constexpr auto m_useCredit = 0x31f8; // Integer
			constexpr auto m_playerFlags = 0x3208; // Integer
			constexpr auto m_hasMic = 0x3210; // Integer
			constexpr auto m_inPartyChat = 0x3211; // Integer
			constexpr auto m_communicationsAutoBlocked = 0x3212; // Integer
			constexpr auto m_playerMoveSpeedScale = 0x3214; // Float
			constexpr auto m_bShouldDrawPlayerWhileUsingViewEntity = 0x3460; // Integer
			constexpr auto m_iSpawnParity = 0x34cc; // Integer
			constexpr auto m_grappleHook = 0x3678; // Integer
			constexpr auto m_petTitan = 0x367c; // Integer
			constexpr auto m_xp = 0x36a4; // Integer
			constexpr auto m_skill_mu = 0x36ac; // Float
			constexpr auto m_bHasMatchAdminRole = 0x36b0; // Integer
			constexpr auto m_ubEFNoInterpParity = 0x3ff0; // Integer
			constexpr auto m_hColorCorrectionCtrl = 0x3ff4; // Integer
			constexpr auto m_title = 0x4018; // String
			constexpr auto m_nPlayerCond = 0x4350; // Integer
			constexpr auto m_pilotClassIndex = 0x439c; // Integer
			constexpr auto m_pilotClassActivityModifier = 0x43a0; // Integer
			constexpr auto m_playerScriptNetDataGlobal = 0x4628; // Integer
			constexpr auto m_helmetType = 0x4630; // Integer
			constexpr auto m_armorType = 0x4634; // Integer
			constexpr auto m_controllerModeActive = 0x463c; // Integer
			constexpr auto m_skydiveForwardPoseValueTarget = 0x4658; // Float
			constexpr auto m_skydiveSidePoseValueTarget = 0x4664; // Float
			constexpr auto m_skydiveState = 0x468c; // Integer
			constexpr auto m_skydiveDiveAngle = 0x46a4; // Float
			constexpr auto m_skydiveIsDiving = 0x46a8; // Integer
			constexpr auto m_skydiveSpeed = 0x46ac; // Float
			constexpr auto m_skydiveStrafeAngle = 0x46b0; // Float
			constexpr auto m_skydivePlayerPitch = 0x46c4; // Float
			constexpr auto m_skydivePlayerYaw = 0x46c8; // Float
			constexpr auto m_skydiveFromSkywardLaunch = 0x4705; // Integer
			constexpr auto m_skywardLaunchState = 0x4708; // Integer
			constexpr auto m_skywardLaunchSlowStartTime = 0x471c; // Float
			constexpr auto m_skywardLaunchSlowEndTime = 0x4720; // Float
			constexpr auto m_skywardLaunchFastEndTime = 0x4724; // Float
			constexpr auto m_skywardLaunchEndTime = 0x472c; // Float
			constexpr auto m_skywardLaunchSlowSpeed = 0x4734; // Float
			constexpr auto m_skywardLaunchFastSpeed = 0x4738; // Float
			constexpr auto m_skywardOffset = 0x473c; // Vector
			constexpr auto m_skywardLaunchInterrupted = 0x474c; // Integer
			constexpr auto m_skywardLaunchFollowing = 0x474d; // Integer
			constexpr auto m_armoredLeapAirPos = 0x4754; // Vector
			constexpr auto m_armoredLeapEndPos = 0x4760; // Vector
			constexpr auto m_armoredLeapType = 0x476c; // Integer
			constexpr auto m_armoredLeapPhase = 0x4770; // Integer
			constexpr auto m_dragReviveState = 0x47e0; // Integer
			constexpr auto m_dragReviveOutroStartTime = 0x47e4; // Float
			constexpr auto m_reviveTarget = 0x47e8; // Integer
			constexpr auto m_akimboShouldAltFire = 0x48c8; // Integer
			constexpr auto m_lastVisibleTime = 0x1a70;
			constexpr auto m_hObserverTarget = 0x34e0;
			constexpr auto m_latestPrimaryWeapons = 0x1a14;
			constexpr auto m_vecPunchWeapon_Angle = 0x24a8;
			constexpr auto m_view_angles = m_ammoPoolCapacity - 0x14;
			constexpr auto m_breath_angles = m_view_angles - 0x10;
		}

		namespace CGrappleHook
		{
			constexpr auto m_parentAttachment = 0x20; // Integer
			constexpr auto m_cellX = 0x48; // Integer
			constexpr auto m_cellY = 0x4c; // Integer
			constexpr auto m_cellZ = 0x50; // Integer
			constexpr auto m_localOrigin = 0x54; // Vector
			constexpr auto m_nModelIndex = 0x60; // Integer
			constexpr auto m_visibilityFlags = 0x444; // Integer
			constexpr auto m_localAngles = 0x494; // Vector
			constexpr auto m_hOwnerEntity = 0x4a8; // Integer
			constexpr auto m_realmsBitMask = 0xa48; // Integer64
			constexpr auto m_grappleZipline = 0x1640; // Integer
		}

		namespace CPointCamera
		{
			constexpr auto m_FOV = 0xac0; // Float
			constexpr auto m_bFogEnable = 0xae8; // Integer
			constexpr auto m_bActive = 0xae9; // Integer
		}

		namespace CBaseCombatCharacter
		{
			constexpr auto m_vecViewOffsetx = 0x34; // Float
			constexpr auto m_vecViewOffsety = 0x38; // Float
			constexpr auto m_vecViewOffsetz = 0x3c; // Float
			constexpr auto m_cloakEndTime = 0x19c; // Float
			constexpr auto m_cloakFadeOutStartTime = 0x1a4; // Float
			constexpr auto m_cloakFadeInDuration = 0x1a8; // Float
			constexpr auto m_cloakFlickerAmount = 0x1ac; // Float
			constexpr auto m_networkedFlags = 0x3f0; // Integer
			constexpr auto m_deathVelocity = 0x474; // Vector
			constexpr auto m_nameVisibilityFlags = 0x9b8; // Integer
			constexpr auto m_lastFiredWeapon = 0x1988; // Integer
			constexpr auto m_sharedEnergyCount = 0x1990; // Integer
			constexpr auto m_sharedEnergyTotal = 0x1994; // Integer
			constexpr auto m_sharedEnergyLockoutThreshold = 0x1998; // Integer
			constexpr auto m_sharedEnergyRegenDelay = 0x19a4; // Float
			constexpr auto m_lastCycleSlot = 0x1a34; // Integer
			constexpr auto m_weaponPermission = 0x1a3c; // Integer
			constexpr auto m_weaponDisabledInScript = 0x1a44; // Integer
			constexpr auto m_weaponDisabledFlags = 0x1a5a; // Integer
			constexpr auto m_weaponInventorySlotLockedFlags = 0x1a5c; // Integer
			constexpr auto m_weaponTypeDisabledFlags = 0x1a60; // Integer
			constexpr auto m_weaponAmmoRegenDisabled = 0x1a6d; // Integer
			constexpr auto m_weaponAmmoRegenDisabledRefCount = 0x1a70; // Integer
			constexpr auto m_hudInfo_visibilityTestAlwaysPasses = 0x1a74; // Integer
			constexpr auto m_contextAction = 0x1a88; // Integer
			constexpr auto m_phaseShiftType = 0x1ab4; // Integer
			constexpr auto m_targetInfoPingValue = 0x1be0; // Integer
		}
		namespace CBaseAnimating
		{
			constexpr auto m_animPlaybackRate = 0x10; // Float
			constexpr auto m_animModelIndex = 0x14; // Integer
			constexpr auto m_nNewSequenceParity = 0x18; // Integer
			constexpr auto m_animFrozen = 0x22; // Integer
			constexpr auto m_bClientSideRagdoll = 0x23; // Integer
			constexpr auto m_vecForce = 0x24; // Vector
			constexpr auto m_flEstIkOffset = 0x90; // Float
			constexpr auto m_passDamageToParent = 0x7c4; // Integer
			constexpr auto m_animNetworkFlags = 0xa88; // Integer
			constexpr auto m_animActive = 0xa8c; // Integer
			constexpr auto m_animCollisionEnabled = 0xa8f; // Integer
			constexpr auto m_animRelativeToGroundEnabled = 0xa90; // Integer
			constexpr auto m_animPlantingEnabled = 0xa91; // Integer
			constexpr auto m_animInitialPos = 0xa94; // Vector
			constexpr auto m_animInitialVel = 0xaa0; // Vector
			constexpr auto m_animInitialRot = 0xaac; // Table
			constexpr auto m_animInitialCorrectPos = 0xabc; // Vector
			constexpr auto m_animInitialCorrectRot = 0xac8; // Table
			constexpr auto m_animEntityToRefOffset = 0xad8; // Vector
			constexpr auto m_animEntityToRefRotation = 0xae4; // Table
			constexpr auto m_animScriptSequence = 0xafc; // Integer
			constexpr auto m_animScriptModel = 0xb00; // Integer
			constexpr auto m_animIgnoreParentRot = 0xb04; // Integer
			constexpr auto m_animMotionMode = 0xb08; // Integer
			constexpr auto m_syncingWithEntity = 0xb84; // Integer
			constexpr auto m_predictedAnimEventCount = 0xbd0; // Integer
			constexpr auto m_predictedAnimEventTarget = 0xbd4; // Integer
			constexpr auto m_predictedAnimEventSequence = 0xbd8; // Integer
			constexpr auto m_predictedAnimEventModel = 0xbdc; // Integer
			constexpr auto m_nRagdollImpactFXTableId = 0xbf4; // Integer
			constexpr auto m_flSkyScaleStartValue = 0xbf8; // Float
			constexpr auto m_flSkyScaleEndValue = 0xbfc; // Float
			constexpr auto m_sequenceTransitionerLayerCount = 0xdc0; // Integer
			constexpr auto m_itemFlavorGUID = 0xe4c; // Integer
			constexpr auto m_nSkin = 0xe54; // Integer
			constexpr auto m_skinMod = 0xe58; // Integer
			constexpr auto m_nBody = 0xe5c; // Integer
			constexpr auto m_camoIndex = 0xe60; // Integer
			constexpr auto m_nForceBone = 0xe98; // Integer
			constexpr auto m_bSequenceFinished = 0xefc; // Integer
			constexpr auto m_lockedAnimDeltaYaw = 0xf00; // Float
			constexpr auto m_flModelScale = 0xf08; // Float
		}



		// Inheritance: 
		namespace CWeaponX
		{
			constexpr auto m_BulletSpeed = 0x1ef0;
			constexpr auto m_bulletGravity = 0x1ef8;
			constexpr auto m_networkedFlags = 0x3f0; // Integer
			constexpr auto m_bClientSideAnimation = 0x100e; // Integer
			constexpr auto m_weaponOwner = 0x1640; // Integer
			constexpr auto m_worldModelIndexOverride = 0x1654; // Integer
			constexpr auto m_iWorldModelIndex = 0x1658; // Integer
			constexpr auto m_holsterModelIndex = 0x165c; // Integer
			constexpr auto m_droppedModelIndex = 0x1660; // Integer
			constexpr auto m_idealSequence = 0x1664; // Integer
			constexpr auto m_idealActivity = 0x1666; // Integer
			constexpr auto m_weaponActivity = 0x1668; // Integer
			constexpr auto m_ActiveState = 0x166c; // Integer
			constexpr auto m_weapState = 0x1680; // Integer
			constexpr auto m_allowedToUse = 0x1684; // Integer
			constexpr auto m_discarded = 0x1685; // Integer
			constexpr auto m_forcedADS = 0x1688; // Integer
			constexpr auto m_tossRelease = 0x168c; // Integer
			constexpr auto m_offhandSwitchSlot = 0x1690; // Integer
			constexpr auto m_energizeState = 0x1694; // Integer
			constexpr auto m_heatValue = 0x16a0; // Float
			constexpr auto m_heatValueOnLastFire = 0x16a4; // Float
			constexpr auto m_fullyHeated = 0x16a8; // Integer
			constexpr auto m_customActivity = 0x16aa; // Integer
			constexpr auto m_customActivitySequence = 0x16ac; // Integer
			constexpr auto m_customActivityOwner = 0x16b0; // Integer
			constexpr auto m_customActivityFlags = 0x16b8; // Integer
			constexpr auto m_moveSpread = 0x16c8; // Float
			constexpr auto m_spreadStartFracHip = 0x16d0; // Float
			constexpr auto m_spreadStartFracADS = 0x16d4; // Float
			constexpr auto m_kickSpreadHipfire = 0x16d8; // Float
			constexpr auto m_kickSpreadADS = 0x16dc; // Float
			constexpr auto m_kickScaleBasePitch = 0x16e4; // Float
			constexpr auto m_kickScaleBaseYaw = 0x16e8; // Float
			constexpr auto m_kickPatternScaleBase = 0x16ec; // Float
			constexpr auto m_kickSpringHeatBaseValue = 0x16f4; // Float
			constexpr auto m_semiAutoTriggerDown = 0x16fc; // Integer
			constexpr auto m_pendingTriggerPull = 0x16fd; // Integer
			constexpr auto m_semiAutoNeedsRechamber = 0x16fe; // Integer
			constexpr auto m_pendingReloadAttempt = 0x16ff; // Integer
			constexpr auto m_offhandHybridNormalMode = 0x1700; // Integer
			constexpr auto m_pendingoffhandHybridToss = 0x1701; // Integer
			constexpr auto m_fastHolster = 0x1702; // Integer
			constexpr auto m_didFirstDeploy = 0x1703; // Integer
			constexpr auto m_shouldCatch = 0x1704; // Integer
			constexpr auto m_clipModelIsHidden = 0x1705; // Integer
			constexpr auto m_segmentedReloadEndSeqRequired = 0x1706; // Integer
			constexpr auto m_reloadStartedEmpty = 0x1707; // Integer
			constexpr auto m_segmentedAnimStartedOneHanded = 0x1708; // Integer
			constexpr auto m_segmentedReloadCanRestartLoop = 0x1709; // Integer
			constexpr auto m_segmentedReloadLoopFireLocked = 0x170a; // Integer
			constexpr auto m_realtimeModCmdHead = 0x1713; // Integer
			constexpr auto m_realtimeModCmdCount = 0x1714; // Integer
			constexpr auto m_realtimeModCanADS = 0x1715; // Integer
			constexpr auto m_customActivityAttachedModelIndex = 0x1718; // Integer
			constexpr auto m_customActivityAttachedModelAttachmentId = 0x171c; // Integer
			constexpr auto m_fireRateLerp_startFraction = 0x1724; // Float
			constexpr auto m_fireRateLerp_stopFraction = 0x172c; // Float
			constexpr auto m_chargeAnimIndex = 0x1730; // Integer
			constexpr auto m_chargeAnimIndexOld = 0x1734; // Integer
			constexpr auto m_proScreen_owner = 0x1738; // Integer
			constexpr auto m_proScreen_int0 = 0x173c; // Integer
			constexpr auto m_proScreen_int1 = 0x1740; // Integer
			constexpr auto m_proScreen_int2 = 0x1744; // Integer
			constexpr auto m_proScreen_float0 = 0x1748; // Float
			constexpr auto m_proScreen_float1 = 0x174c; // Float
			constexpr auto m_proScreen_float2 = 0x1750; // Float
			constexpr auto m_reloadMilestone = 0x1754; // Integer
			constexpr auto m_rechamberMilestone = 0x1758; // Integer
			constexpr auto m_cooldownMilestone = 0x175c; // Integer
			constexpr auto m_prevSeqWeight = 0x1760; // Integer
			constexpr auto m_scriptFlags0 = 0x1770; // Integer
			constexpr auto m_scriptInt0 = 0x1774; // Integer
			constexpr auto m_scriptInt1 = 0x1776; // Integer
			constexpr auto m_curZoomFOV = 0x1778; // Float
			constexpr auto m_targetZoomFOV = 0x177c; // Float
			constexpr auto m_zoomFOVLerpTime = 0x1780; // Float
			constexpr auto m_currentAltFireAnimIndex = 0x1790; // Integer
			constexpr auto m_legendaryModelIndex = 0x1794; // Integer
			constexpr auto m_charmModelIndex = 0x1798; // Integer
			constexpr auto m_charmAttachment = 0x179c; // Integer
			constexpr auto m_charmItemFlavorGUID = 0x17a0; // Integer
			constexpr auto m_stickerDecalMaterialIndex = 0x17a4; // Integer
			constexpr auto m_stickerDecalAttachment = 0x17a8; // Integer
			constexpr auto m_stickerScale = 0x17ac; // Float
			constexpr auto m_lastTossedGrenade = 0x17b0; // Integer
			constexpr auto m_targetingLaserEnabledScript = 0x17b4; // Integer
			constexpr auto m_needsReloadCheck = 0x17b5; // Integer
			constexpr auto m_needsEmptyCycleCheck = 0x17b6; // Integer
			constexpr auto m_skinOverride = 0x17b8; // Integer
			constexpr auto m_skinOverrideIsValid = 0x17bc; // Integer
			constexpr auto m_lastChargeFrac = 0x17c8; // Float
			constexpr auto m_sustainedLaserCurrentSpread = 0x17f4; // Float
			constexpr auto m_sustainedDischargeIsInPrimaryAttack = 0x17f8; // Integer
			constexpr auto m_sustainedLaserNextRandomSeed = 0x17f9; // Integer
			constexpr auto m_modBitfieldFromPlayer = 0x17fc; // Integer
			constexpr auto m_modBitfieldInternal = 0x1800; // Integer
			constexpr auto m_modBitfieldCurrent = 0x1804; // Integer
			constexpr auto m_curSharedEnergyCost = 0x1808; // Integer
			constexpr auto m_grappleWeaponNeedsDryfire = 0x180c; // Integer
			constexpr auto m_scriptFloat0 = 0x1810; // Float
			constexpr auto m_shouldPlayIdleAnims = 0x1814; // Integer
			constexpr auto m_scriptActivated = 0x1815; // Integer
			constexpr auto m_curReactiveSkinKillCount = 0x1816; // Integer
			constexpr auto m_curReactiveSkinKnockdownCount = 0x1817; // Integer
			constexpr auto m_lockedSet = 0x1834; // Integer
			constexpr auto m_isLoadoutPickup = 0x1838; // Integer
			constexpr auto m_utilityEnt = 0x183c; // Integer
			constexpr auto m_weaponNameIndex = 0x1844; // Integer
			constexpr auto m_oaActiveOverride = 0x1850; // Integer
			constexpr auto m_parentTurret = 0x1854; // Integer
		}
		// Inheritance: 
		namespace CRopeKeyframe
		{
			constexpr auto m_localOrigin = 0x4; // Vector
			constexpr auto m_parentAttachment = 0x20; // Integer
			constexpr auto m_clrRender = 0x50; // Integer
			constexpr auto m_visibilityFlags = 0x444; // Integer
			constexpr auto m_hOwnerEntity = 0x4a8; // Integer
			constexpr auto m_nRenderMode = 0x4b9; // Integer
			constexpr auto m_parentAttachmentModel = 0x858; // Integer
			constexpr auto m_fadeDist = 0x864; // Float
			constexpr auto m_ropeZiplineAutoDetachDistance = 0xa60; // Float
			constexpr auto m_ziplineSagEnable = 0xa64; // Integer
			constexpr auto m_ziplineSagHeight = 0xa68; // Float
			constexpr auto m_ziplineMoveSpeedScale = 0xb60; // Float
			constexpr auto m_startOffset = 0xb64; // Vector
			constexpr auto m_endOffset = 0xb70; // Vector
			constexpr auto m_wiggleMaxLen = 0xb84; // Float
			constexpr auto m_wiggleMagnitude = 0xb88; // Float
			constexpr auto m_wiggleSpeed = 0xb8c; // Float
			constexpr auto m_flScrollSpeed = 0xbc4; // Float
			constexpr auto m_RopeFlags = 0xbc8; // Integer
			constexpr auto m_iRopeMaterialModelIndex = 0xbcc; // Integer
			constexpr auto m_nSegments = 0xe50; // Integer
			constexpr auto m_hStartPoint = 0xe54; // Integer
			constexpr auto m_hEndPoint = 0xe58; // Integer
			constexpr auto m_hPrevPoint = 0xe5c; // Integer
			constexpr auto m_iStartAttachment = 0xe60; // Integer
			constexpr auto m_iEndAttachment = 0xe61; // Integer
			constexpr auto m_subdivStackCount = 0xe8c; // Integer
			constexpr auto m_subdivSliceCount = 0xe90; // Integer
			constexpr auto m_ropeLength = 0xe94; // Integer
			constexpr auto m_constraintIterations = 0xe9c; // Integer
			constexpr auto m_ropeDampening = 0xea0; // Float
			constexpr auto m_Slack = 0xea4; // Integer
			constexpr auto m_TextureScale = 0xea8; // Float
			constexpr auto m_TextureScale_ = 0xea8; // Float
			constexpr auto m_fLockedPoints = 0xeac; // Integer
			constexpr auto m_lockDirectionCutoffLength = 0xeb0; // Integer
			constexpr auto m_lockDirectionStrength = 0xeb4; // Float
			constexpr auto m_nChangeCount = 0xeb8; // Integer
			constexpr auto m_Width = 0xebc; // Float
			constexpr auto m_bConstrainBetweenEndpoints = 0xf50; // Integer
		}
		// Inheritance: 
		namespace CPropSurvival
		{
			constexpr auto m_parentAttachment = 0x20; // Integer
			constexpr auto m_fEffects = 0x40; // Integer
			constexpr auto m_usableType = 0x44; // Integer
			constexpr auto m_cellX = 0x48; // Integer
			constexpr auto m_cellY = 0x4c; // Integer
			constexpr auto m_cellZ = 0x50; // Integer
			constexpr auto m_localOrigin = 0x54; // Vector
			constexpr auto m_nModelIndex = 0x60; // Integer
			constexpr auto m_networkedFlags = 0x3f0; // Integer
			constexpr auto m_visibilityFlags = 0x444; // Integer
			constexpr auto m_localAngles = 0x494; // Vector
			constexpr auto m_vecMins = 0x4d0; // Vector
			constexpr auto m_vecMaxs = 0x4dc; // Vector
			constexpr auto m_usSolidFlags = 0x4e8; // Integer
			constexpr auto m_nSolidType = 0x4ec; // Integer
			constexpr auto m_triggerBloat = 0x4ed; // Integer
			constexpr auto m_collisionDetailLevel = 0x4ee; // Integer
			constexpr auto m_nSurroundType = 0x4fc; // Integer
			constexpr auto m_vecSpecifiedSurroundingMins = 0x508; // Vector
			constexpr auto m_vecSpecifiedSurroundingMaxs = 0x514; // Vector
			constexpr auto m_CollisionGroup = 0x540; // Integer
			constexpr auto m_iSignifierName = 0x580; // String
			constexpr auto m_parentAttachmentModel = 0x858; // Integer
			constexpr auto m_usablePriority = 0x924; // Integer
			constexpr auto m_usableDistanceOverride = 0x928; // Float
			constexpr auto m_usableFOV = 0x92c; // Float
			constexpr auto m_usePromptSize = 0x930; // Float
			constexpr auto m_realmsBitMask = 0xa48; // Integer64
			constexpr auto m_itemFlavorGUID = 0xe4c; // Integer
			constexpr auto m_nSkin = 0xe54; // Integer
			constexpr auto m_skinMod = 0xe58; // Integer
			constexpr auto m_nBody = 0xe5c; // Integer
			constexpr auto m_camoIndex = 0xe60; // Integer
			constexpr auto m_ammoInClip = 0x1644; // Integer
			constexpr auto m_customScriptInt = 0x1648; // Integer
			constexpr auto m_survivalProperty = 0x164c; // Integer
			constexpr auto m_weaponNameIndex = 0x1654; // Integer
			constexpr auto m_modBitField = 0x1658; // Integer
			constexpr auto m_survivalPropFadeDist = 0x1660; // Float
		}

		// Inheritance: 
		namespace CDeathBoxProp
		{
			constexpr auto m_parentAttachment = 0x20; // Integer
			constexpr auto m_fEffects = 0x40; // Integer
			constexpr auto m_usableType = 0x44; // Integer
			constexpr auto m_cellX = 0x48; // Integer
			constexpr auto m_cellY = 0x4c; // Integer
			constexpr auto m_cellZ = 0x50; // Integer
			constexpr auto m_localOrigin = 0x54; // Vector
			constexpr auto m_nModelIndex = 0x60; // Integer
			constexpr auto m_networkedFlags = 0x3f0; // Integer
			constexpr auto m_visibilityFlags = 0x444; // Integer
			constexpr auto m_iTeamNum = 0x44c; // Integer
			constexpr auto m_localAngles = 0x494; // Vector
			constexpr auto m_hOwnerEntity = 0x4a8; // Integer
			constexpr auto m_vecMins = 0x4d0; // Vector
			constexpr auto m_vecMaxs = 0x4dc; // Vector
			constexpr auto m_usSolidFlags = 0x4e8; // Integer
			constexpr auto m_nSolidType = 0x4ec; // Integer
			constexpr auto m_triggerBloat = 0x4ed; // Integer
			constexpr auto m_collisionDetailLevel = 0x4ee; // Integer
			constexpr auto m_nSurroundType = 0x4fc; // Integer
			constexpr auto m_vecSpecifiedSurroundingMins = 0x508; // Vector
			constexpr auto m_vecSpecifiedSurroundingMaxs = 0x514; // Vector
			constexpr auto m_CollisionGroup = 0x540; // Integer
			constexpr auto m_iSignifierName = 0x580; // String
			constexpr auto m_iName = 0x589; // String
			constexpr auto m_holdUsePrompt = 0x718; // String
			constexpr auto m_pressUsePrompt = 0x720; // String
			constexpr auto m_lifeState = 0x798; // Integer
			constexpr auto m_scriptNetData = 0x79c; // Integer
			constexpr auto m_phaseShiftFlags = 0x7b8; // Integer
			constexpr auto m_parentAttachmentModel = 0x858; // Integer
			constexpr auto m_fadeDist = 0x864; // Float
			constexpr auto m_usablePriority = 0x924; // Integer
			constexpr auto m_usableDistanceOverride = 0x928; // Float
			constexpr auto m_usableFOV = 0x92c; // Float
			constexpr auto m_usePromptSize = 0x930; // Float
			constexpr auto m_firstChildEntityLink = 0xa40; // Integer
			constexpr auto m_firstParentEntityLink = 0xa44; // Integer
			constexpr auto m_realmsBitMask = 0xa48; // Integer64
			constexpr auto m_nSkin = 0xe54; // Integer
			constexpr auto m_bUseHitboxesForRenderBox = 0x1641; // Integer
			constexpr auto m_bAnimateInStaticShadow = 0x1642; // Integer
			constexpr auto m_customOwnerName = 0x1680; // String
		}

		// Inheritance: 
		namespace CTeam
		{
			constexpr auto m_score = 0xa60; // Integer
			constexpr auto m_score2 = 0xa64; // Integer
			constexpr auto m_kills = 0xa68; // Integer
			constexpr auto m_deaths = 0xa6c; // Integer
			constexpr auto m_iRoundsWon = 0xa70; // Integer
			constexpr auto m_iTeamTeamNum = 0xa74; // Integer
			constexpr auto m_szTeamname = 0xa98; // String
		}

		// Inheritance: 
		namespace CBaseViewModel
		{
			constexpr auto m_animStartCycle = 0xc; // Float
			constexpr auto m_animPlaybackRate = 0x10; // Float
			constexpr auto m_animModelIndex = 0x14; // Integer
			constexpr auto m_nNewSequenceParity = 0x18; // Integer
			constexpr auto m_animSequence = 0x20; // Integer
			constexpr auto m_animFrozen = 0x22; // Integer
			constexpr auto m_fEffects = 0x40; // Integer
			constexpr auto m_clrRender = 0x50; // Integer
			constexpr auto m_nModelIndex = 0x60; // Integer
			constexpr auto m_nRenderMode = 0x4b9; // Integer
			constexpr auto m_nBody = 0xe5c; // Integer
			constexpr auto m_nResetEventsParity = 0xe6c; // Integer
			constexpr auto m_bSequenceFinished = 0xefc; // Integer
			constexpr auto m_flModelScale = 0xf08; // Float
			constexpr auto m_viewModelOwner = 0x19d4; // Integer
			constexpr auto m_projectileIsVisible = 0x19d8; // Integer
			constexpr auto m_bBlockEventLayer = 0x1dd0; // Integer
			constexpr auto m_isAdsTransition = 0x1dd1; // Integer
			constexpr auto m_hWeapon = 0x1dd4; // Integer
		}

		namespace CAI_BaseNPC
		{
			constexpr auto m_localOrigin = 0x4; // Vector
			constexpr auto m_hGroundEntity = 0x438; // Integer
			constexpr auto m_iHealth = 0x43c; // Integer
			constexpr auto m_localAngles = 0x494; // Vector
			constexpr auto m_iMaxHealth = 0x578; // Integer
			constexpr auto m_lifeState = 0x798; // Integer
			constexpr auto m_fireteamSlotIndex = 0x1c50; // Integer
			constexpr auto m_aiSprinting = 0x1dba; // Integer
			constexpr auto m_aiNetworkFlags = 0x1ddc; // Integer
			constexpr auto m_isHologram = 0x1de0; // Integer
			constexpr auto m_title = 0x1de1; // String
			constexpr auto m_aiSettingsIndex = 0x1e04; // Integer
			constexpr auto m_subclass = 0x1e08; // Integer
		}

		namespace CLootGrabber
		{
			constexpr auto m_impactEffectColorID = 0x1680; // Integer
			constexpr auto m_isVendingMachine = 0x1682; // Integer
			constexpr auto m_lootBeingGrabbed = 0x1688; // Integer
			constexpr auto m_lootGrabDist = 0x168c; // Float
		}

		namespace CWorld
		{
			constexpr auto m_WorldMins = 0xa60; // Vector
			constexpr auto m_WorldMaxs = 0xa6c; // Vector
			constexpr auto m_bStartDark = 0xa78; // Integer
			constexpr auto m_statusEffectsGenerationNV = 0xa8c; // Integer
			constexpr auto m_worldFlags = 0xa94; // Integer
			constexpr auto m_timeshiftArmDeviceSkin = 0xa98; // Integer
			constexpr auto m_spTitanLoadoutUnlocks = 0xa9c; // Integer
			constexpr auto m_teamRelationRulesForPVE = 0x11e0; // Integer
		}

	}

}