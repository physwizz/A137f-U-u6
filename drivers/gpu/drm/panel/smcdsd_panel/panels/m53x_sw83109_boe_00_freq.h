/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __SW83109_FREQ_H__
#define __SW83109_FREQ_H__

#include <linux/types.h>
#include <linux/kernel.h>

#define TBL_ARR_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

#define DEFINE_FREQ_RANGE(_min, _max, _idx)	\
{							\
	.min = _min,			\
	.max = _max,			\
	.freq_idx = _idx,		\
}

#define DEFINE_FREQ_SET(_array)	\
{								\
	.array = _array,			\
	.size = TBL_ARR_SIZE(_array),	\
}

struct dynamic_freq_range {
	int	min;
	int max;
	int freq_idx;
};

struct df_freq_tbl_info {
	struct dynamic_freq_range *array;
	unsigned int size;
};

struct __packed ril_noti_info {
	u8 rat;
	u32 band;
	u32 channel;
};

enum {

	FREQ_RANGE_GSM850 = 1,
	FREQ_RANGE_EGSM900 = 2,
	FREQ_RANGE_DCS1800 = 3,
	FREQ_RANGE_PCS1900 = 4,
	FREQ_RANGE_WB01 = 11,
	FREQ_RANGE_WB02 = 12,
	FREQ_RANGE_WB03 = 13,
	FREQ_RANGE_WB04 = 14,
	FREQ_RANGE_WB05 = 15,
	FREQ_RANGE_WB06 = 16,
	FREQ_RANGE_WB07 = 17,
	FREQ_RANGE_WB08 = 18,
	FREQ_RANGE_WB09 = 19,
	FREQ_RANGE_WB10 = 20,
	FREQ_RANGE_WB11 = 21,
	FREQ_RANGE_WB12 = 22,
	FREQ_RANGE_WB13 = 23,
	FREQ_RANGE_WB14 = 24,
	FREQ_RANGE_WB15 = 25,
	FREQ_RANGE_WB16 = 26,
	FREQ_RANGE_WB17 = 27,
	FREQ_RANGE_WB18 = 28,
	FREQ_RANGE_WB19 = 29,
	FREQ_RANGE_WB20 = 30,
	FREQ_RANGE_WB21 = 31,
	FREQ_RANGE_WB22 = 32,
	FREQ_RANGE_WB23 = 33,
	FREQ_RANGE_WB24 = 34,
	FREQ_RANGE_WB25 = 35,
	FREQ_RANGE_WB26 = 36,
	FREQ_RANGE_WB27 = 37,
	FREQ_RANGE_WB28 = 38,
	FREQ_RANGE_WB29 = 39,
	FREQ_RANGE_WB30 = 40,
	FREQ_RANGE_WB31 = 41,
	FREQ_RANGE_WB32 = 42,
	FREQ_RANGE_TD1 = 51,
	FREQ_RANGE_TD2 = 52,
	FREQ_RANGE_TD3 = 53,
	FREQ_RANGE_TD4 = 54,
	FREQ_RANGE_TD5 = 55,
	FREQ_RANGE_TD6 = 56,
	FREQ_RANGE_BC0 = 61,
	FREQ_RANGE_BC1 = 62,
	FREQ_RANGE_BC2 = 63,
	FREQ_RANGE_BC3 = 64,
	FREQ_RANGE_BC4 = 65,
	FREQ_RANGE_BC5 = 66,
	FREQ_RANGE_BC6 = 67,
	FREQ_RANGE_BC7 = 68,
	FREQ_RANGE_BC8 = 69,
	FREQ_RANGE_BC9 = 70,
	FREQ_RANGE_BC10 = 71,
	FREQ_RANGE_BC11 = 72,
	FREQ_RANGE_BC12 = 73,
	FREQ_RANGE_BC13 = 74,
	FREQ_RANGE_BC14 = 75,
	FREQ_RANGE_BC15 = 76,
	FREQ_RANGE_BC16 = 77,
	FREQ_RANGE_BC17 = 78,
	FREQ_RANGE_BC18 = 79,
	FREQ_RANGE_BC19 = 80,
	FREQ_RANGE_BC20 = 81,
	FREQ_RANGE_BC21 = 82,
	FREQ_RANGE_LB01 = 91,
	FREQ_RANGE_LB02 = 92,
	FREQ_RANGE_LB03 = 93,
	FREQ_RANGE_LB04 = 94,
	FREQ_RANGE_LB05 = 95,
	FREQ_RANGE_LB06 = 96,
	FREQ_RANGE_LB07 = 97,
	FREQ_RANGE_LB08 = 98,
	FREQ_RANGE_LB09 = 99,
	FREQ_RANGE_LB10 = 100,
	FREQ_RANGE_LB11 = 101,
	FREQ_RANGE_LB12 = 102,
	FREQ_RANGE_LB13 = 103,
	FREQ_RANGE_LB14 = 104,
	FREQ_RANGE_LB15 = 105,
	FREQ_RANGE_LB16 = 106,
	FREQ_RANGE_LB17 = 107,
	FREQ_RANGE_LB18 = 108,
	FREQ_RANGE_LB19 = 109,
	FREQ_RANGE_LB20 = 110,
	FREQ_RANGE_LB21 = 111,
	FREQ_RANGE_LB22 = 112,
	FREQ_RANGE_LB23 = 113,
	FREQ_RANGE_LB24 = 114,
	FREQ_RANGE_LB25 = 115,
	FREQ_RANGE_LB26 = 116,
	FREQ_RANGE_LB27 = 117,
	FREQ_RANGE_LB28 = 118,
	FREQ_RANGE_LB29 = 119,
	FREQ_RANGE_LB30 = 120,
	FREQ_RANGE_LB31 = 121,
	FREQ_RANGE_LB32 = 122,
	FREQ_RANGE_LB33 = 123,
	FREQ_RANGE_LB34 = 124,
	FREQ_RANGE_LB35 = 125,
	FREQ_RANGE_LB36 = 126,
	FREQ_RANGE_LB37 = 127,
	FREQ_RANGE_LB38 = 128,
	FREQ_RANGE_LB39 = 129,
	FREQ_RANGE_LB40 = 130,
	FREQ_RANGE_LB41 = 131,
	FREQ_RANGE_LB42 = 132,
	FREQ_RANGE_LB43 = 133,
	FREQ_RANGE_LB44 = 134,
	FREQ_RANGE_LB45 = 135,
	FREQ_RANGE_LB46 = 136,
	FREQ_RANGE_LB47 = 137,
	FREQ_RANGE_LB48 = 138,
	FREQ_RANGE_LB65 = 155,
	FREQ_RANGE_LB66 = 156,
	FREQ_RANGE_LB67 = 157,
	FREQ_RANGE_LB68 = 158,
	FREQ_RANGE_LB69 = 159,
	FREQ_RANGE_LB70 = 160,
	FREQ_RANGE_LB71 = 161,
	FREQ_RANGE_N000 = 255,
	FREQ_RANGE_N001 = 256,
	FREQ_RANGE_N002 = 257,
	FREQ_RANGE_N003 = 258,
	FREQ_RANGE_N004 = 259,
	FREQ_RANGE_N005 = 260,
	FREQ_RANGE_N006 = 261,
	FREQ_RANGE_N007 = 262,
	FREQ_RANGE_N008 = 263,
	FREQ_RANGE_N009 = 264,
	FREQ_RANGE_N010 = 265,
	FREQ_RANGE_N011 = 266,
	FREQ_RANGE_N012 = 267,
	FREQ_RANGE_N013 = 268,
	FREQ_RANGE_N014 = 269,
	FREQ_RANGE_N015 = 270,
	FREQ_RANGE_N016 = 271,
	FREQ_RANGE_N017 = 272,
	FREQ_RANGE_N018 = 273,
	FREQ_RANGE_N019 = 274,
	FREQ_RANGE_N020 = 275,
	FREQ_RANGE_N021 = 276,
	FREQ_RANGE_N022 = 277,
	FREQ_RANGE_N023 = 278,
	FREQ_RANGE_N024 = 279,
	FREQ_RANGE_N025 = 280,
	FREQ_RANGE_N026 = 281,
	FREQ_RANGE_N027 = 282,
	FREQ_RANGE_N028 = 283,
	FREQ_RANGE_N029 = 284,
	FREQ_RANGE_N030 = 285,
	FREQ_RANGE_N031 = 286,
	FREQ_RANGE_N032 = 287,
	FREQ_RANGE_N033 = 288,
	FREQ_RANGE_N034 = 289,
	FREQ_RANGE_N035 = 290,
	FREQ_RANGE_N036 = 291,
	FREQ_RANGE_N037 = 292,
	FREQ_RANGE_N038 = 293,
	FREQ_RANGE_N039 = 294,
	FREQ_RANGE_N040 = 295,
	FREQ_RANGE_N041 = 296,
	FREQ_RANGE_N042 = 297,
	FREQ_RANGE_N043 = 298,
	FREQ_RANGE_N044 = 299,
	FREQ_RANGE_N045 = 300,
	FREQ_RANGE_N046 = 301,
	FREQ_RANGE_N047 = 302,
	FREQ_RANGE_N048 = 303,
	FREQ_RANGE_N049 = 304,
	FREQ_RANGE_N050 = 305,
	FREQ_RANGE_N051 = 306,
	FREQ_RANGE_N052 = 307,
	FREQ_RANGE_N053 = 308,
	FREQ_RANGE_N054 = 309,
	FREQ_RANGE_N055 = 310,
	FREQ_RANGE_N056 = 311,
	FREQ_RANGE_N057 = 312,
	FREQ_RANGE_N058 = 313,
	FREQ_RANGE_N059 = 314,
	FREQ_RANGE_N060 = 315,
	FREQ_RANGE_N061 = 316,
	FREQ_RANGE_N062 = 317,
	FREQ_RANGE_N063 = 318,
	FREQ_RANGE_N064 = 319,
	FREQ_RANGE_N065 = 320,
	FREQ_RANGE_N066 = 321,
	FREQ_RANGE_N067 = 322,
	FREQ_RANGE_N068 = 323,
	FREQ_RANGE_N069 = 324,
	FREQ_RANGE_N070 = 325,
	FREQ_RANGE_N071 = 326,
	FREQ_RANGE_N072 = 327,
	FREQ_RANGE_N073 = 328,
	FREQ_RANGE_N074 = 329,
	FREQ_RANGE_N075 = 330,
	FREQ_RANGE_N076 = 331,
	FREQ_RANGE_N077 = 332,
	FREQ_RANGE_N078 = 333,
	FREQ_RANGE_N079 = 334,
	FREQ_RANGE_N080 = 335,
	FREQ_RANGE_N081 = 336,
	FREQ_RANGE_N082 = 337,
	FREQ_RANGE_N083 = 338,
	FREQ_RANGE_N084 = 339,
	FREQ_RANGE_N085 = 340,
	FREQ_RANGE_N086 = 341,
	FREQ_RANGE_N087 = 342,
	FREQ_RANGE_N088 = 343,
	FREQ_RANGE_N089 = 344,
	FREQ_RANGE_N090 = 345,
	FREQ_RANGE_N257 = 512,
	FREQ_RANGE_N258 = 513,
	FREQ_RANGE_N259 = 514,
	FREQ_RANGE_N260 = 515,
	FREQ_RANGE_N261 = 516,
	FREQ_RANGE_MAX = 517,
};

