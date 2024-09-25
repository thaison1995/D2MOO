#pragma once

#include <cstdint>

enum D2HarcodedConstants
{
	HARDCODEDCST_MAX_LEVEL = 99, // Should be using DATATBLS_GetMaxLevel instead
	DEFAULT_FRAMES_PER_SECOND = 25
};

enum D2GameTypeMode
{
	MODE_LOCAL = 0,
	MODE_CLOSED = 1,
	MODE_TCPIP = 2,
	MODE_OPEN = 3,
};

enum D2GameResolutionMode // DISPLAY_RES in original game
{
	D2GAMERES_640x480,
	D2GAMERES_800x600,
	NUM_GAME_RESOLUTIONS,
	D2GAMERES_1344x700 = 3, // Not actually supported ?
};

enum D2C_SaveMagicHeaders : uint32_t
{
	D2SMAGIC_HEADER = 0xAA55AA55,
	D2SMAGIC_QUESTINFO = 0x576F6F21,
	D2SMAGIC_WPINFO = 0x5753,
	D2SMAGIC_NPCINFO = 0x7701,
	D2SMAGIC_MAINSTATINFO = 0x6766,
	D2SMAGIC_SKILLINFO = 0x6866,
	D2SMAGIC_ITEMLIST = 0x4A4D,
	D2SMAGIC_MERCINFO = 0x6A66,
	D2SMAGIC_IRONGOLEM = 0x6B66
};

enum D2InteractStates
{
	INTERACT_NONE = 0,
	INTERACT_TALKING = 1,   //the menu is open
	INTERACT_TRADE = 2,   //your trading
};

enum D2C_TransactionTypes
{
	TRANSACTIONTYPE_BUY = 0,
	TRANSACTIONTYPE_SELL = 1,
	TRANSACTIONTYPE_GAMBLE = 2,
	TRANSACTIONTYPE_REPAIR = 3,
};

#ifndef CONSTANTS_LEVELS //Pseudo-Macro to group all constants


enum D2C_WarpTileTypes
{
	WARPTILE_TOWNENTRY = 0x00, 		//Town Entry & Non-Town Waypoint (0)
	WARPTILE_TOWNENTRY2 = 0x05, 	//Town Entry 2 (5)
	WARPTILE_CORPSELOC = 0x0A, 		//Corpse Location (10)
	WARPTILE_MAPENTRY = 0x0B, 		//Map Entry & Portal Location (11)
	WARPTILE_TPLOC = 0x0C, 			//Town Portal Location (12)
	WARPTILE_TOWNWP = 0x0D			//Town Waypoint (13)
};

enum D2C_TownLevels
{
	D2TOWN_ROGUECAMP = 1,
	D2TOWN_LUTGHOL = 40,
	D2TOWN_KURAST = 75,
	D2TOWN_PANDFORT = 103,
	D2TOWN_HARRO = 109,
	D2TOWN_NULL = 0
};

enum D2C_Difficulties
{
	DIFFMODE_NORMAL,
	DIFFMODE_NIGHTMARE,
	DIFFMODE_HELL,
	NUM_DIFFICULTIES
};

enum D2C_Acts
{
	ACT_I,
	ACT_II,
	ACT_III,
	ACT_IV,
	ACT_V,
	NUM_ACTS
};


#endif // CONSTANTS_LEVELS

enum D2SaveCharType
{
	CHARTYPE_HARDCORE = 0x24,
	CHARTYPE_SOFTCORE = 0x28
};

#ifndef CONSTANTS_DATATABLES //Pseudo-Macro to group all constants

