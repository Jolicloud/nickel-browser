/* Automatically generated.  Do not edit */
/* See the mkopcodeh.awk script for details */
#define OP_NotExists                            1
#define OP_SeekLe                               2
#define OP_IncrVacuum                           3
#define OP_Multiply                            86   /* same as TK_STAR     */
#define OP_VCreate                              4
#define OP_BitAnd                              80   /* same as TK_BITAND   */
#define OP_ResultRow                            5
#define OP_DropTrigger                          6
#define OP_OpenPseudo                           7
#define OP_Affinity                             8
#define OP_IntegrityCk                          9
#define OP_RowKey                              10
#define OP_LoadAnalysis                        11
#define OP_Last                                12
#define OP_Subtract                            85   /* same as TK_MINUS    */
#define OP_Remainder                           88   /* same as TK_REM      */
#define OP_SetCookie                           13
#define OP_Sequence                            14
#define OP_VRename                             15
#define OP_SeekLt                              16
#define OP_SCopy                               17
#define OP_VUpdate                             18
#define OP_VColumn                             20
#define OP_DropTable                           21
#define OP_NotNull                             72   /* same as TK_NOTNULL  */
#define OP_Rowid                               22
#define OP_Real                               130   /* same as TK_FLOAT    */
#define OP_String8                             94   /* same as TK_STRING   */
#define OP_And                                 67   /* same as TK_AND      */
#define OP_BitNot                              93   /* same as TK_BITNOT   */
#define OP_VFilter                             23
#define OP_NullRow                             24
#define OP_HaltIfNull                          25
#define OP_Noop                                26
#define OP_RowSetRead                          27
#define OP_Ge                                  78   /* same as TK_GE       */
#define OP_RowSetAdd                           28
#define OP_ParseSchema                         29
#define OP_CollSeq                             30
#define OP_ToText                             141   /* same as TK_TO_TEXT  */
#define OP_Eq                                  74   /* same as TK_EQ       */
#define OP_RowSetTest                          31
#define OP_ToNumeric                          143   /* same as TK_TO_NUMERIC*/
#define OP_If                                  32
#define OP_IfNot                               33
#define OP_ShiftRight                          83   /* same as TK_RSHIFT   */
#define OP_Destroy                             34
#define OP_Program                             35
#define OP_Permutation                         36
#define OP_CreateIndex                         37
#define OP_Not                                 19   /* same as TK_NOT      */
#define OP_Gt                                  75   /* same as TK_GT       */
#define OP_ResetCount                          38
#define OP_Goto                                39
#define OP_IdxDelete                           40
#define OP_Found                               41
#define OP_SeekGe                              42
#define OP_Jump                                43
#define OP_Pagecount                           44
#define OP_MustBeInt                           45
#define OP_Prev                                46
#define OP_AutoCommit                          47
#define OP_String                              48
#define OP_ToInt                              144   /* same as TK_TO_INT   */
#define OP_Return                              49
#define OP_Copy                                50
#define OP_AddImm                              51
#define OP_Function                            52
#define OP_Trace                               53
#define OP_Seek                                54
#define OP_Concat                              89   /* same as TK_CONCAT   */
#define OP_NewRowid                            55
#define OP_SeekGt                              56
#define OP_Blob                                57
#define OP_IsNull                              71   /* same as TK_ISNULL   */
#define OP_Next                                58
#define OP_ReadCookie                          59
#define OP_Halt                                60
#define OP_Expire                              61
#define OP_Or                                  66   /* same as TK_OR       */
#define OP_DropIndex                           62
#define OP_IdxInsert                           63
#define OP_Savepoint                           64
#define OP_ShiftLeft                           82   /* same as TK_LSHIFT   */
#define OP_Column                              65
#define OP_Int64                               68
#define OP_Gosub                               69
#define OP_RowData                             70
#define OP_Move                                79
#define OP_BitOr                               81   /* same as TK_BITOR    */
#define OP_MemMax                              90
#define OP_Close                               91
#define OP_ToReal                             145   /* same as TK_TO_REAL  */
#define OP_VerifyCookie                        92
#define OP_Null                                95
#define OP_Integer                             96
#define OP_Transaction                         97
#define OP_Divide                              87   /* same as TK_SLASH    */
#define OP_IdxLT                               98
#define OP_Delete                              99
#define OP_IfZero                             100
#define OP_Rewind                             101
#define OP_RealAffinity                       102
#define OP_Clear                              103
#define OP_Explain                            104
#define OP_AggStep                            105
#define OP_Vacuum                             106
#define OP_VDestroy                           107
#define OP_IsUnique                           108
#define OP_Count                              109
#define OP_VOpen                              110
#define OP_Yield                              111
#define OP_AggFinal                           112
#define OP_OpenWrite                          113
#define OP_Param                              114
#define OP_Le                                  76   /* same as TK_LE       */
#define OP_VNext                              115
#define OP_Sort                               116
#define OP_NotFound                           117
#define OP_MakeRecord                         118
#define OP_Add                                 84   /* same as TK_PLUS     */
#define OP_IfNeg                              119
#define OP_Ne                                  73   /* same as TK_NE       */
#define OP_Variable                           120
#define OP_CreateTable                        121
#define OP_Insert                             122
#define OP_Compare                            123
#define OP_IdxGE                              124
#define OP_OpenRead                           125
#define OP_IdxRowid                           126
#define OP_ToBlob                             142   /* same as TK_TO_BLOB  */
#define OP_VBegin                             127
#define OP_TableLock                          128
#define OP_IfPos                              129
#define OP_OpenEphemeral                      131
#define OP_Lt                                  77   /* same as TK_LT       */