struct dynamic_freq_range m53_freq_range_GSM850[] = {
	DEFINE_FREQ_RANGE(0, 0, 2),
};

struct dynamic_freq_range m53_freq_range_EGSM900[] = {
	DEFINE_FREQ_RANGE(0, 0, 2),
};

struct dynamic_freq_range m53_freq_range_DCS1800[] = {
	DEFINE_FREQ_RANGE(0, 0, 1),
};

struct dynamic_freq_range m53_freq_range_PCS1900[] = {
	DEFINE_FREQ_RANGE(0, 0, 0),
};

struct dynamic_freq_range m53_freq_range_WB01[] = {
	DEFINE_FREQ_RANGE(10562, 10653, 1),
	DEFINE_FREQ_RANGE(10654, 10838, 0),
};

struct dynamic_freq_range m53_freq_range_WB02[] = {
	DEFINE_FREQ_RANGE(9662, 9709, 2),
	DEFINE_FREQ_RANGE(9710, 9836, 0),
	DEFINE_FREQ_RANGE(9837, 9859, 1),
	DEFINE_FREQ_RANGE(9860, 9938, 2),
};

struct dynamic_freq_range m53_freq_range_WB03[] = {
	DEFINE_FREQ_RANGE(1162, 1267, 1),
	DEFINE_FREQ_RANGE(1268, 1272, 0),
	DEFINE_FREQ_RANGE(1273, 1297, 1),
	DEFINE_FREQ_RANGE(1298, 1319, 2),
	DEFINE_FREQ_RANGE(1320, 1447, 0),
	DEFINE_FREQ_RANGE(1448, 1469, 1),
	DEFINE_FREQ_RANGE(1470, 1513, 2),
};