enum D2C_TxtLinkerIndexTypes
{
	TXTLINKER_NONE,
	TXTLINKER_PLAYERCLASS,
	TXTLINKER_BODYLOCS,
	TXTLINKER_STOREPAGE,
	TXTLINKER_ELEMTYPES,
	TXTLINKER_HITCLASS,
	TXTLINKER_MONMODE,
	TXTLINKER_PLRMODE,
	TXTLINKER_SKILLCALC,
	TXTLINKER_MISSCALC,
	TXTLINKER_SKILLSCODE,
	TXTLINKER_EVENTS,
	TXTLINKER_COMPCODE,
	TXTLINKER_MONAI,
	TXTLINKER_ITEMS,
	TXTLINKER_PROPERTIES,
	TXTLINKER_RUNES,
	TXTLINKER_HIREDESC,
	TXTLINKER_STATES,
	TXTLINKER_SOUNDS,
	TXTLINKER_COLORS,
	TXTLINKER_TREASURECLASS,
	TXTLINKER_MONSTATS,
	TXTLINKER_MONSOUNDS,
	TXTLINKER_MONSTATS2,
	TXTLINKER_MONPLACE,
	TXTLINKER_SUPERUNIQUES,
	TXTLINKER_MISSILES,
	TXTLINKER_MONSEQ,
	TXTLINKER_SKILLDESC,
	TXTLINKER_SKILLS,
	TXTLINKER_OVERLAY,
	TXTLINKER_ITEMSTATCOST,
	TXTLINKER_PETTYPE,
	TXTLINKER_ITEMTYPES,
	TXTLINKER_SETS,
	TXTLINKER_SETITEMS,
	TXTLINKER_UNIQUEITEMS,
	TXTLINKER_MONPROP,
	TXTLINKER_MONTYPE,
	TXTLINKER_MONUMOD,
	TXTLINKER_LEVELS,
	TXTLINKER_INVALID
};

enum D2C_ItemsTxtArmorComps
{
	TXTARMORCOMP_RARM,
	TXTARMORCOMP_LARM,
	TXTARMORCOMP_TORSO,
	TXTARMORCOMP_LEGS,
	TXTARMORCOMP_RSPAD,
	TXTARMORCOMP_LSPAD,
};

enum D2Vendors
{
	VENDOR_AKARA,
	VENDOR_GHEED,
	VENDOR_CHARSI,
	VENDOR_FARA,
	VENDOR_LYSANDER,
	VENDOR_DROGNAN,
	VENDOR_HRALTI,
	VENDOR_ALKOR,
	VENDOR_ORMUS,
	VENDOR_ELZIX,
	VENDOR_ASHEARA,
	VENDOR_CAIN,
	VENDOR_HALBU,
	VENDOR_JAMELLA,
	VENDOR_MALAH,
	VENDOR_LARZUK,
	VENDOR_DREHYA,
};
#endif // CONSTANTS_DATATABLES

#ifndef CONSTANTS_UI //Pseudo-Macro to group all constants
enum D2C_UIvars
{
	UI_GAME = 0x00,				//Game
	UI_INVENTORY = 0x01,		//Player Inventory
	UI_STATSCREEN = 0x02,		//Player Stat Screen
	UI_MINISKILL = 0x03,		//Skill Selection
	UI_SKILLTREE = 0x04,		//Player Skill Tree
	UI_CHATBOX = 0x05,			//Chat Box
	UI_NEWSTATS = 0x06,			//Red NewStats Button
	UI_NEWSKILLS = 0x07,		//Red NewSkills Button
	UI_NPCMENU = 0x08,			//NPC options menu
	UI_ESCMENU = 0x09,			//Esc Menu
	UI_AUTOMAP = 0x0A,			//Automap
	UI_CONFIG = 0x0B,			//Key Configuration Menu
	UI_NPCSHOP = 0x0C,			//NPC Trade
	UI_HOLDALT = 0x0D,			//Alt Items Highlight
	UI_ANVIL = 0x0E,			//Anvil
	UI_QUESTSCREEN = 0x0F,		//Quest Screen
	UI_INISCROLL = 0x10,		//Inifuss Tree Scroll
	UI_QUESTLOG = 0x11,			//Quest Log Red Button
	UI_UNKNOWN18 = 0x12,
	UI_HIRICONS = 0x13,
	UI_WAYPOINT = 0x14,			//Waypoint Screen
	UI_MINIPANEL = 0x15,		//CtrlPnl7 Mini Popop Menu
	UI_PARTYSCREEN = 0x16,		//Multiplayer Party Screen			
	UI_MPTRADE = 0x17,			//Multiplayer Trade
	UI_MSGLOG = 0x18,			//Messages Log
	UI_STASH = 0x19,			//Player Stash
	UI_CUBE = 0x1A,				//Horadric Cube
	UI_STEEGSTONE = 0x1B,		//Guild Steeg Stone
	UI_GUILDVAULT = 0x1C,		//Guild Vault
	UI_UNKNOWN29 = 0x1D,
	UI_UNKNOWN30 = 0x1E,
	UI_BELTROWS = 0x1F,			//Belt Rows Popup
	UI_UNKNOWN32 = 0x20,
	UI_HELPSCREEN = 0x21,		//Help Screen
	UI_HELPBUTTON = 0x22,		//Help Button
	UI_HIREICONS = 0x23,		//Party Icons
	UI_MERCINV = 0x24,			//Mercenary Inventory
	UI_RECIPESCROLL = 0x25		//Unused Recipe Scroll
};