/* The following opcode values are never used */
#define OP_NotUsed_132                        132
#define OP_NotUsed_133                        133
#define OP_NotUsed_134                        134
#define OP_NotUsed_135                        135
#define OP_NotUsed_136                        136
#define OP_NotUsed_137                        137
#define OP_NotUsed_138                        138
#define OP_NotUsed_139                        139
#define OP_NotUsed_140                        140


/* Properties such as "out2" or "jump" that are specified in
** comments following the "case" for each opcode in the vdbe.c
** are encoded into bitvectors as follows:
*/
#define OPFLG_JUMP            0x0001  /* jump:  P2 holds jmp target */
#define OPFLG_OUT2_PRERELEASE 0x0002  /* out2-prerelease: */
#define OPFLG_IN1             0x0004  /* in1:   P1 is an input */
#define OPFLG_IN2             0x0008  /* in2:   P2 is an input */
#define OPFLG_IN3             0x0010  /* in3:   P3 is an input */
#define OPFLG_OUT3            0x0020  /* out3:  P3 is an output */
#define OPFLG_INITIALIZER {\
/*   0 */ 0x00, 0x11, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00,\
/*   8 */ 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x02, 0x00,\
/*  16 */ 0x11, 0x04, 0x00, 0x04, 0x00, 0x00, 0x02, 0x01,\
/*  24 */ 0x00, 0x10, 0x00, 0x21, 0x08, 0x00, 0x00, 0x15,\
/*  32 */ 0x05, 0x05, 0x02, 0x01, 0x00, 0x02, 0x00, 0x01,\
/*  40 */ 0x00, 0x11, 0x11, 0x01, 0x02, 0x05, 0x01, 0x00,\
/*  48 */ 0x02, 0x04, 0x04, 0x04, 0x00, 0x00, 0x08, 0x02,\
/*  56 */ 0x11, 0x02, 0x01, 0x02, 0x00, 0x00, 0x00, 0x08,\
/*  64 */ 0x00, 0x00, 0x2c, 0x2c, 0x02, 0x01, 0x00, 0x05,\
/*  72 */ 0x05, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x00,\
/*  80 */ 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c,\
/*  88 */ 0x2c, 0x2c, 0x08, 0x00, 0x00, 0x04, 0x02, 0x02,\
/*  96 */ 0x02, 0x00, 0x11, 0x00, 0x05, 0x01, 0x04, 0x00,\
/* 104 */ 0x00, 0x00, 0x00, 0x00, 0x11, 0x02, 0x00, 0x04,\
/* 112 */ 0x00, 0x00, 0x02, 0x01, 0x01, 0x11, 0x00, 0x05,\
/* 120 */ 0x00, 0x02, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00,\
/* 128 */ 0x00, 0x05, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,\
/* 136 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04,\
/* 144 */ 0x04, 0x04,}