struct dynamic_freq_range m53_freq_range_WB04[] = {
	DEFINE_FREQ_RANGE(1537, 1628, 1),
	DEFINE_FREQ_RANGE(1629, 1738, 0),
};

struct dynamic_freq_range m53_freq_range_WB05[] = {
	DEFINE_FREQ_RANGE(4357, 4458, 0),
};

struct dynamic_freq_range m53_freq_range_WB06[] = {
	DEFINE_FREQ_RANGE(4387, 4413, 0),
};

struct dynamic_freq_range m53_freq_range_WB07[] = {
	DEFINE_FREQ_RANGE(2237, 2297, 1),
	DEFINE_FREQ_RANGE(2298, 2342, 0),
	DEFINE_FREQ_RANGE(2343, 2407, 1),
	DEFINE_FREQ_RANGE(2408, 2439, 2),
	DEFINE_FREQ_RANGE(2440, 2557, 0),
	DEFINE_FREQ_RANGE(2558, 2563, 1),
};

struct dynamic_freq_range m53_freq_range_WB08[] = {
	DEFINE_FREQ_RANGE(2937, 3000, 0),
	DEFINE_FREQ_RANGE(3001, 3088, 2),
};

struct dynamic_freq_range m53_freq_range_WB19[] = {
	DEFINE_FREQ_RANGE(712, 763, 0),
};

