#pragma once
#include "Bone.h"
#include "Game.h"
#include "Utils/Random.h"
#include "Entity.h"

namespace MenuConfig
{

	inline std::string path = "";
	inline std::string LocalVersion = "4.7.0";
	inline std::string HWID = "";
	inline bool DRM = false;
	inline bool DEC = false;
	inline HWND ConsoleHandle = nullptr;

	struct {
		// 0: Visual 1: Aimbot 2: Misc 3: Config
		int MenuPage = 0;
		ImVec2 LogoPos =	ImVec2(20.f, 30.f);
		ImVec2 Logo2Pos =	ImVec2(15.f, 25.f);
		ImVec2 Logo3Pos =	ImVec2(15.f, 30.f);
		ImVec2 Button1Pos = ImVec2(20.f, 120.f);
		ImVec2 Button2Pos = ImVec2(20.f, 120.f + 60.f);
		ImVec2 Button3Pos = ImVec2(20.f, 120.f + 120.f);
		ImVec2 Button4Pos = ImVec2(20.f, 120.f + 180.f);
		ImVec2 ChildPos =	ImVec2(190.f, 15.f);
		ImVec2 ChildSize =	ImVec2(645.f, 485.f);
		ImColor BorderColor_Yellow =	ImColor(255, 204, 0, 255);
		ImColor BorderColor_Purple =	ImColor(255, 0, 238, 255);
		ImColor BorderColor_Red =		ImColor(200, 40, 40, 255);
		ImColor BorderColor_Light =		ImColor(168, 197, 209, 250);
		ImColor BorderColor_Fanta =		ImVec4(0.8509804010391235f, 0.105882354080677f, 0.4156862795352936f, 1.0f);
	} WCS;    // Window Component Settings
	inline std::wstring SteamPath = L"";
	inline std::wstring AvatarPath = L"";
	inline std::string Country = "";
	inline std::string UserName = "";
	inline std::string CurMap = "";
	inline float CurTime = 0;
	inline float ChkTime = 0;
	inline int32_t TickCount = 0;
	inline int FPS = 0;
	inline int MaxFrameRate = 60;
	inline int Ping = 0;
	inline bool defaultConfig = false;
	inline int Language = 0;
	inline int Theme = 3;
	inline int MaxRenderFPS = 1200;

	inline std::vector<std::pair<CEntity, DWORD64>> ValidEntity;

	inline bool AirJump = false;
	inline float ComboWidth = 100.f;
	inline float SliderWidth = 150.f;
	// 0: Window 1: Collapse
	inline int WindowStyle = 0;

	inline bool AimBot = false;
	inline bool AimAlways = false;
	inline bool AimToggleMode = false;
	// 0: head 1: neck 3: spine
	inline int  AimPosition = 0;
	inline int  SparyPosition = 0;
	inline DWORD  AimPositionIndex = BONEINDEX::head;
	inline DWORD  SparyPositionIndex = 0xff;
	inline bool VisibleCheck = true;

	inline bool RCS = false;
	inline bool Bhop = false;

	// 0: normal 1: dynamic 2: Flat
	inline int BoxType = 0;
	// 0: Vertical 1: Horizontal
	inline int  HealthBarType = 0;

	inline ImColor FovCircleColor = ImColor(180, 255, 0, 255);

	inline bool ShowMenu = true;
	inline bool ShowConsole = true;

	inline bool TriggerBot = false;
	inline bool TriggerAlways = false;

	inline bool TeamCheck = true;

	inline bool ShowHeadShootLine = false;
	inline ImColor HeadShootLineColor = ImColor(255, 255, 255, 200);

	inline bool ShowFovLine = false;
	inline ImColor FovLineColor = ImColor(55, 55, 55, 220);
	inline float FovLineSize = 60.f;

	inline bool BypassOBS = false;
	inline bool TargetingCrosshairs = false;
	inline bool HitboxUpdated = false;

	// Theme Configs
	inline ImColor ButtonBorderColor = ImColor(255, 204, 0, 255);
}