enum D2C_UiStates
{
	UI_TURNON = 0,
	UI_TURNOFF = 1,
	UI_TOGGLE = 2,
};

enum D2C_GlobalUiStates
{
	UISTATE_NONE,
	UISTATE_RIGHT,
	UISTATE_LEFT,
	UISTATE_BOTH,
};

enum D2C_AutomapCells
{
	MAPIMGCELL_REDCROSS = 221,				//Red Cross
	MAPIMGCELL_HAMMER = 302,				//Hammer
	MAPIMGCELL_CAINCAGE = 303,				//Cain Tristram Cage
	MAPIMGCELL_MEPHORB = 305,				//Travincal Compelling Orb
	MAPIMGCELL_DIABSEAL = 306,				//Chaos Sanctuary Seals
	MAPIMGCELL_WAYPOINT = 307,				//Waypoint
	MAPIMGCELL_WELL = 309,					//Well
	MAPIMGCELL_SHRINE = 310,				//Shrine
	MAPIMGCELL_FALLCAMPFLAG = 312,			//Fallen Camps Skull Flag
	MAPIMGCELL_INITREE = 313,				//Tree of Inifuss
	MAPIMGCELL_CAINROCK = 314,				//Cairn Stone
	MAPIMGCELL_GIDBINN = 315,				//Gidbinn
	MAPIMGCELL_QHAMMER = 316,				//Horadric Hammer
	MAPIMGCELL_BLUECROSS = 317,				//Blue Cross
	MAPIMGCELL_QCHEST = 318,				//Quest Sparky Chest
	MAPIMGCELL_STASH = 319,					//Your Stash
	MAPIMGCELL_ARCANEPORTAL = 339,			//Arcane Blue Portal
	MAPIMGCELL_ROGUEFIRE = 405,				//Rogue Camp Fire
	MAPIMGCELL_BOOK = 427,					//Book (stony field and Horazon?)
	MAPIMGCELL_PLACEHOLDER = 1176,			//Unknown Placeholder Reveal Code
	MAPIMGCELL_BARRITOWER = 1258			//Barricaded Towers Act 5
};

enum D2C_StringColorCodes
{
	STRCOLOR_WHITE,
	STRCOLOR_RED,
	STRCOLOR_LIGHTGREEN,
	STRCOLOR_BLUE,
	STRCOLOR_DARK_GOLD,
	STRCOLOR_GREY,
	STRCOLOR_BLACK,
	STRCOLOR_TAN,
	STRCOLOR_ORANGE,
	STRCOLOR_YELLOW,
	STRCOLOR_DARKGREEN,
	STRCOLOR_PURPLE,
	STRCOLOR_DARKGREEN2
};

enum D2C_UiButtonModes
{
	BTNMODE_ENABLED,
	BTNMODE_PRESSED,
	BTNMODE_DISABLED,
};

enum D2C_ButtonActions
{
	TRADEBTN_CANCEL = 2, 
	TRADEBTN_PERFORM = 3, 
	TRADEBTN_ACCEPT = 4, 
	TRADEBTN_GREENCHECK = 7, 
	TRADEBTN_SENDGOLD = 8, 
	TRADEBTN_CLOSESTASH = 18, 
	TRADEBTN_STASHWITHDRAW = 19, 
	TRADEBTN_STASHDEPOSIT = 20, 
	TRADEBTN_CLOSECUBE = 23, 
	TRADEBTN_TRANSMUTE = 24
};