struct dynamic_freq_range m53_freq_range_LB01[] = {
	DEFINE_FREQ_RANGE(0, 599, 1),
};

struct dynamic_freq_range m53_freq_range_LB02[] = {
	DEFINE_FREQ_RANGE(600, 719, 2),
	DEFINE_FREQ_RANGE(720, 972, 0),
	DEFINE_FREQ_RANGE(973, 1019, 1),
	DEFINE_FREQ_RANGE(1020, 1199, 2),
};

struct dynamic_freq_range m53_freq_range_LB03[] = {
	DEFINE_FREQ_RANGE(1200, 1434, 1),
	DEFINE_FREQ_RANGE(1435, 1444, 0),
	DEFINE_FREQ_RANGE(1445, 1494, 1),
	DEFINE_FREQ_RANGE(1495, 1600, 2),
	DEFINE_FREQ_RANGE(1601, 1794, 0),
	DEFINE_FREQ_RANGE(1795, 1839, 1),
	DEFINE_FREQ_RANGE(1840, 1949, 2),
};

struct dynamic_freq_range m53_freq_range_LB04[] = {
	DEFINE_FREQ_RANGE(1950, 2157, 1),
	DEFINE_FREQ_RANGE(2158, 2399, 0),
};

struct dynamic_freq_range m53_freq_range_LB05[] = {
	DEFINE_FREQ_RANGE(2400, 2627, 0),
	DEFINE_FREQ_RANGE(2628, 2649, 1),
};