namespace ESPConfig
{
	inline bool ESPenabled = true;
	inline bool AlwaysActive = false;
	inline bool AmmoBar = false;
	inline bool ShowScoping = false;
	inline bool ShowBoneESP = true;
	inline bool ShowBoxESP = true;
	inline bool winniethepool = false;
	inline bool ShowHealthBar = true;
	inline bool ShowWeaponESP = false;
	inline bool ShowEyeRay = false;
	inline bool ShowPlayerName = true;
	inline bool DrawFov = false;
	inline bool ShowDistance = false;
	inline bool ShowHealthNum = false;
	inline bool ArmorBar = false;
	inline bool ShowArmorNum = false;
	inline bool ShowHeadBox = false;
	inline bool ShowPreview = true;
	inline bool VisibleCheck = false;
	inline bool FilledBox = false;
	inline bool FilledVisBox = false;
	inline bool MultiColor = false;
	inline bool OutLine = true;
	inline bool ShowIsScoped = false;
	// 0: normal 1: Flat
	inline int HeadBoxStyle = 0;
	inline float BoxRounding = RandomPara<float>(0.0f, 3.0f);;
	inline float BoxAlpha = 0.35f;
	inline bool ShowLineToEnemy = false;
	inline int RenderDistance = 0;
	inline ImColor LineToEnemyColor = ImColor(255, 255, 255, 220);
	// 0: Top 1: Center 2: Bottom
	inline int LinePos = 0;

	inline ImColor BoneColor = ImColor(0, 255, 255, 255);
	inline ImColor BoxColor = ImColor(255, 80, 0, 255);
	inline ImColor EyeRayColor = ImColor(255, 0, 0, 255);
	inline ImColor HeadBoxColor = ImColor(255, 255, 255, 255);
	inline ImColor VisibleColor = ImColor(255, 196, 0, 255);
	inline ImColor FilledColor = ImColor(255, 255, 255, 128);
	inline ImColor BoxFilledVisColor = ImColor(0, 0, 255, 255);
	inline ImColor FilledColor2 = ImColor(0, 255, 102, 255);

	// Penis Config
	inline bool ShowPenis = false;
	inline float PenisLength = RandomPara<float>(3.0f, 15.0f);
	inline float PenisSize = RandomPara<float>(1.3f, 3.0f);
	inline ImColor PenisColor = ImColor(255, 0, 0, 200);
}

namespace DebuggerConfig
{
	inline bool Debug = false;
}

namespace CrosshairsCFG
{
	inline float CrossHairSize = 75;

	inline bool ShowCrossHair = false;
	inline bool drawDot = true;
	inline bool drawCrossline = true;
	inline bool tStyle = false;
	inline bool drawCircle = false;
	inline bool drawOutLine = true;
	inline bool DynamicGap = false;
	inline bool TeamCheck = true;

	inline int crosshairPreset = 0;
	inline int Gap = 8;
	inline int HorizontalLength = 6;
	inline int VerticalLength = 6;
	inline int Thickness = 1.0f;
	inline float DotSize = 1.0f;
	inline float CircleRadius = 3.f;

	inline bool isAim = false;
	inline bool isJump = false;

	inline ImColor CrossHairColor = ImColor(0, 255, 0, 255);
	inline ImColor TargetedColor = ImColor(255, 0, 0, 255);
}

namespace RadarCFG
{
	inline bool ShowRadar = false;
	inline float RadarRange = 150;
	inline float RadarPointSizeProportion = 1.f;
	inline bool ShowRadarCrossLine = false;
	inline ImColor RadarCrossLineColor = ImColor(220, 220, 220, 255);
	// 0: circle 1: arrow 2: circle with arrow
	inline int RadarType = 2;
	inline float Proportion = 3300.f;
	inline bool customRadar = false;
	inline float RadarBgAlpha = 0.1f;
}

namespace MiscCFG
{
	inline bool BunnyHop = false;
	inline bool WorkInSpec = true;
	inline bool WaterMark = false;
	inline int	HitSound = 0;
	inline bool SkinChanger = false;
	inline bool bmbTimer = false;
	inline bool FastStop = false;
	inline bool SpecList = false;
	inline bool RadarHack = false;
	inline bool MoneyService = false;
	inline bool ShowCashSpent = false;
	inline bool NoSmoke = false;
	inline bool SmokeColored = false;
	inline bool FireColored = false;
	inline bool FovHacker = false;
	inline bool CheatList = false;
	inline bool ForceScope = false;
	inline bool NightMode = false;
	inline bool jumpthrow = false;
	inline int NightModeAlpha = 0.f;
	inline int Fov = 90;
	inline float FlashImmunity = 0;
	inline bool HitMarker = false;
	inline ImColor BombTimerCol = ImColor(255, 120, 0, 255);
	inline ImColor SmokeColor = ImColor(255, 0, 0, 255);
	inline ImColor FireColor = ImColor(0, 255, 0, 255);

	inline bool Jitter = false;

	inline bool EnemySensor = false;
	inline ImColor GlowColor = ImColor(255, 0, 0, 255);
	inline bool GlowRainbow = false;
	inline float Rainbow_Speed = 1.f;
}
