/*
 * File: src/object/list-object-flags.h
 * Purpose: object flags for all objects
 *
 * Changing flag order will break savefiles. There is a hard-coded limit of
 * 256 flags, due to 32 bytes of storage for item flags in the savefile. Flags
 * below start from 0 on line 23, so a flag's sequence number is its line
 * number minus 23.
 *
 * index: the flag number
 * pval: is it a quantitative flag? FALSE means it's just on/off
 * timed: what is the corresponding TMD_ flag
 * id: when the flag is IDd
 * type: what type of flag is it?
 * power: base power rating for the flag (0 means it is unused or derived)
 * pval_mult: weight of this flag relative to other pval flags
 * wpn/bow/ring/amu/light/body/cloak/shield/hat/gloves/boots: power multiplier for this slot
 * rune: the random name for the rune (set elsewhere)
 * name: the learned name for the rune
 * message: what is printed when the flag is IDd (but see also identify.c and list-slays.h)
 */
/* index       	pval	timed			id			type		power	p_m	wpn	bow	ring	amu	light	body	cloak	shield	hat	gloves	boots	rune	name 					message */
OF(NONE,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"",						"")
OF(STR,         TRUE,	0,				OFID_WIELD,	OFT_STAT,	9,		13,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Strength",				"")
OF(INT,         TRUE,	0,				OFID_WIELD,	OFT_STAT,	5,		10,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Intelligence",			"")
OF(WIS,         TRUE,	0,				OFID_WIELD,	OFT_STAT,	5,		10,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Wisdom",				"")
OF(DEX,         TRUE,	0,				OFID_WIELD,	OFT_STAT,	8,		10,	1,	1,	1,		1,	1,		1,		1,		1,		1,	2,		1,		"",		"Dexterity",			"")
OF(CON,         TRUE,	0,				OFID_WIELD,	OFT_STAT,	12,		15,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Constitution",			"")
OF(CHR,         TRUE,	0,				OFID_WIELD,	OFT_STAT,	2,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Charisma",				"")
OF(XXX1,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"XXX1",					"")
OF(XXX2,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"XXX2",					"")
OF(STEALTH,     TRUE,	0,				OFID_WIELD,	OFT_PVAL,	8,		12,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Stealth",				"Your %s glows.")
OF(SEARCH,      TRUE,	0,				OFID_WIELD,	OFT_PVAL,	2,		5,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Searching",			"Your %s glows.")
OF(INFRA,       TRUE,	TMD_SINFRA,		OFID_WIELD,	OFT_PVAL,	4,		8,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Infravision",			"")
OF(TUNNEL,      TRUE,	0,				OFID_WIELD,	OFT_PVAL,	3,		8,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Tunnelling",			"")
OF(SPEED,       TRUE,	TMD_FAST,		OFID_WIELD,	OFT_PVAL,	40,		12,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Speed",				"")
OF(BLOWS,       TRUE,	0,				OFID_WIELD,	OFT_PVAL,	0,		50,	1,	0,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Extra Blows",			"")
OF(SHOTS,       TRUE,	0,				OFID_WIELD,	OFT_PVAL,	0,		50,	0,	1,	4,		4,	4,		4,		4,		4,		4,	4,		4,		"",		"Extra Shots",			"")
OF(MIGHT,       TRUE,	0,				OFID_WIELD,	OFT_PVAL,	0,		40,	0,	1,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"Extra Might",			"")
OF(SLAY_ANIMAL, TRUE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Slay Animal",			"")
OF(SLAY_EVIL,   TRUE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Slay Evil",			"")
OF(SLAY_UNDEAD, TRUE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Slay Undead",			"")
OF(SLAY_DEMON,  TRUE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Slay Demon",			"")
OF(SLAY_ORC,    TRUE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Slay Orc",				"")
OF(SLAY_TROLL,  TRUE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Slay Troll",			"")
OF(SLAY_GIANT,  TRUE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Slay Giant",			"")
OF(SLAY_DRAGON, TRUE,	0,				OFID_NORMAL,OFT_SLAY,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Slay Dragon",			"")
OF(XXX3,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"XXX3",					"")
OF(XXX4,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"XXX4",					"")
OF(XXX5,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"XXX5",					"")
OF(BRAND_POIS,  TRUE,	0,				OFID_WIELD,	OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Venom Brand",			"")
OF(BRAND_ACID,  TRUE,	0,				OFID_WIELD,	OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Acid Brand",			"")
OF(BRAND_ELEC,  TRUE,	0,				OFID_WIELD,	OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Electric Brand",		"")
OF(BRAND_FIRE,  TRUE,	0,				OFID_WIELD,	OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Fire Brand",			"")
OF(BRAND_COLD,  TRUE,	0,				OFID_WIELD, OFT_BRAND,	0,		0,	1,	3,	3,		3,	3,		3,		3,		3,		3,	3,		3,		"",		"Cold Brand",			"")
OF(SUST_STR,    FALSE,	0,				OFID_NORMAL,OFT_SUST,	9,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Sustain Strength",		"Your %s glows.")
OF(SUST_INT,    FALSE,	0,				OFID_NORMAL,OFT_SUST,	4,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Sustain Intelligence",	"Your %s glows.")
OF(SUST_WIS,    FALSE,	0,				OFID_NORMAL,OFT_SUST,	4,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Sustain Wisdom",		"Your %s glows.")
OF(SUST_DEX,    FALSE,	0,				OFID_NORMAL,OFT_SUST,	7,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"", 	"Sustain Dexterity", 	"Your %s glows.")
OF(SUST_CON,    FALSE, 	0,				OFID_NORMAL,OFT_SUST,	8,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Sustain Constitution",	"Your %s glows.")
OF(SUST_CHR,    FALSE,	0,				OFID_NORMAL,OFT_SUST,	1,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Sustain Charisma",		"Your %s glows.")
OF(VULN_ACID,   FALSE, 	0,				OFID_NORMAL,OFT_VULN,	-6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Acid Vulnerability",	"Your %s glows.")
OF(VULN_ELEC,   FALSE,	0,				OFID_NORMAL,OFT_VULN,	-6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Electric Vulnerability","Your %s glows.")
OF(VULN_FIRE,   FALSE,	0,				OFID_NORMAL,OFT_VULN,	-6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Fire Vulnerability",	"Your %s glows.")
OF(VULN_COLD,   FALSE,	0,				OFID_NORMAL,OFT_VULN,	-6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Cold Vulnerability",	"Your %s glows.")
OF(XXX6,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"XXX6",					"")
OF(XXX7,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"XXX7",					"")
OF(IM_ACID,     FALSE, 	0,				OFID_NORMAL,OFT_IMM,	38,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Acid Immunity",		"Your %s glows.")
OF(IM_ELEC,     FALSE,	0,				OFID_NORMAL,OFT_IMM,	35,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Electric Immunity",	"Your %s glows.")
OF(IM_FIRE,     FALSE,	0,				OFID_NORMAL,OFT_IMM,	40,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Fire Immunity",		"Your %s glows.")
OF(IM_COLD,     FALSE,	0,				OFID_NORMAL,OFT_IMM,	37,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Cold Immunity",		"Your %s glows.")
OF(RES_ACID,    FALSE,	TMD_OPP_ACID,	OFID_NORMAL,OFT_LRES,	5,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Acid Resistance",		"Your %s glows.")
OF(RES_ELEC,    FALSE,	TMD_OPP_ELEC,	OFID_NORMAL,OFT_LRES,	6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Electric Resistance",	"Your %s glows.")
OF(RES_FIRE,    FALSE,	TMD_OPP_FIRE,	OFID_NORMAL,OFT_LRES,	6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Fire Resistance",		"Your %s glows.")
OF(RES_COLD,    FALSE,	TMD_OPP_COLD,	OFID_NORMAL,OFT_LRES,	6,		0,	1,	1,	1,		1,	1,		1,		1,		1,		1,	1,		1,		"",		"Cold Resistance",		"Your %s glows.")
OF(RES_POIS,    FALSE,	TMD_OPP_POIS,	OFID_NORMAL,OFT_HRES,	28,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Poison Resistance",	"Your %s glows.")
OF(RES_FEAR,    FALSE,	TMD_BOLD,		OFID_NORMAL,OFT_PROT,	6,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Fear Protection",		"Your %s glows.")
OF(RES_LIGHT,   FALSE,	0,				OFID_NORMAL,OFT_HRES,	6,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Light Resistance",		"Your %s glows.")
OF(RES_DARK,    FALSE,	0,				OFID_NORMAL,OFT_HRES,	16,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Dark Resistance",		"Your %s glows.")
OF(RES_BLIND,   FALSE,	0,				OFID_NORMAL,OFT_PROT,	16,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Blindness Protection",	"Your %s glows.")
OF(RES_CONFU,   FALSE,	TMD_OPP_CONF,	OFID_NORMAL,OFT_PROT,	24,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Confusion Protection",	"Your %s glows.")
OF(RES_SOUND,   FALSE,	0,				OFID_NORMAL,OFT_HRES,	14,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Sound Resistance",		"Your %s glows.")
OF(RES_SHARD,   FALSE,	0,				OFID_NORMAL,OFT_HRES,	8,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Shards Resistance",	"Your %s glows.")
OF(RES_NEXUS,   FALSE,	0,				OFID_NORMAL,OFT_HRES,	15,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Nexus Resistance",		"Your %s glows.")
OF(RES_NETHR,   FALSE,	0,				OFID_NORMAL,OFT_HRES,	20,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Nether Resistance",	"Your %s glows.")
OF(RES_CHAOS,   FALSE,	0,				OFID_NORMAL,OFT_HRES,	20,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Chaos Resistance",		"Your %s glows.")
OF(RES_DISEN,   FALSE, 	0,				OFID_NORMAL,OFT_HRES,	20,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Disenchant Resistance","Your %s glows.")
OF(SLOW_DIGEST, FALSE,	0,				OFID_TIMED,	OFT_MISC,	2,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Slow Digestion",		"You feel your %s slow your metabolism.")
OF(FEATHER,     FALSE,	0,				OFID_NORMAL,OFT_MISC,	1,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Feather Falling",		"Your %s slows your fall.")
OF(LIGHT,       TRUE,	0,				OFID_WIELD,	OFT_PVAL,	3,		40,	1,  1,  1,      1,  3,      1,      1,      1,      1,  1,      1,		"",		"Light Radius",			"")
OF(REGEN,       FALSE,	0,				OFID_TIMED,	OFT_MISC,	5,		0,	1,  1,  2,      2,  2,      2,      2,      2,      2,  2,      2,		"",		"Regeneration",			"You feel your %s speed up your recovery.")
OF(TELEPATHY,   FALSE,	TMD_TELEPATHY,	OFID_WIELD,	OFT_MISC,	35,		0,	1,	1,	2,		2,	2,		2,		2,		2,		2,	2,		2,		"",		"Telepathy",			"")
OF(SEE_INVIS,   FALSE,	TMD_SINVIS,		OFID_WIELD,	OFT_MISC,	6,		0,	1,  1,  2,      2,  2,      2,      2,      2,      2,  2,      2,		"",		"See Invisible",		"")
OF(FREE_ACT,    FALSE,	0,				OFID_NORMAL,OFT_MISC,	8,		0,	1,  1,  2,      2,  2,      2,      2,      2,      2,  5,      2,		"",		"Free Action",			"Your %s glows.")
OF(HOLD_LIFE,   FALSE,	0,				OFID_NORMAL,OFT_MISC,	5,		0,	1,  1,  2,      2,  2,      2,      2,      2,      2,  2,      2,		"",		"Lifedrain Protection",	"Your %s glows.")
OF(NO_FUEL,     FALSE,	0,				OFID_WIELD,	OFT_LIGHT,	5,		0,	0,	0,	0,		0,	1,		0,		0,		0,		0,	0,		0,		"",		"No Fuel",				"")
OF(IMPAIR_HP,   FALSE,	0,				OFID_TIMED,	OFT_BAD,	-9,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Impair health",		"You feel your %s slow your recovery.")
OF(IMPAIR_MANA, FALSE,	0,				OFID_TIMED,	OFT_BAD,	-9,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Impair mana",			"You feel your %s slow your mana recovery.")
OF(AFRAID,      FALSE,	TMD_AFRAID,		OFID_WIELD,	OFT_BAD,	-20,	0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Fear",					"")
OF(IMPACT,      FALSE,	0,				OFID_NORMAL,OFT_MELEE,	10,		0,	1,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"Impact",				"Your %s causes an earthquake!")
OF(TELEPORT,    FALSE,	0,				OFID_NORMAL,OFT_BAD,	-20,	0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Teleportation",		"Your %s teleports you.")
OF(AGGRAVATE,   FALSE,	0,				OFID_TIMED,	OFT_BAD,	-20,	0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Aggravation",			"You feel your %s aggravate things around you.")
OF(DRAIN_EXP,   FALSE,	0,				OFID_TIMED,	OFT_BAD,	-5,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Experience Drain",		"You feel your %s drain your life.")
OF(IGNORE_ACID, FALSE,	0,				OFID_NORMAL,OFT_IGNORE,	3,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Ignore Acid",			"")
OF(IGNORE_ELEC, FALSE,	0,				OFID_NORMAL,OFT_IGNORE,	1,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Ignore Electricity",	"")
OF(IGNORE_FIRE, FALSE,	0,				OFID_NORMAL,OFT_IGNORE,	3,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Ignore Fire",			"")
OF(IGNORE_COLD, FALSE,	0,				OFID_NORMAL,OFT_IGNORE,	1,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Ignore Cold",			"")
OF(RES_STUN,    FALSE,	0,				OFID_NORMAL,OFT_PROT,	12,		0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Stun Protection",		"Your %s glows.")
OF(XXX8,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"XXX8",					"")
OF(BLESSED,     FALSE,	0,				OFID_WIELD,	OFT_MELEE,	1,		0,	1,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"Blessed",				"")
OF(XXX9,        FALSE,	0,				0,			0,			0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"XXX9",					"")
OF(INSTA_ART,   FALSE,	0,				OFID_NONE,	OFT_INT,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"Insta_art",			"")
OF(EASY_KNOW,   FALSE,	0,				OFID_NONE,	OFT_INT,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"Easy_know",			"")
OF(XXX10,  		FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"XXX10",					"")
OF(XXX11,		FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"XXX11",					"")
OF(XXX12,       FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"XXX12",					"")
OF(LIGHT_CURSE, FALSE,	0,				OFID_WIELD,	OFT_CURSE,	-5,     0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Light Curse",			"")
OF(HEAVY_CURSE, FALSE,	0,				OFID_WIELD,	OFT_CURSE,	-15,    0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Heavy Curse",			"")
OF(PERMA_CURSE, FALSE,	0,				OFID_WIELD,	OFT_CURSE,	-25,    0,	1,  1,  1,      1,  1,      1,      1,      1,      1,  1,      1,		"",		"Permanent Curse",		"")
OF(HATES_ACID,  FALSE,	0,				OFID_NONE,	OFT_HATES,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"Hates Acid",			"")
OF(HATES_ELEC,  FALSE,	0,				OFID_NONE,	OFT_HATES,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"Hates Electricity",	"")
OF(HATES_FIRE,  FALSE,	0,				OFID_NONE,	OFT_HATES,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"Hates Fire",			"")
OF(HATES_COLD,  FALSE,	0,				OFID_NONE,	OFT_HATES,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"Hates Cold",			"")
OF(SPELLS_OK,   FALSE, 	0,				OFID_NONE,	OFT_INT,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"Caster-friendly",		"")
OF(SHOW_DICE,   FALSE,	0,				OFID_NONE,	OFT_INT,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"show_dice",			"")
OF(SHOW_MULT,	FALSE,	0,				OFID_NONE,	OFT_INT,	0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"show_mult",			"")
OF(XXX13,       FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"XXX13",					"")
OF(XXX14,       FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"XXX14",					"")
OF(XXX15,       FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"XXX15",					"")
OF(XXX16,       FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"XXX16",					"")
OF(XXX17,       FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"XXX17",					"")
OF(XXX18,       FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"XXX18",					"")
OF(XXX19,       FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"XXX19",					"")
OF(GOOD,		FALSE,	0,				OFID_NONE,	OFT_INT,	0,		0,	0,	0,	0,		0,	0,		0,		0,		0,		0,	0,		0,		"",		"Good object",			"")
OF(MAX,			FALSE,	0,				0,			0,			0,      0,	0,  0,  0,      0,  0,      0,      0,      0,      0,  0,      0,		"",		"",						"")