struct dynamic_freq_range m53_freq_range_LB07[] = {
	DEFINE_FREQ_RANGE(2750, 2894, 1),
	DEFINE_FREQ_RANGE(2895, 2984, 0),
	DEFINE_FREQ_RANGE(2985, 3114, 1),
	DEFINE_FREQ_RANGE(3115, 3179, 2),
	DEFINE_FREQ_RANGE(3180, 3414, 0),
	DEFINE_FREQ_RANGE(3415, 3449, 1),
};

struct dynamic_freq_range m53_freq_range_LB08[] = {
	DEFINE_FREQ_RANGE(3450, 3600, 0),
	DEFINE_FREQ_RANGE(3601, 3799, 2),
};

struct dynamic_freq_range m53_freq_range_LB12[] = {
	DEFINE_FREQ_RANGE(5010, 5062, 0),
	DEFINE_FREQ_RANGE(5063, 5079, 1),
	DEFINE_FREQ_RANGE(5080, 5179, 2),
};

struct dynamic_freq_range m53_freq_range_LB13[] = {
	DEFINE_FREQ_RANGE(5180, 5279, 2),
};

struct dynamic_freq_range m53_freq_range_LB14[] = {
	DEFINE_FREQ_RANGE(5280, 5379, 2),
};

struct dynamic_freq_range m53_freq_range_LB17[] = {
	DEFINE_FREQ_RANGE(5730, 5732, 0),
	DEFINE_FREQ_RANGE(5733, 5749, 1),
	DEFINE_FREQ_RANGE(5750, 5849, 2),
};

struct dynamic_freq_range m53_freq_range_LB18[] = {
	DEFINE_FREQ_RANGE(5850, 5999, 0),
};

struct dynamic_freq_range m53_freq_range_LB19[] = {
	DEFINE_FREQ_RANGE(6000, 6149, 0),
};

struct dynamic_freq_range m53_freq_range_LB20[] = {
	DEFINE_FREQ_RANGE(6150, 6449, 1),
};

struct dynamic_freq_range m53_freq_range_LB21[] = {
	DEFINE_FREQ_RANGE(6450, 6599, 2),
};

struct dynamic_freq_range m53_freq_range_LB25[] = {
	DEFINE_FREQ_RANGE(8040, 8159, 2),
	DEFINE_FREQ_RANGE(8160, 8412, 0),
	DEFINE_FREQ_RANGE(8413, 8459, 1),
	DEFINE_FREQ_RANGE(8460, 8689, 2),
};

struct dynamic_freq_range m53_freq_range_LB26[] = {
	DEFINE_FREQ_RANGE(8690, 9017, 0),
	DEFINE_FREQ_RANGE(9018, 9039, 1),
};

struct dynamic_freq_range m53_freq_range_LB28[] = {
	DEFINE_FREQ_RANGE(9210, 9659, 2),
};

struct dynamic_freq_range m53_freq_range_LB29[] = {
	DEFINE_FREQ_RANGE(9660, 9769, 0),
};

struct dynamic_freq_range m53_freq_range_LB30[] = {
	DEFINE_FREQ_RANGE(9770, 9809, 2),
	DEFINE_FREQ_RANGE(9810, 9869, 0),
};

struct dynamic_freq_range m53_freq_range_LB32[] = {
	DEFINE_FREQ_RANGE(9920, 9934, 0),
	DEFINE_FREQ_RANGE(9935, 9969, 1),
	DEFINE_FREQ_RANGE(9970, 10359, 2),
};

struct dynamic_freq_range m53_freq_range_LB34[] = {
	DEFINE_FREQ_RANGE(36200, 36349, 2),
};

struct dynamic_freq_range m53_freq_range_LB38[] = {
	DEFINE_FREQ_RANGE(37750, 38094, 0),
	DEFINE_FREQ_RANGE(38095, 38249, 1),
};

