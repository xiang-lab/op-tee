/* Generated automatically from machmode.def and config/aarch64/aarch64-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  VOIDmode,                /* machmode.def:172 */
  BLKmode,                 /* machmode.def:176 */
  CCmode,                  /* machmode.def:207 */
  CCFPmode,                /* config/aarch64/aarch64-modes.def:21 */
  CCFPEmode,               /* config/aarch64/aarch64-modes.def:22 */
  CC_SWPmode,              /* config/aarch64/aarch64-modes.def:23 */
  CC_ZESWPmode,            /* config/aarch64/aarch64-modes.def:24 */
  CC_SESWPmode,            /* config/aarch64/aarch64-modes.def:25 */
  CC_NZmode,               /* config/aarch64/aarch64-modes.def:26 */
  CC_Zmode,                /* config/aarch64/aarch64-modes.def:27 */
  BImode,                  /* machmode.def:179 */
  QImode,                  /* machmode.def:187 */
  HImode,                  /* machmode.def:188 */
  SImode,                  /* machmode.def:189 */
  DImode,                  /* machmode.def:190 */
  TImode,                  /* machmode.def:191 */
  EImode,                  /* config/aarch64/aarch64-modes.def:40 */
  OImode,                  /* config/aarch64/aarch64-modes.def:36 */
  CImode,                  /* config/aarch64/aarch64-modes.def:41 */
  XImode,                  /* config/aarch64/aarch64-modes.def:42 */
  QQmode,                  /* machmode.def:210 */
  HQmode,                  /* machmode.def:211 */
  SQmode,                  /* machmode.def:212 */
  DQmode,                  /* machmode.def:213 */
  TQmode,                  /* machmode.def:214 */
  UQQmode,                 /* machmode.def:216 */
  UHQmode,                 /* machmode.def:217 */
  USQmode,                 /* machmode.def:218 */
  UDQmode,                 /* machmode.def:219 */
  UTQmode,                 /* machmode.def:220 */
  HAmode,                  /* machmode.def:222 */
  SAmode,                  /* machmode.def:223 */
  DAmode,                  /* machmode.def:224 */
  TAmode,                  /* machmode.def:225 */
  UHAmode,                 /* machmode.def:227 */
  USAmode,                 /* machmode.def:228 */
  UDAmode,                 /* machmode.def:229 */
  UTAmode,                 /* machmode.def:230 */
  SFmode,                  /* machmode.def:202 */
  DFmode,                  /* machmode.def:203 */
  TFmode,                  /* config/aarch64/aarch64-modes.def:55 */
  SDmode,                  /* machmode.def:242 */
  DDmode,                  /* machmode.def:243 */
  TDmode,                  /* machmode.def:244 */
  CQImode,                 /* machmode.def:238 */
  CHImode,                 /* machmode.def:238 */
  CSImode,                 /* machmode.def:238 */
  CDImode,                 /* machmode.def:238 */
  CTImode,                 /* machmode.def:238 */
  CEImode,                 /* machmode.def:238 */
  COImode,                 /* machmode.def:238 */
  CCImode,                 /* machmode.def:238 */
  CXImode,                 /* machmode.def:238 */
  SCmode,                  /* machmode.def:239 */
  DCmode,                  /* machmode.def:239 */
  TCmode,                  /* machmode.def:239 */
  V8QImode,                /* config/aarch64/aarch64-modes.def:30 */
  V4HImode,                /* config/aarch64/aarch64-modes.def:30 */
  V2SImode,                /* config/aarch64/aarch64-modes.def:30 */
  V16QImode,               /* config/aarch64/aarch64-modes.def:31 */
  V8HImode,                /* config/aarch64/aarch64-modes.def:31 */
  V4SImode,                /* config/aarch64/aarch64-modes.def:31 */
  V2DImode,                /* config/aarch64/aarch64-modes.def:31 */
  V32QImode,               /* config/aarch64/aarch64-modes.def:45 */
  V16HImode,               /* config/aarch64/aarch64-modes.def:45 */
  V8SImode,                /* config/aarch64/aarch64-modes.def:45 */
  V4DImode,                /* config/aarch64/aarch64-modes.def:45 */
  V2TImode,                /* config/aarch64/aarch64-modes.def:45 */
  V48QImode,               /* config/aarch64/aarch64-modes.def:48 */
  V24HImode,               /* config/aarch64/aarch64-modes.def:48 */
  V12SImode,               /* config/aarch64/aarch64-modes.def:48 */
  V6DImode,                /* config/aarch64/aarch64-modes.def:48 */
  V3TImode,                /* config/aarch64/aarch64-modes.def:48 */
  V2EImode,                /* config/aarch64/aarch64-modes.def:48 */
  V64QImode,               /* config/aarch64/aarch64-modes.def:51 */
  V32HImode,               /* config/aarch64/aarch64-modes.def:51 */
  V16SImode,               /* config/aarch64/aarch64-modes.def:51 */
  V8DImode,                /* config/aarch64/aarch64-modes.def:51 */
  V4TImode,                /* config/aarch64/aarch64-modes.def:51 */
  V2OImode,                /* config/aarch64/aarch64-modes.def:51 */
  V2SFmode,                /* config/aarch64/aarch64-modes.def:32 */
  V4SFmode,                /* config/aarch64/aarch64-modes.def:33 */
  V2DFmode,                /* config/aarch64/aarch64-modes.def:33 */
  V8SFmode,                /* config/aarch64/aarch64-modes.def:46 */
  V4DFmode,                /* config/aarch64/aarch64-modes.def:46 */
  V12SFmode,               /* config/aarch64/aarch64-modes.def:49 */
  V6DFmode,                /* config/aarch64/aarch64-modes.def:49 */
  V16SFmode,               /* config/aarch64/aarch64-modes.def:52 */
  V8DFmode,                /* config/aarch64/aarch64-modes.def:52 */
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = VOIDmode,
  MAX_MODE_RANDOM = BLKmode,

  MIN_MODE_CC = CCmode,
  MAX_MODE_CC = CC_Zmode,

  MIN_MODE_INT = QImode,
  MAX_MODE_INT = XImode,

  MIN_MODE_PARTIAL_INT = VOIDmode,
  MAX_MODE_PARTIAL_INT = VOIDmode,

  MIN_MODE_FRACT = QQmode,
  MAX_MODE_FRACT = TQmode,

  MIN_MODE_UFRACT = UQQmode,
  MAX_MODE_UFRACT = UTQmode,

  MIN_MODE_ACCUM = HAmode,
  MAX_MODE_ACCUM = TAmode,

  MIN_MODE_UACCUM = UHAmode,
  MAX_MODE_UACCUM = UTAmode,

  MIN_MODE_FLOAT = SFmode,
  MAX_MODE_FLOAT = TFmode,

  MIN_MODE_DECIMAL_FLOAT = SDmode,
  MAX_MODE_DECIMAL_FLOAT = TDmode,

  MIN_MODE_COMPLEX_INT = CQImode,
  MAX_MODE_COMPLEX_INT = CXImode,

  MIN_MODE_COMPLEX_FLOAT = SCmode,
  MAX_MODE_COMPLEX_FLOAT = TCmode,

  MIN_MODE_VECTOR_INT = V8QImode,
  MAX_MODE_VECTOR_INT = V2OImode,

  MIN_MODE_VECTOR_FRACT = VOIDmode,
  MAX_MODE_VECTOR_FRACT = VOIDmode,

  MIN_MODE_VECTOR_UFRACT = VOIDmode,
  MAX_MODE_VECTOR_UFRACT = VOIDmode,

  MIN_MODE_VECTOR_ACCUM = VOIDmode,
  MAX_MODE_VECTOR_ACCUM = VOIDmode,

  MIN_MODE_VECTOR_UACCUM = VOIDmode,
  MAX_MODE_VECTOR_UACCUM = VOIDmode,

  MIN_MODE_VECTOR_FLOAT = V2SFmode,
  MAX_MODE_VECTOR_FLOAT = V8DFmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define CONST_MODE_SIZE const
#define CONST_MODE_BASE_ALIGN const
#define CONST_MODE_IBIT const
#define CONST_MODE_FBIT const

#define BITS_PER_UNIT (8)
#define MAX_BITSIZE_MODE_ANY_INT (64*BITS_PER_UNIT)
#define MAX_BITSIZE_MODE_ANY_MODE (128*BITS_PER_UNIT)

#endif /* insn-modes.h */