enum D2C_D2WinMenuEntryTypes
{
	MENUENTRY_EDITBOX = 0x01,
	MENUENTRY_IMAGE = 0x02,
	MENUENTRY_ANIMATION = 0x03,
	MENUENTRY_TEXT = 0x04,
	MENUENTRY_SCROLLBAR = 0x05,
	MENUENTRY_BUTTON = 0x06,
	MENUENTRY_LIST = 0x07,
	MENUENTRY_TIMER = 0x08,
	MENUENTRY_SMACKER = 0x09,
	MENUENTRY_PROGRESSBAR = 0x0A,
	MENUENTRY_POPUP = 0x0B,
	MENUENTRY_ACCOUNTLIST = 0x0C,
};

enum D2C_MenuImageLoadType
{
	MENUIMGTYPE_DC6,
	MENUIMGTYPE_DCC,
};

enum D2C_NpcMenuIdx
{
	NPCMENUIDX_AKARA,
	NPCMENUIDX_ATMA,
	NPCMENUIDX_CAIN1,
	NPCMENUIDX_CHARSI,
	NPCMENUIDX_DROGNAN,
	NPCMENUIDX_ELZIX,
	NPCMENUIDX_GEGLASH,
	NPCMENUIDX_GHEED,
	NPCMENUIDX_GREIZ,
	NPCMENUIDX_JERHYN,
	NPCMENUIDX_LYSANDER,
	NPCMENUIDX_KASHYA,
	NPCMENUIDX_FARA,
	NPCMENUIDX_WARRIV1,
	NPCMENUIDX_WARRIV2,
	NPCMENUIDX_MESHIF1,
	NPCMENUIDX_CAIN2,
	NPCMENUIDX_CAIN5,
	NPCMENUIDX_CAIN3,
	NPCMENUIDX_CAIN4,
	NPCMENUIDX_TYRAEL1,
	NPCMENUIDX_TYRAEL2,
	NPCMENUIDX_HALBU,
	NPCMENUIDX_JAMELLA,
	NPCMENUIDX_ASHEARA,
	NPCMENUIDX_HRATLI,
	NPCMENUIDX_ALKOR,
	NPCMENUIDX_ORMUS,
	NPCMENUIDX_IZUALGHOST,
	NPCMENUIDX_HALBU2,
	NPCMENUIDX_MESHIF2,
	NPCMENUIDX_NATALYA,
	NPCMENUIDX_FLAVIE,
	NPCMENUIDX_KAELAN,
	NPCMENUIDX_HADRIEL,
	NPCMENUIDX_GUARD1,
	NPCMENUIDX_GUARD2,
	NPCMENUIDX_TYRAEL3,
	NPCMENUIDX_CAIN6,
	NPCMENUIDX_LARZUK,
	NPCMENUIDX_MALAH,
	NPCMENUIDX_ANYA,
	NPCMENUIDX_NIHLATHAK,
	NPCMENUIDX_QUALKEHK,
	NPCMENUIDX_FROZENANYA,
	NPCMENUIDX_ANCIENTSTATUE1,
	NPCMENUIDX_ANCIENTSTATUE2,
	NPCMENUIDX_ANCIENTSTATUE3,
};

enum D2C_VendorInventoryModes
{
	VENDORMODE_NONE = 0,
	VENDORMODE_TRADE = 1,
	VENDORMODE_BUY = 2,
	VENDORMODE_SELL = 3,
	VENDORMODE_REPAIR = 4,
	VENDORMODE_VERIFY = 5,
	VENDORMODE_HEAL = 6,
	VENDORMODE_DISPLAYING_RESULTS = 7,
	VENDORMODE_LASTVENDOR = 8,
	VENDORMODE_UNKNOWN = 9,
	VENDORMODE_PLRTRADE_OLD = 10,
	VENDORMODE_PLRTRADE = 11,
	VENDORMODE_STASH = 12,
	VENDORMODE_DEPOSIT = 13,
	VENDORMODE_CUBE = 14,
	VENDORMODE_IMBUE = 19,
};
#endif // CONSTANTS_UI