struct dynamic_freq_range m53_freq_range_LB39[] = {
	DEFINE_FREQ_RANGE(38250, 38649, 2),
};

struct dynamic_freq_range m53_freq_range_LB40[] = {
	DEFINE_FREQ_RANGE(38650, 39189, 2),
	DEFINE_FREQ_RANGE(39190, 39432, 0),
	DEFINE_FREQ_RANGE(39433, 39489, 1),
	DEFINE_FREQ_RANGE(39490, 39649, 2),
};

struct dynamic_freq_range m53_freq_range_LB41[] = {
	DEFINE_FREQ_RANGE(39650, 39727, 0),
	DEFINE_FREQ_RANGE(39728, 40027, 1),
	DEFINE_FREQ_RANGE(40028, 40734, 0),
	DEFINE_FREQ_RANGE(40735, 41034, 1),
	DEFINE_FREQ_RANGE(41035, 41124, 0),
	DEFINE_FREQ_RANGE(41125, 41254, 1),
	DEFINE_FREQ_RANGE(41255, 41319, 2),
	DEFINE_FREQ_RANGE(41320, 41554, 0),
	DEFINE_FREQ_RANGE(41555, 41589, 1),
};

struct dynamic_freq_range m53_freq_range_LB42[] = {
	DEFINE_FREQ_RANGE(41590, 41695, 0),
	DEFINE_FREQ_RANGE(41696, 41995, 1),
	DEFINE_FREQ_RANGE(41996, 42165, 0),
	DEFINE_FREQ_RANGE(42166, 42375, 1),
	DEFINE_FREQ_RANGE(42376, 42460, 2),
	DEFINE_FREQ_RANGE(42461, 42675, 0),
	DEFINE_FREQ_RANGE(42676, 42760, 1),
	DEFINE_FREQ_RANGE(42761, 43490, 2),
	DEFINE_FREQ_RANGE(43491, 43589, 0),
};

struct dynamic_freq_range m53_freq_range_LB48[] = {
	DEFINE_FREQ_RANGE(55240, 55640, 2),
	DEFINE_FREQ_RANGE(55641, 55852, 0),
	DEFINE_FREQ_RANGE(55853, 55940, 1),
	DEFINE_FREQ_RANGE(55941, 56415, 2),
	DEFINE_FREQ_RANGE(56416, 56739, 0),
};

struct dynamic_freq_range m53_freq_range_LB66[] = {
	DEFINE_FREQ_RANGE(66436, 66643, 1),
	DEFINE_FREQ_RANGE(66644, 67335, 0),
};

struct dynamic_freq_range m53_freq_range_LB71[] = {
	DEFINE_FREQ_RANGE(68586, 68730, 0),
	DEFINE_FREQ_RANGE(68731, 68745, 1),
	DEFINE_FREQ_RANGE(68746, 68935, 2),

};

struct dynamic_freq_range m53_freq_range_TD1[] = {
	DEFINE_FREQ_RANGE(0, 0, 2),
};

struct dynamic_freq_range m53_freq_range_TD2[] = {
	DEFINE_FREQ_RANGE(0, 0, 0),
};

struct dynamic_freq_range m53_freq_range_TD3[] = {
	DEFINE_FREQ_RANGE(0, 0, 2),
};

struct dynamic_freq_range m53_freq_range_TD4[] = {
	DEFINE_FREQ_RANGE(0, 0, 0),
};

struct dynamic_freq_range m53_freq_range_TD5[] = {
	DEFINE_FREQ_RANGE(0, 0, 0),
};

struct dynamic_freq_range m53_freq_range_TD6[] = {
	DEFINE_FREQ_RANGE(0, 0, 2),
};

struct dynamic_freq_range m53_freq_range_BC0[] = {
	DEFINE_FREQ_RANGE(0, 0, 2),
};

struct dynamic_freq_range m53_freq_range_BC1[] = {
	DEFINE_FREQ_RANGE(0, 0, 0),
};

