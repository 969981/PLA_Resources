/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a860fc; name: FUN_01a860fc
 */


/* WARNING: Removing unreachable block (ram,0x01a86500) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a860fc(long param_1,undefined1 (*param_2) [16])

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  undefined2 uVar14;
  unkbyte9 Var15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined4 uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  byte bVar27;
  byte bVar46;
  byte bVar47;
  float fVar28;
  int iVar29;
  float fVar30;
  int iVar31;
  undefined4 uVar32;
  undefined8 extraout_d0;
  undefined1 auVar33 [12];
  byte bVar48;
  byte bVar49;
  byte bVar53;
  byte bVar54;
  float fVar50;
  int iVar51;
  byte bVar55;
  byte bVar56;
  byte bVar60;
  byte bVar61;
  float fVar57;
  int iVar58;
  byte bVar62;
  byte bVar63;
  byte bVar68;
  byte bVar69;
  float fVar64;
  int iVar65;
  byte bVar70;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  int iVar52;
  int iVar59;
  int iVar66;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar36 [12];
  int iVar67;
  undefined1 auVar43 [16];
  undefined8 extraout_var;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar71;
  float fVar79;
  undefined8 uVar72;
  float fVar80;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar81;
  float fVar82;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined2 uVar83;
  undefined8 uVar84;
  float fVar95;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar94;
  float fVar96;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined8 uVar85;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar97;
  undefined8 uVar98;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar113;
  undefined8 uVar99;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined8 uVar100;
  float fVar114;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar115;
  undefined1 uVar116;
  undefined1 uVar117;
  undefined1 uVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined8 uVar125;
  long lVar126;
  byte local_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  byte bStack_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  long *local_68;
  undefined8 uStack_60;
  long *local_58;
  long local_48;
  
  local_68 = (long *)0x0;
  uStack_60 = 0;
  FUN_01a2bf84(&local_68,param_1 + 0x5c8);
  FUN_009c685c(&local_58,&local_68);
  plVar20 = local_68;
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 1;
    do {
      iVar29 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 == 0) {
      local_68[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_48 = *plVar20;
      FUN_02a44274(lVar25 + 0xd8,&local_48);
    }
  }
  if (local_58 == (long *)0x0) {
    if (*(long *)(param_1 + 0x628) == 0) {
      local_68 = (long *)0x0;
LAB_01a86644:
      *(undefined4 *)(param_1 + 0x8e0) = 0;
      *(undefined4 *)(param_1 + 0x8e8) = 0;
    }
    else {
      FUN_009b8474(&local_68);
      if (local_68 == (long *)0x0) goto LAB_01a86644;
      FUN_018281e0();
      if (local_68 != (long *)0x0) {
        lVar25 = local_68[0xb];
        piVar2 = (int *)(lVar25 + 0xc);
        do {
          iVar29 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
    auVar87 = *param_2;
    cVar3 = *(char *)(param_1 + 0xa30);
    *(undefined8 *)(param_1 + 0xa50) = 0x3f088889;
    *(long *)(param_1 + 0xa48) = auVar87._8_8_;
    *(long *)(param_1 + 0xa40) = auVar87._0_8_;
  }
  else {
    fVar28 = *(float *)*param_2;
    fVar50 = *(float *)(*param_2 + 4);
    fVar57 = *(float *)(*param_2 + 8);
    fVar64 = *(float *)(*param_2 + 0xc);
    auVar87._0_4_ = fVar28 * fVar28;
    auVar87._4_4_ = fVar50 * fVar50;
    auVar87._8_4_ = fVar57 * fVar57;
    auVar87._12_4_ = fVar64 * fVar64;
    auVar86 = NEON_ext(auVar87,auVar87,8,1);
    fVar71 = auVar86._0_4_ + auVar87._0_4_;
    fVar79 = auVar86._4_4_ + auVar87._4_4_;
    fVar26 = fVar71 + fVar79;
    fVar71 = fVar71 + fVar79;
    auVar86._8_8_ = CONCAT44(fVar71,fVar26);
    auVar86._0_8_ = CONCAT44(fVar71,fVar26);
    auVar87 = NEON_frsqrte(auVar86,4);
    auVar101._0_4_ = auVar87._0_4_ * fVar26;
    auVar101._4_4_ = auVar87._4_4_ * fVar71;
    auVar101._8_4_ = auVar87._8_4_ * fVar26;
    auVar101._12_4_ = auVar87._12_4_ * fVar71;
    auVar86 = NEON_frsqrts(auVar87,auVar101,4);
    auVar88._0_4_ = auVar87._0_4_ * auVar86._0_4_;
    auVar88._4_4_ = auVar87._4_4_ * auVar86._4_4_;
    auVar88._8_4_ = auVar87._8_4_ * auVar86._8_4_;
    auVar88._12_4_ = auVar87._12_4_ * auVar86._12_4_;
    auVar102._0_4_ = fVar26 * auVar88._0_4_;
    auVar102._4_4_ = fVar71 * auVar88._4_4_;
    auVar102._8_4_ = fVar26 * auVar88._8_4_;
    auVar102._12_4_ = fVar71 * auVar88._12_4_;
    auVar87 = NEON_frsqrts(auVar88,auVar102,4);
    fVar28 = fVar28 * auVar88._0_4_ * auVar87._0_4_;
    fVar50 = fVar50 * auVar88._4_4_ * auVar87._4_4_;
    fVar57 = fVar57 * auVar88._8_4_ * auVar87._8_4_;
    fVar64 = fVar64 * auVar88._12_4_ * auVar87._12_4_;
    bStack_78 = SUB41(fVar57,0);
    bStack_77 = (byte)((uint)fVar57 >> 8);
    bStack_76 = (byte)((uint)fVar57 >> 0x10);
    bStack_75 = (byte)((uint)fVar57 >> 0x18);
    bStack_74 = SUB41(fVar64,0);
    bStack_73 = (byte)((uint)fVar64 >> 8);
    bStack_72 = (byte)((uint)fVar64 >> 0x10);
    bStack_71 = (byte)((uint)fVar64 >> 0x18);
    local_80 = SUB41(fVar28,0);
    bStack_7f = (byte)((uint)fVar28 >> 8);
    bStack_7e = (byte)((uint)fVar28 >> 0x10);
    bStack_7d = (byte)((uint)fVar28 >> 0x18);
    bStack_7c = SUB41(fVar50,0);
    bStack_7b = (byte)((uint)fVar50 >> 8);
    bStack_7a = (byte)((uint)fVar50 >> 0x10);
    bStack_79 = (byte)((uint)fVar50 >> 0x18);
    iVar29 = -(uint)(fVar26 == 0.0);
    iVar51 = -(uint)(fVar71 == 0.0);
    iVar58 = -(uint)(fVar26 == 0.0);
    iVar65 = -(uint)(fVar71 == 0.0);
    FUN_009c69bc(&local_68,param_1);
    lVar126 = local_68[0x19];
    lVar25 = local_68[0x18];
    if (local_68 != (long *)0x0) {
      lVar24 = local_68[0xb];
      piVar2 = (int *)(lVar24 + 0xc);
      do {
        iVar31 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar31 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar31 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    uVar19 = DAT_0388a880;
    uVar85 = DAT_0388a6f0;
    uVar18 = DAT_0388a6d8;
    uVar125 = DAT_0388a680;
    uVar100 = DAT_0388a5e0;
    bVar27 = (byte)_DAT_038897c0;
    bVar46 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar47 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar48 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    fVar26 = (float)CONCAT13((byte)((ulong)lVar25 >> 0x18) & bVar48,
                             CONCAT12((byte)((ulong)lVar25 >> 0x10) & bVar47,
                                      CONCAT11((byte)((ulong)lVar25 >> 8) & bVar46,
                                               (byte)lVar25 & bVar27)));
    bVar49 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar53 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar54 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar55 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    auVar33._0_8_ =
         CONCAT17((byte)((ulong)lVar25 >> 0x38) & bVar55,
                  CONCAT16((byte)((ulong)lVar25 >> 0x30) & bVar54,
                           CONCAT15((byte)((ulong)lVar25 >> 0x28) & bVar53,
                                    CONCAT14((byte)((ulong)lVar25 >> 0x20) & bVar49,fVar26))));
    bVar56 = (byte)_UNK_038897c8;
    auVar33[8] = (byte)lVar126 & bVar56;
    bVar60 = (byte)((ulong)_UNK_038897c8 >> 8);
    auVar33[9] = (byte)((ulong)lVar126 >> 8) & bVar60;
    bVar61 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar33[10] = (byte)((ulong)lVar126 >> 0x10) & bVar61;
    bVar62 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar33[0xb] = (byte)((ulong)lVar126 >> 0x18) & bVar62;
    bVar63 = (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar37[0xc] = (byte)((ulong)lVar126 >> 0x20) & bVar63;
    auVar37._0_12_ = auVar33;
    bVar68 = (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar37[0xd] = (byte)((ulong)lVar126 >> 0x28) & bVar68;
    bVar69 = (byte)((ulong)_UNK_038897c8 >> 0x30);
    bVar70 = (byte)((ulong)_UNK_038897c8 >> 0x38);
    auVar37[0xe] = (byte)((ulong)lVar126 >> 0x30) & bVar69;
    auVar37[0xf] = (byte)((ulong)lVar126 >> 0x38) & bVar70;
    uVar72 = NEON_ext(auVar33._0_8_,auVar33._0_8_,4,1);
    uVar84 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a6f0);
    uVar98 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a5e0);
    uVar99 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a6d8);
    fVar71 = (float)uVar72 * (float)uVar72;
    fVar79 = (float)((ulong)uVar72 >> 0x20);
    fVar79 = fVar79 * fVar79;
    fVar30 = (float)uVar84;
    fVar80 = (float)((ulong)uVar84 >> 0x20);
    fVar97 = (float)uVar98 * (float)uVar98;
    fVar113 = (float)((ulong)uVar98 >> 0x20);
    fVar113 = fVar113 * fVar113;
    fVar81 = (float)uVar99;
    fVar82 = (float)((ulong)uVar99 >> 0x20);
    uVar99 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a880);
    fVar26 = (float)uVar99 * fVar26;
    fVar94 = (float)((ulong)uVar99 >> 0x20) * (float)((ulong)auVar33._0_8_ >> 0x20);
    fVar95 = fVar30 * auVar33._8_4_;
    fVar96 = fVar80 * auVar37._12_4_;
    uVar99 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a680);
    fVar26 = fVar26 + fVar26;
    fVar94 = fVar94 + fVar94;
    fVar95 = fVar95 + fVar95;
    fVar96 = fVar96 + fVar96;
    fVar28 = (float)((ulong)lVar126 >> 0x20);
    fVar50 = (float)uVar99 * fVar28;
    fVar57 = (float)((ulong)uVar99 >> 0x20) * fVar28;
    fVar50 = fVar50 + fVar50;
    fVar57 = fVar57 + fVar57;
    fVar64 = fVar81 * fVar28 + fVar81 * fVar28;
    fVar28 = fVar82 * fVar28 + fVar82 * fVar28;
    auVar103._0_4_ = fVar26 + fVar50;
    auVar103._4_4_ = fVar94 + fVar57;
    auVar103._8_4_ = fVar95 + fVar64;
    auVar103._12_4_ = fVar96 + fVar28;
    fVar26 = fVar26 - fVar50;
    fVar94 = fVar94 - fVar57;
    fVar95 = fVar95 - fVar64;
    fVar96 = fVar96 - fVar28;
    fVar28 = (float)_DAT_03888fc0;
    auVar38._0_4_ = fVar28 - (fVar71 + fVar71 + fVar97 + fVar97);
    fVar50 = (float)((ulong)_DAT_03888fc0 >> 0x20);
    auVar38._4_4_ = fVar50 - (fVar79 + fVar79 + fVar113 + fVar113);
    fVar57 = (float)_UNK_03888fc8;
    fVar64 = (float)((ulong)_UNK_03888fc8 >> 0x20);
    auVar38._8_4_ = fVar57 - (fVar30 * fVar30 + fVar30 * fVar30 + fVar81 * fVar81 + fVar81 * fVar81)
    ;
    auVar38._12_4_ =
         fVar64 - (fVar80 * fVar80 + fVar80 * fVar80 + fVar82 * fVar82 + fVar82 * fVar82);
    auVar5._4_4_ = fVar94;
    auVar5._0_4_ = fVar26;
    auVar5._8_4_ = fVar95;
    auVar5._12_4_ = fVar96;
    auVar73._0_8_ = a64_TBL(ZEXT816(0),auVar103,auVar5,DAT_0388a758);
    auVar6._4_4_ = fVar94;
    auVar6._0_4_ = fVar26;
    auVar6._8_4_ = fVar95;
    auVar6._12_4_ = fVar96;
    uVar99 = a64_TBL(ZEXT816(0),auVar103,auVar6,DAT_0388a720);
    auVar73._8_8_ = uVar99;
    uVar72 = a64_TBL(ZEXT816(0),auVar38,auVar73,DAT_0388a668);
    uVar99 = a64_TBL(ZEXT816(0),auVar38,auVar73,DAT_0388a5a8);
    fVar95 = (float)uVar72;
    fVar26 = (float)((ulong)uVar72 >> 0x20);
    fVar80 = (float)uVar99;
    fVar71 = (float)((ulong)uVar99 >> 0x20);
    fVar30 = fVar80 * fVar80 + fVar95 * fVar95;
    fVar94 = fVar71 * fVar71 + fVar26 * fVar26;
    fVar79 = fVar30 + fVar94;
    fVar30 = fVar30 + fVar94;
    auVar39._8_8_ = CONCAT44(fVar30,fVar79);
    auVar39._0_8_ = CONCAT44(fVar30,fVar79);
    auVar87 = NEON_frsqrte(auVar39,4);
    auVar104._0_4_ = auVar87._0_4_ * fVar79;
    auVar104._4_4_ = auVar87._4_4_ * fVar30;
    auVar104._8_4_ = auVar87._8_4_ * fVar79;
    auVar104._12_4_ = auVar87._12_4_ * fVar30;
    auVar86 = NEON_frsqrts(auVar87,auVar104,4);
    auVar89._0_4_ = auVar87._0_4_ * auVar86._0_4_;
    auVar89._4_4_ = auVar87._4_4_ * auVar86._4_4_;
    auVar89._8_4_ = auVar87._8_4_ * auVar86._8_4_;
    auVar89._12_4_ = auVar87._12_4_ * auVar86._12_4_;
    auVar105._0_4_ = fVar79 * auVar89._0_4_;
    auVar105._4_4_ = fVar30 * auVar89._4_4_;
    auVar105._8_4_ = fVar79 * auVar89._8_4_;
    auVar105._12_4_ = fVar30 * auVar89._12_4_;
    iVar31 = -(uint)(fVar79 == 0.0);
    iVar52 = -(uint)(fVar30 == 0.0);
    iVar59 = -(uint)(fVar79 == 0.0);
    iVar66 = -(uint)(fVar30 == 0.0);
    auVar87 = NEON_frsqrts(auVar89,auVar105,4);
    fVar95 = fVar95 * auVar89._0_4_ * auVar87._0_4_;
    fVar26 = fVar26 * auVar89._4_4_ * auVar87._4_4_;
    fVar80 = fVar80 * auVar89._8_4_ * auVar87._8_4_;
    fVar71 = fVar71 * auVar89._12_4_ * auVar87._12_4_;
    fVar79 = (float)CONCAT13((byte)((uint)fVar95 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                             CONCAT12((byte)((uint)fVar95 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                                      CONCAT11((byte)((uint)fVar95 >> 8) &
                                               ~(byte)((uint)iVar31 >> 8),
                                               SUB41(fVar95,0) & ~(byte)iVar31)));
    auVar34._0_8_ =
         CONCAT17((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                  CONCAT16((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10),
                           CONCAT15((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar52 >> 8),
                                    CONCAT14(SUB41(fVar26,0) & ~(byte)iVar52,fVar79))));
    auVar34[8] = SUB41(fVar80,0) & ~(byte)iVar59;
    auVar34[9] = (byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar59 >> 8);
    auVar34[10] = (byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    auVar34[0xb] = (byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    auVar40[0xc] = SUB41(fVar71,0) & ~(byte)iVar66;
    auVar40._0_12_ = auVar34;
    auVar40[0xd] = (byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar66 >> 8);
    auVar40[0xe] = (byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
    auVar40[0xf] = (byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
    auVar74._0_4_ = fVar79 * fVar79;
    fVar30 = (float)((ulong)auVar34._0_8_ >> 0x20);
    auVar74._4_4_ = fVar30 * fVar30;
    fVar80 = auVar34._8_4_;
    auVar74._8_4_ = fVar80 * fVar80;
    fVar94 = auVar40._12_4_;
    auVar74._12_4_ = fVar94 * fVar94;
    auVar87 = NEON_ext(auVar74,auVar74,8,1);
    fVar71 = auVar87._0_4_ + auVar74._0_4_;
    fVar95 = auVar87._4_4_ + auVar74._4_4_;
    fVar26 = fVar71 + fVar95;
    fVar71 = fVar71 + fVar95;
    auVar75._8_8_ = CONCAT44(fVar71,fVar26);
    auVar75._0_8_ = CONCAT44(fVar71,fVar26);
    auVar87 = NEON_frsqrte(auVar75,4);
    auVar106._0_4_ = auVar87._0_4_ * fVar26;
    auVar106._4_4_ = auVar87._4_4_ * fVar71;
    auVar106._8_4_ = auVar87._8_4_ * fVar26;
    auVar106._12_4_ = auVar87._12_4_ * fVar71;
    auVar86 = NEON_frsqrts(auVar87,auVar106,4);
    auVar90._0_4_ = auVar87._0_4_ * auVar86._0_4_;
    auVar90._4_4_ = auVar87._4_4_ * auVar86._4_4_;
    auVar90._8_4_ = auVar87._8_4_ * auVar86._8_4_;
    auVar90._12_4_ = auVar87._12_4_ * auVar86._12_4_;
    auVar107._0_4_ = fVar26 * auVar90._0_4_;
    auVar107._4_4_ = fVar71 * auVar90._4_4_;
    auVar107._8_4_ = fVar26 * auVar90._8_4_;
    auVar107._12_4_ = fVar71 * auVar90._12_4_;
    iVar31 = -(uint)(fVar26 == 0.0);
    iVar52 = -(uint)(fVar71 == 0.0);
    iVar59 = -(uint)(fVar26 == 0.0);
    iVar66 = -(uint)(fVar71 == 0.0);
    auVar87 = NEON_frsqrts(auVar90,auVar107,4);
    fVar79 = fVar79 * auVar90._0_4_ * auVar87._0_4_;
    fVar30 = fVar30 * auVar90._4_4_ * auVar87._4_4_;
    fVar80 = fVar80 * auVar90._8_4_ * auVar87._8_4_;
    fVar94 = fVar94 * auVar90._12_4_ * auVar87._12_4_;
    uVar83 = CONCAT11(bStack_7f & ~(byte)((uint)iVar29 >> 8),local_80 & ~(byte)iVar29);
    bStack_7e = bStack_7e & ~(byte)((uint)iVar29 >> 0x10);
    bStack_7d = bStack_7d & ~(byte)((uint)iVar29 >> 0x18);
    uVar16 = CONCAT11(bStack_7b & ~(byte)((uint)iVar51 >> 8),bStack_7c & ~(byte)iVar51);
    bStack_7a = bStack_7a & ~(byte)((uint)iVar51 >> 0x10);
    bStack_79 = bStack_79 & ~(byte)((uint)iVar51 >> 0x18);
    bStack_76 = bStack_76 & ~(byte)((uint)iVar58 >> 0x10);
    bStack_75 = bStack_75 & ~(byte)((uint)iVar58 >> 0x18);
    uVar17 = CONCAT11(bStack_73 & ~(byte)((uint)iVar65 >> 8),bStack_74 & ~(byte)iVar65);
    bStack_72 = bStack_72 & ~(byte)((uint)iVar65 >> 0x10);
    bStack_71 = bStack_71 & ~(byte)((uint)iVar65 >> 0x18);
    FUN_009c69bc(&local_68,param_1);
    lVar126 = local_68[0x19];
    lVar25 = local_68[0x18];
    if (local_68 != (long *)0x0) {
      lVar24 = local_68[0xb];
      piVar2 = (int *)(lVar24 + 0xc);
      do {
        iVar29 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    fVar26 = (float)CONCAT13((byte)((ulong)lVar25 >> 0x18) & bVar48,
                             CONCAT12((byte)((ulong)lVar25 >> 0x10) & bVar47,
                                      CONCAT11((byte)((ulong)lVar25 >> 8) & bVar46,
                                               (byte)lVar25 & bVar27)));
    auVar35._0_8_ =
         CONCAT17((byte)((ulong)lVar25 >> 0x38) & bVar55,
                  CONCAT16((byte)((ulong)lVar25 >> 0x30) & bVar54,
                           CONCAT15((byte)((ulong)lVar25 >> 0x28) & bVar53,
                                    CONCAT14((byte)((ulong)lVar25 >> 0x20) & bVar49,fVar26))));
    auVar35[8] = (byte)lVar126 & bVar56;
    auVar35[9] = (byte)((ulong)lVar126 >> 8) & bVar60;
    auVar35[10] = (byte)((ulong)lVar126 >> 0x10) & bVar61;
    auVar35[0xb] = (byte)((ulong)lVar126 >> 0x18) & bVar62;
    auVar41[0xc] = (byte)((ulong)lVar126 >> 0x20) & bVar63;
    auVar41._0_12_ = auVar35;
    auVar41[0xd] = (byte)((ulong)lVar126 >> 0x28) & bVar68;
    auVar41[0xe] = (byte)((ulong)lVar126 >> 0x30) & bVar69;
    auVar41[0xf] = (byte)((ulong)lVar126 >> 0x38) & bVar70;
    uVar72 = NEON_ext(auVar35._0_8_,auVar35._0_8_,4,1);
    uVar85 = a64_TBL(ZEXT816(0),auVar41,uVar85);
    uVar100 = a64_TBL(ZEXT816(0),auVar41,uVar100);
    uVar99 = a64_TBL(ZEXT816(0),auVar41,uVar18);
    fVar115 = (float)uVar99;
    fVar71 = (float)uVar72 * (float)uVar72;
    fVar95 = (float)((ulong)uVar72 >> 0x20);
    fVar95 = fVar95 * fVar95;
    fVar81 = (float)uVar85;
    fVar82 = (float)((ulong)uVar85 >> 0x20);
    fVar96 = (float)uVar100 * (float)uVar100;
    fVar97 = (float)((ulong)uVar100 >> 0x20);
    fVar97 = fVar97 * fVar97;
    fVar114 = (float)((ulong)uVar99 >> 0x20);
    fVar28 = fVar28 - (fVar71 + fVar71 + fVar96 + fVar96);
    fVar50 = fVar50 - (fVar95 + fVar95 + fVar97 + fVar97);
    uVar116 = (undefined1)((uint)fVar50 >> 8);
    uVar117 = (undefined1)((uint)fVar50 >> 0x10);
    uVar118 = (undefined1)((uint)fVar50 >> 0x18);
    fVar57 = fVar57 - (fVar81 * fVar81 + fVar81 * fVar81 + fVar115 * fVar115 + fVar115 * fVar115);
    uVar119 = (undefined1)((uint)fVar57 >> 8);
    uVar120 = (undefined1)((uint)fVar57 >> 0x10);
    uVar121 = (undefined1)((uint)fVar57 >> 0x18);
    fVar64 = fVar64 - (fVar82 * fVar82 + fVar82 * fVar82 + fVar114 * fVar114 + fVar114 * fVar114);
    uVar122 = (undefined1)((uint)fVar64 >> 8);
    uVar123 = (undefined1)((uint)fVar64 >> 0x10);
    uVar124 = (undefined1)((uint)fVar64 >> 0x18);
    uVar99 = a64_TBL(ZEXT816(0),auVar41,uVar19);
    fVar26 = (float)uVar99 * fVar26;
    fVar113 = (float)((ulong)uVar99 >> 0x20) * (float)((ulong)auVar35._0_8_ >> 0x20);
    fVar81 = fVar81 * auVar35._8_4_;
    fVar82 = fVar82 * auVar41._12_4_;
    uVar99 = a64_TBL(ZEXT816(0),auVar41,uVar125);
    fVar26 = fVar26 + fVar26;
    fVar113 = fVar113 + fVar113;
    fVar81 = fVar81 + fVar81;
    fVar82 = fVar82 + fVar82;
    fVar97 = (float)((ulong)lVar126 >> 0x20);
    fVar71 = (float)uVar99 * fVar97;
    fVar95 = (float)((ulong)uVar99 >> 0x20) * fVar97;
    fVar71 = fVar71 + fVar71;
    fVar95 = fVar95 + fVar95;
    fVar96 = fVar115 * fVar97 + fVar115 * fVar97;
    fVar97 = fVar114 * fVar97 + fVar114 * fVar97;
    auVar91._0_4_ = fVar26 + fVar71;
    auVar91._4_4_ = fVar113 + fVar95;
    auVar91._8_4_ = fVar81 + fVar96;
    auVar91._12_4_ = fVar82 + fVar97;
    auVar108._0_4_ = fVar26 - fVar71;
    auVar108._4_4_ = fVar113 - fVar95;
    auVar108._8_4_ = fVar81 - fVar96;
    auVar108._12_4_ = fVar82 - fVar97;
    uVar125 = a64_TBL(ZEXT816(0),auVar91,auVar108,DAT_0388a898);
    uVar99 = a64_TBL(ZEXT816(0),auVar91,auVar108,DAT_0388a5e8);
    auVar7[4] = SUB41(fVar50,0);
    auVar7._0_4_ = fVar28;
    auVar7[5] = uVar116;
    auVar7[6] = uVar117;
    auVar7[7] = uVar118;
    auVar7[8] = SUB41(fVar57,0);
    auVar7[9] = uVar119;
    auVar7[10] = uVar120;
    auVar7[0xb] = uVar121;
    auVar7[0xc] = SUB41(fVar64,0);
    auVar7[0xd] = uVar122;
    auVar7[0xe] = uVar123;
    auVar7[0xf] = uVar124;
    auVar9._8_8_ = uVar99;
    auVar9._0_8_ = uVar125;
    uVar100 = a64_TBL(ZEXT816(0),auVar7,auVar9,DAT_0388a640);
    auVar8[4] = SUB41(fVar50,0);
    auVar8._0_4_ = fVar28;
    auVar8[5] = uVar116;
    auVar8[6] = uVar117;
    auVar8[7] = uVar118;
    auVar8[8] = SUB41(fVar57,0);
    auVar8[9] = uVar119;
    auVar8[10] = uVar120;
    auVar8[0xb] = uVar121;
    auVar8[0xc] = SUB41(fVar64,0);
    auVar8[0xd] = uVar122;
    auVar8[0xe] = uVar123;
    auVar8[0xf] = uVar124;
    auVar10._8_8_ = uVar99;
    auVar10._0_8_ = uVar125;
    uVar99 = a64_TBL(ZEXT816(0),auVar8,auVar10,DAT_0388a7f0);
    fVar26 = (float)uVar100;
    fVar28 = (float)((ulong)uVar100 >> 0x20);
    fVar95 = (float)uVar99;
    fVar50 = (float)((ulong)uVar99 >> 0x20);
    fVar64 = fVar95 * fVar95 + fVar26 * fVar26;
    fVar71 = fVar50 * fVar50 + fVar28 * fVar28;
    fVar57 = fVar64 + fVar71;
    fVar64 = fVar64 + fVar71;
    auVar42._8_8_ = CONCAT44(fVar64,fVar57);
    auVar42._0_8_ = CONCAT44(fVar64,fVar57);
    auVar87 = NEON_frsqrte(auVar42,4);
    auVar109._0_4_ = auVar87._0_4_ * fVar57;
    auVar109._4_4_ = auVar87._4_4_ * fVar64;
    auVar109._8_4_ = auVar87._8_4_ * fVar57;
    auVar109._12_4_ = auVar87._12_4_ * fVar64;
    auVar86 = NEON_frsqrts(auVar87,auVar109,4);
    auVar76._0_4_ = auVar87._0_4_ * auVar86._0_4_;
    auVar76._4_4_ = auVar87._4_4_ * auVar86._4_4_;
    auVar76._8_4_ = auVar87._8_4_ * auVar86._8_4_;
    auVar76._12_4_ = auVar87._12_4_ * auVar86._12_4_;
    auVar110._0_4_ = fVar57 * auVar76._0_4_;
    auVar110._4_4_ = fVar64 * auVar76._4_4_;
    auVar110._8_4_ = fVar57 * auVar76._8_4_;
    auVar110._12_4_ = fVar64 * auVar76._12_4_;
    iVar29 = -(uint)(fVar57 == 0.0);
    iVar51 = -(uint)(fVar64 == 0.0);
    iVar65 = -(uint)(fVar57 == 0.0);
    iVar67 = -(uint)(fVar64 == 0.0);
    auVar87 = NEON_frsqrts(auVar76,auVar110,4);
    fVar26 = fVar26 * auVar76._0_4_ * auVar87._0_4_;
    fVar28 = fVar28 * auVar76._4_4_ * auVar87._4_4_;
    fVar95 = fVar95 * auVar76._8_4_ * auVar87._8_4_;
    fVar50 = fVar50 * auVar76._12_4_ * auVar87._12_4_;
    fVar57 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                             CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                                      CONCAT11((byte)((uint)fVar26 >> 8) &
                                               ~(byte)((uint)iVar29 >> 8),
                                               SUB41(fVar26,0) & ~(byte)iVar29)));
    auVar36._0_8_ =
         CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                  CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                           CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                    CONCAT14(SUB41(fVar28,0) & ~(byte)iVar51,fVar57))));
    auVar36[8] = SUB41(fVar95,0) & ~(byte)iVar65;
    auVar36[9] = (byte)((uint)fVar95 >> 8) & ~(byte)((uint)iVar65 >> 8);
    auVar36[10] = (byte)((uint)fVar95 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
    auVar36[0xb] = (byte)((uint)fVar95 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
    auVar43[0xc] = SUB41(fVar50,0) & ~(byte)iVar67;
    auVar43._0_12_ = auVar36;
    auVar43[0xd] = (byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar67 >> 8);
    auVar43[0xe] = (byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
    auVar43[0xf] = (byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
    auVar77._0_4_ = fVar57 * fVar57;
    fVar64 = (float)((ulong)auVar36._0_8_ >> 0x20);
    auVar77._4_4_ = fVar64 * fVar64;
    fVar26 = auVar36._8_4_;
    auVar77._8_4_ = fVar26 * fVar26;
    fVar71 = auVar43._12_4_;
    auVar77._12_4_ = fVar71 * fVar71;
    auVar87 = NEON_ext(auVar77,auVar77,8,1);
    fVar50 = auVar87._0_4_ + auVar77._0_4_;
    fVar95 = auVar87._4_4_ + auVar77._4_4_;
    fVar28 = fVar50 + fVar95;
    fVar50 = fVar50 + fVar95;
    auVar78._8_8_ = CONCAT44(fVar50,fVar28);
    auVar78._0_8_ = CONCAT44(fVar50,fVar28);
    auVar87 = NEON_frsqrte(auVar78,4);
    auVar111._0_4_ = auVar87._0_4_ * fVar28;
    auVar111._4_4_ = auVar87._4_4_ * fVar50;
    auVar111._8_4_ = auVar87._8_4_ * fVar28;
    auVar111._12_4_ = auVar87._12_4_ * fVar50;
    auVar86 = NEON_frsqrts(auVar87,auVar111,4);
    auVar92._0_4_ = auVar87._0_4_ * auVar86._0_4_;
    auVar92._4_4_ = auVar87._4_4_ * auVar86._4_4_;
    auVar92._8_4_ = auVar87._8_4_ * auVar86._8_4_;
    auVar92._12_4_ = auVar87._12_4_ * auVar86._12_4_;
    auVar112._0_4_ = fVar28 * auVar92._0_4_;
    auVar112._4_4_ = fVar50 * auVar92._4_4_;
    auVar112._8_4_ = fVar28 * auVar92._8_4_;
    auVar112._12_4_ = fVar50 * auVar92._12_4_;
    iVar29 = -(uint)(fVar28 == 0.0);
    iVar51 = -(uint)(fVar50 == 0.0);
    iVar65 = -(uint)(fVar28 == 0.0);
    iVar67 = -(uint)(fVar50 == 0.0);
    auVar87 = NEON_frsqrts(auVar92,auVar112,4);
    fVar57 = fVar57 * auVar92._0_4_ * auVar87._0_4_;
    fVar64 = fVar64 * auVar92._4_4_ * auVar87._4_4_;
    fVar26 = fVar26 * auVar92._8_4_ * auVar87._8_4_;
    fVar71 = fVar71 * auVar92._12_4_ * auVar87._12_4_;
    fVar28 = (float)CONCAT13((byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                             CONCAT12((byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                                      CONCAT11((byte)((uint)fVar79 >> 8) &
                                               ~(byte)((uint)iVar31 >> 8),
                                               SUB41(fVar79,0) & ~(byte)iVar31)));
    uVar99 = CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                      CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10),
                               CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar52 >> 8),
                                        CONCAT14(SUB41(fVar30,0) & ~(byte)iVar52,fVar28))));
    auVar12[8] = SUB41(fVar80,0) & ~(byte)iVar59;
    auVar12._0_8_ = uVar99;
    auVar12[9] = (byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar59 >> 8);
    auVar12[10] = (byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    auVar12[0xb] = (byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    auVar11[0xc] = SUB41(fVar94,0) & ~(byte)iVar66;
    auVar11._0_12_ = auVar12;
    auVar11[0xd] = (byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar66 >> 8);
    auVar11[0xe] = (byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
    auVar11[0xf] = (byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
    uVar14 = (undefined2)
             (CONCAT12(bStack_77 & ~(byte)((uint)iVar58 >> 8),
                       CONCAT11(bStack_78 & ~(byte)iVar58,bStack_79)) >> 8);
    auVar93._0_4_ = (float)CONCAT13(bStack_7d,CONCAT12(bStack_7e,uVar83)) * fVar28;
    auVar93._4_4_ =
         (float)CONCAT13(bStack_79,CONCAT12(bStack_7a,uVar16)) * (float)((ulong)uVar99 >> 0x20);
    auVar93._8_4_ = (float)CONCAT13(bStack_75,CONCAT12(bStack_76,uVar14)) * auVar12._8_4_;
    auVar93._12_4_ = (float)CONCAT13(bStack_71,CONCAT12(bStack_72,uVar17)) * auVar11._12_4_;
    NEON_ext(auVar93,auVar93,8,1);
    FUN_0095d8f0();
    auVar44._0_4_ =
         (float)CONCAT13(bStack_7d,CONCAT12(bStack_7e,uVar83)) *
         (float)CONCAT13((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                         CONCAT12((byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                                  CONCAT11((byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                           SUB41(fVar57,0) & ~(byte)iVar29)));
    auVar44._4_4_ =
         (float)CONCAT13(bStack_79,CONCAT12(bStack_7a,uVar16)) *
         (float)CONCAT13((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                         CONCAT12((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                                  CONCAT11((byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                           SUB41(fVar64,0) & ~(byte)iVar51)));
    auVar44._8_4_ =
         (float)CONCAT13(bStack_75,CONCAT12(bStack_76,uVar14)) *
         (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                         CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10),
                                  CONCAT11((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar65 >> 8),
                                           SUB41(fVar26,0) & ~(byte)iVar65)));
    auVar44._12_4_ =
         (float)CONCAT13(bStack_71,CONCAT12(bStack_72,uVar17)) *
         (float)CONCAT13((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                         CONCAT12((byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10),
                                  CONCAT11((byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar67 >> 8),
                                           SUB41(fVar71,0) & ~(byte)iVar67)));
    NEON_ext(auVar44,auVar44,8,1);
    uVar99 = extraout_var;
    (**(code **)(*local_58 + 0x1a0))();
    uVar22 = FUN_01a57b48(local_58);
    if (*(long *)(param_1 + 0x628) == 0) {
      local_68 = (long *)0x0;
      uVar23 = uVar22;
LAB_01a86550:
      *(undefined4 *)(param_1 + 0x8e0) = 0;
      *(undefined4 *)(param_1 + 0x8e8) = 0;
    }
    else {
      FUN_009b8474(&local_68,*(long *)(param_1 + 0x628));
      uVar23 = uVar22 & 0xffffffff;
      if (local_68 == (long *)0x0) goto LAB_01a86550;
      FUN_018281e0(local_68);
      uVar23 = uVar22;
      if (local_68 != (long *)0x0) {
        lVar25 = local_68[0xb];
        piVar2 = (int *)(lVar25 + 0xc);
        do {
          iVar29 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
    if ((uVar23 & 1) != 0) {
      if (*(char *)(param_1 + 0xa30) != '\0') {
        *(undefined1 *)(param_1 + 0xa30) = 0;
      }
      goto joined_r0x01a865b0;
    }
    uVar100 = *(undefined8 *)(*param_2 + 8);
    Var15 = *(unkbyte9 *)*param_2;
    bStack_77 = (byte)((ulong)uVar100 >> 8);
    bStack_76 = (byte)((ulong)uVar100 >> 0x10);
    bStack_75 = (byte)((ulong)uVar100 >> 0x18);
    bStack_74 = (byte)((ulong)uVar100 >> 0x20);
    bStack_73 = (byte)((ulong)uVar100 >> 0x28);
    bStack_72 = (byte)((ulong)uVar100 >> 0x30);
    bStack_71 = (byte)((ulong)uVar100 >> 0x38);
    auVar45._8_8_ = uVar99;
    auVar45._0_8_ = extraout_d0;
    uVar32 = (**(code **)(*local_58 + 0x1a8))(auVar45);
    uVar21 = (**(code **)(*local_58 + 0x1c8))();
    auVar13[9] = bStack_77;
    auVar13._0_9_ = Var15;
    auVar13[10] = bStack_76;
    auVar13[0xb] = bStack_75;
    auVar13[0xc] = bStack_74;
    auVar13[0xd] = bStack_73;
    auVar13[0xe] = bStack_72;
    auVar13[0xf] = bStack_71;
    *(undefined4 *)(param_1 + 0xa50) = uVar32;
    *(undefined4 *)(param_1 + 0xa54) = uVar21;
    cVar3 = *(char *)(param_1 + 0xa30);
    *(long *)(param_1 + 0xa48) = auVar13._8_8_;
    *(long *)(param_1 + 0xa40) = (long)Var15;
  }
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0xa30) = 1;
  }
joined_r0x01a865b0:
  if (local_58 != (long *)0x0) {
    lVar25 = local_58[0xb];
    piVar2 = (int *)(lVar25 + 0xc);
    do {
      iVar29 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar29 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