#ifndef CONSTANTS_STRINGS //Pseudo-Macro to group all constants
enum D2C_Language
{
	LANGUAGE_ENGLISH = 0,
	LANGUAGE_SPANISH = 1,
	LANGUAGE_GERMAN = 2,
	LANGUAGE_FRENCH = 3,
	LANGUAGE_PORTUGUESE = 4,
	LANGUAGE_ITALIAN = 5,
	LANGUAGE_JAPANESE = 6,
	LANGUAGE_KOREAN = 7,
	// SIN = Simplified Chinese (for Singapore)
	LANGUAGE_CHINESESIN = 8,
	// CHI = Traditional Chinese (for Taiwan)
	LANGUAGE_CHINESETWN = 9,
	LANGUAGE_POLISH = 10,
	LANGUAGE_RUSSIAN = 11,

	// TODO: Unknown. Possibly English language for Korean systems?
	LANGUAGE_ENGLISHKOR = 12,

	NUM_LANGUAGES,
};

enum D2C_StringTablesHcidx
{
	STRTABLE_STRING,
	STRTABLE_PATCHSTRING,
	STRTABLE_EXPSTRING,
};
#endif // CONSTANTS_STRINGS

#ifndef CONSTANTS_ARENA //Pseudo-Macro to group all constants
enum D2C_PvpFlags
{
	PVPFLAG_INVITEYOU = 0x01,		// Player Invites you
	PVPFLAG_YOUINVITE = 0x02,		// You invited this player
	PVPFLAG_HOSTILEYOU = 0x04,		// This player has declared hostility towards you
	PVPFLAG_YOUHOSTILE = 0x08,		// You declared hostility towards this player
	PVPFLAG_ISALLIED = 0x10,		// Player is allied but not with you
	PVPFLAG_ALLIEDWITHYOU = 0x20	// You are allied with this player
};

enum D2C_ArenaMatchTypes
{
	D2ARENAMATCH_DEATHMATCH,
	D2ARENAMATCH_TEAMDEATHMATCH,
	D2ARENAMATCH_CAPTURETHEFLAG,
	D2ARENAMATCH_KINGOFTHEHILL,
};

enum D2Killtypes
{
	KILLTYPE_SUICIDE = 0, 
	KILLTYPE_PVP_KILL, 
	KILLTYPE_PVP2, 
	KILLTYPE_PVM_KILL, 
	KILLTYPE_NVM, 
	KILLTYPE_MVP_KILL, 
	KILLTYPE, 
};
#endif // CONSTANTS_ARENA

#ifndef CONSTANTS_PACKETS //Pseudo-Macro to group all constants
enum D2C_SRV2CLT5A_TYPES
{
	EVENTTYPE_DISCONNECT,
	EVENTTYPE_DROPERROR,
	EVENTTYPE_PLAYERJOIN,
	EVENTTYPE_PLAYERLEFT,
	EVENTTYPE_NOTINGAME,
	EVENTTYPE_NOTLOGGEDIN,
	EVENTTYPE_SLAIN_BY,
	EVENTTYPE_PVPSTATUS,
	EVENTTYPE_PLAYERISBUSY,
	EVENTTYPE_PLEASEWAIT,
	EVENTTYPE_HASITEMSINBOX,
	EVENTTYPE_UNUSED1,
	EVENTTYPE_UNUSED2,
	EVENTTYPE_NOTLISTENINGTOYOU,
	EVENTTYPE_CANTDOTHAT,
	EVENTTYPE_REALMGOINGDOWN,
	EVENTTYPE_PLEASEWAITHOSTILE,
	EVENTTYPE_JORDANSTONES,
	EVENTTYPE_DIABLOCLONE,
};

enum D2C_SRV2CLT77_PARAMS
{
	UPDATEUI_ASKTOTRADE = 0,
	UPDATEUI_ASKEDTOTRADE = 1,
	UPDATEUI_ACCEPTTRADE = 5,
	UPDATEUI_OPENTRADE = 6,
	UPDATEUI_SELLERNOROOM = 9,
	UPDATEUI_BUYERNOROOM = 10,
	UPDATEUI_CLOSETRADE = 12,
	UPDATEUI_TRADEDONE = 13,
	UPDATEUI_CHECKBOX = 14,
	UPDATEUI_NORMCHECKBOX = 15,
	UPDATEUI_OPENSTASH = 16,
	UPDATEUI_CLOSESTASH = 17,
	UPDATEUI_OPENCUBE = 21
};