struct dynamic_freq_range m53_freq_range_BC10[] = {
	DEFINE_FREQ_RANGE(0, 0, 0),
};

struct dynamic_freq_range m53_freq_range_N005[] = {
	DEFINE_FREQ_RANGE(173800, 176340, 0),
	DEFINE_FREQ_RANGE(176341, 178780, 1),
};

struct dynamic_freq_range m53_freq_range_N008[] = {
	DEFINE_FREQ_RANGE(185000, 191980, 2),
};

struct dynamic_freq_range m53_freq_range_N012[] = {
	DEFINE_FREQ_RANGE(145800, 148840, 0),
	DEFINE_FREQ_RANGE(148841, 149180, 1),
	DEFINE_FREQ_RANGE(149181, 149200, 2),
};

struct dynamic_freq_range m53_freq_range_N020[] = {
	DEFINE_FREQ_RANGE(158200, 164180, 1),
};

struct dynamic_freq_range m53_freq_range_N028[] = {
	DEFINE_FREQ_RANGE(151600, 160580, 2),
};

struct dynamic_freq_range m53_freq_range_N071[] = {
	DEFINE_FREQ_RANGE(123400, 128280, 0),
	DEFINE_FREQ_RANGE(128281, 128580, 1),
	DEFINE_FREQ_RANGE(128581, 130380, 2),
};

struct df_freq_tbl_info m53_dynamic_freq_set[FREQ_RANGE_MAX] = {
	[FREQ_RANGE_GSM850] = DEFINE_FREQ_SET(m53_freq_range_GSM850),
	[FREQ_RANGE_EGSM900] = DEFINE_FREQ_SET(m53_freq_range_EGSM900),
	[FREQ_RANGE_DCS1800] = DEFINE_FREQ_SET(m53_freq_range_DCS1800),
	[FREQ_RANGE_PCS1900] = DEFINE_FREQ_SET(m53_freq_range_PCS1900),
	[FREQ_RANGE_WB01] = DEFINE_FREQ_SET(m53_freq_range_WB01),
	[FREQ_RANGE_WB02] = DEFINE_FREQ_SET(m53_freq_range_WB02),
	[FREQ_RANGE_WB03] = DEFINE_FREQ_SET(m53_freq_range_WB03),
	[FREQ_RANGE_WB04] = DEFINE_FREQ_SET(m53_freq_range_WB04),
	[FREQ_RANGE_WB05] = DEFINE_FREQ_SET(m53_freq_range_WB05),
	[FREQ_RANGE_WB06] = DEFINE_FREQ_SET(m53_freq_range_WB06),
	[FREQ_RANGE_WB07] = DEFINE_FREQ_SET(m53_freq_range_WB07),
	[FREQ_RANGE_WB08] = DEFINE_FREQ_SET(m53_freq_range_WB08),
	[FREQ_RANGE_WB19] = DEFINE_FREQ_SET(m53_freq_range_WB19),
	[FREQ_RANGE_LB01] = DEFINE_FREQ_SET(m53_freq_range_LB01),
	[FREQ_RANGE_LB02] = DEFINE_FREQ_SET(m53_freq_range_LB02),
	[FREQ_RANGE_LB03] = DEFINE_FREQ_SET(m53_freq_range_LB03),
	[FREQ_RANGE_LB04] = DEFINE_FREQ_SET(m53_freq_range_LB04),
	[FREQ_RANGE_LB05] = DEFINE_FREQ_SET(m53_freq_range_LB05),
	[FREQ_RANGE_LB07] = DEFINE_FREQ_SET(m53_freq_range_LB07),
	[FREQ_RANGE_LB08] = DEFINE_FREQ_SET(m53_freq_range_LB08),
	[FREQ_RANGE_LB12] = DEFINE_FREQ_SET(m53_freq_range_LB12),
	[FREQ_RANGE_LB13] = DEFINE_FREQ_SET(m53_freq_range_LB13),
	[FREQ_RANGE_LB14] = DEFINE_FREQ_SET(m53_freq_range_LB14),
	[FREQ_RANGE_LB17] = DEFINE_FREQ_SET(m53_freq_range_LB17),
	[FREQ_RANGE_LB18] = DEFINE_FREQ_SET(m53_freq_range_LB18),
	[FREQ_RANGE_LB19] = DEFINE_FREQ_SET(m53_freq_range_LB19),
	[FREQ_RANGE_LB20] = DEFINE_FREQ_SET(m53_freq_range_LB20),
	[FREQ_RANGE_LB21] = DEFINE_FREQ_SET(m53_freq_range_LB21),
	[FREQ_RANGE_LB25] = DEFINE_FREQ_SET(m53_freq_range_LB25),
	[FREQ_RANGE_LB26] = DEFINE_FREQ_SET(m53_freq_range_LB26),
	[FREQ_RANGE_LB28] = DEFINE_FREQ_SET(m53_freq_range_LB28),
	[FREQ_RANGE_LB29] = DEFINE_FREQ_SET(m53_freq_range_LB29),
	[FREQ_RANGE_LB30] = DEFINE_FREQ_SET(m53_freq_range_LB30),
	[FREQ_RANGE_LB32] = DEFINE_FREQ_SET(m53_freq_range_LB32),
	[FREQ_RANGE_LB34] = DEFINE_FREQ_SET(m53_freq_range_LB34),
	[FREQ_RANGE_LB38] = DEFINE_FREQ_SET(m53_freq_range_LB38),
	[FREQ_RANGE_LB39] = DEFINE_FREQ_SET(m53_freq_range_LB39),
	[FREQ_RANGE_LB40] = DEFINE_FREQ_SET(m53_freq_range_LB40),
	[FREQ_RANGE_LB41] = DEFINE_FREQ_SET(m53_freq_range_LB41),
	[FREQ_RANGE_LB42] = DEFINE_FREQ_SET(m53_freq_range_LB42),
	[FREQ_RANGE_LB48] = DEFINE_FREQ_SET(m53_freq_range_LB48),
	[FREQ_RANGE_LB66] = DEFINE_FREQ_SET(m53_freq_range_LB66),
	[FREQ_RANGE_LB71] = DEFINE_FREQ_SET(m53_freq_range_LB71),
	[FREQ_RANGE_TD1] = DEFINE_FREQ_SET(m53_freq_range_TD1),
	[FREQ_RANGE_TD2] = DEFINE_FREQ_SET(m53_freq_range_TD2),
	[FREQ_RANGE_TD3] = DEFINE_FREQ_SET(m53_freq_range_TD3),
	[FREQ_RANGE_TD4] = DEFINE_FREQ_SET(m53_freq_range_TD4),
	[FREQ_RANGE_TD5] = DEFINE_FREQ_SET(m53_freq_range_TD5),
	[FREQ_RANGE_TD6] = DEFINE_FREQ_SET(m53_freq_range_TD6),
	[FREQ_RANGE_BC0] = DEFINE_FREQ_SET(m53_freq_range_BC0),
	[FREQ_RANGE_BC1] = DEFINE_FREQ_SET(m53_freq_range_BC1),
	[FREQ_RANGE_BC10] = DEFINE_FREQ_SET(m53_freq_range_BC10),
	[FREQ_RANGE_N005] = DEFINE_FREQ_SET(m53_freq_range_N005),
	[FREQ_RANGE_N008] = DEFINE_FREQ_SET(m53_freq_range_N008),
	[FREQ_RANGE_N012] = DEFINE_FREQ_SET(m53_freq_range_N012),
	[FREQ_RANGE_N020] = DEFINE_FREQ_SET(m53_freq_range_N020),
	[FREQ_RANGE_N028] = DEFINE_FREQ_SET(m53_freq_range_N028),
	[FREQ_RANGE_N071] = DEFINE_FREQ_SET(m53_freq_range_N071),
};

#endif /* __SW83109_FREQ_H__ */