enum D2C_SRV2CLT9C_9D_PARAMS
{
	ITEMACTION_ADDTOGROUND = 0,
	ITEMACTION_GROUNDTOCURSOR,
	ITEMACTION_DROPTOGROUND,
	ITEMACTION_ONGROUND,
	ITEMACTION_PUTINCONTAINER,
	ITEMACTION_REMOVEFROMCONTAINER,
	ITEMACTION_EQUIP,
	ITEMACTION_INDIRECTLYSWAPBODYITEM,
	ITEMACTION_UNEQUIP,
	ITEMACTION_SWAPBODYITEM,
	ITEMACTION_ADDQUANTITY,
	ITEMACTION_ADDTOSHOP,
	ITEMACTION_REMOVEFROMSHOP,
	ITEMACTION_SWAPINCONTAINER,
	ITEMACTION_PUTINBELT,
	ITEMACTION_REMOVEFROMBELT,
	ITEMACTION_SWAPINBELT,
	ITEMACTION_AUTOUNEQUIP,
	ITEMACTION_TOCURSOR,
	ITEMACTION_ITEMINSOCKET,
	ITEMACTION_UNKNOWN0x14,
	ITEMACTION_UPDATESTATS,
	ITEMACTION_UNKNOWN0x16,
	ITEMACTION_WEAPONSWITCH
};

enum D2C_ChatMessageTypes
{
	CHAT_NONE,
	CHAT_PLAYERMESSAGE,
	CHAT_RECEIVEDWHISPER,
	CHAT_SERVERMESSAGE,
	CHAT_NONAME,
	CHAT_EMOTE,
	CHAT_SENTWHISPER,
	CHAT_CLUESCROLL,
};
#endif // CONSTANTS_PACKETS

#ifndef CONSTANTS_QUESTS //Pseudo-Macro to group all constants
enum D2C_OriginalQuestFlags
{
	QFLAG_REWARDGRANTED,
	QFLAG_REWARDPENDING,
	QFLAG_STARTED,
	QFLAG_LEAVETOWN,
	QFLAG_ENTERAREA,
	QFLAG_CUSTOM1,
	QFLAG_CUSTOM2,
	QFLAG_CUSTOM3,
	QFLAG_CUSTOM4,
	QFLAG_CUSTOM5,
	QFLAG_CUSTOM6,
	QFLAG_CUSTOM7,
	QFLAG_UPDATEQUESTLOG,
	QFLAG_PRIMARYGOALDONE,
	QFLAG_COMPLETEDNOW,
	QFLAG_COMPLETEDBEFORE,
};

//enum D2C_QuestStates
//{
//	QSTATE_QUESTCOMPLETED,
//	QSTATE_QUESTDONE,
//	QSTATE_QUESTNOTSTARTED,
//	QSTATE_QUESTSTARTEDNOTCOMPLETED,
//};


//enum D2QuestFilterEvents
//{
//	QUESTEVENT_STATUSUPDATE = 0,
//	QUESTEVENT_NPCINIT = 1,
//	QUESTEVENT_QUESTINIT = 2
//};

enum D2ScrollMenus
{
	SCROLLMENU_MESSAGE = 0,
	SCROLLMENU_MENU = 1,
	SCROLLMENU_NONE = 2
};

enum D2QuestEvents
{
	QUESTEVENT_NPCACTIVATE = 0,
	QUESTEVENT_NPCDEACTIVATE = 2,
	QUESTEVENT_CHANGEDLEVEL = 3,
	QUESTEVENT_ITEMPICKEDUP = 4,
	QUESTEVENT_ITEMDROPPED = 5,
	QUESTEVENT_MONSTERKILLED = 8,
	QUESTEVENT_PLAYERDROPPEDWITHQUESTITEM = 9,
	QUESTEVENT_PLAYERLEAVESGAME = 10,
	QUESTEVENT_SCROLLMESSAGE = 11,
	QUESTEVENT_PLAYERSTARTEDGAME = 13,
	QUESTEVENT_PLAYERJOINEDGAME = 14
};

enum D2QuestAlert
{
	QALERT_DEFAULT = 0x00,
	QALERT_MESSAGE = 0x01,
	QALERT_SOUND = 0x02,
	QALERT_SOUNDEX = 0x10,
	QALERT_BLOCKED = 0x20
};
#endif // CONSTANTS_QUESTS
