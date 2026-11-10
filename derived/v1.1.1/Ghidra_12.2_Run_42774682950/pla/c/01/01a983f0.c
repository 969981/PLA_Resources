/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a983f0; name: FUN_01a983f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a983f0(long param_1)

{
  long *plVar1;
  int *piVar2;
  void *pvVar3;
  char cVar4;
  bool bVar5;
  size_t __n;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  void *pvVar17;
  void *pvVar18;
  ulong uVar19;
  long lVar20;
  float *pfVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  ulong uVar31;
  void *pvVar32;
  void *pvVar33;
  bool bVar34;
  void *pvVar35;
  byte bVar36;
  int iVar37;
  undefined8 uVar38;
  undefined1 auVar39 [12];
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar40 [12];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar54;
  int iVar59;
  int iVar64;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar75;
  float fVar76;
  float fVar78;
  float fVar79;
  undefined1 auVar71 [16];
  float fVar77;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined8 uVar80;
  undefined1 auVar82 [16];
  undefined8 uVar81;
  undefined1 auVar83 [16];
  float fVar84;
  undefined8 uVar86;
  undefined1 auVar88 [12];
  float fVar96;
  undefined1 auVar89 [16];
  float fVar85;
  undefined8 uVar87;
  float fVar97;
  float fVar98;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined8 uVar99;
  undefined8 uVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined8 local_120;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined7 local_a8;
  undefined4 uStack_a1;
  
  puVar14 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar37 = __cxa_guard_acquire(PTR_DAT_04379660), iVar37 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar16 = PTR_DAT_04379670;
  puVar15 = PTR_DAT_04379668;
  lVar28 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar28;
  uVar24 = *(ulong *)(lVar28 + 0x60);
  if (uVar24 == 0) {
LAB_01a985cc:
    uVar26 = 0;
  }
  else {
    uVar26 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
    uVar19 = *(ulong *)(param_1 + 0x9f8);
    uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar26 < 2) {
      uVar22 = uVar24 - 1 & uVar19;
    }
    else if (uVar19 < uVar24) {
      uVar22 = uVar19;
    }
    else {
      uVar22 = 0;
      if (uVar24 != 0) {
        uVar22 = uVar19 / uVar24;
      }
      uVar22 = uVar19 - uVar22 * uVar24;
    }
    plVar29 = *(long **)(*(long *)(lVar28 + 0x58) + uVar22 * 8);
    if ((plVar29 == (long *)0x0) || (plVar29 = (long *)*plVar29, plVar29 == (long *)0x0))
    goto LAB_01a985cc;
    if (1 < uVar26) {
      do {
        uVar26 = plVar29[1];
        if (uVar26 == uVar19) {
          if (plVar29[2] == uVar19) goto LAB_01a984d0;
        }
        else {
          if (uVar24 <= uVar26) {
            uVar31 = 0;
            if (uVar24 != 0) {
              uVar31 = uVar26 / uVar24;
            }
            uVar26 = uVar26 - uVar31 * uVar24;
          }
          if (uVar26 != uVar22) break;
        }
        plVar29 = (long *)*plVar29;
      } while (plVar29 != (long *)0x0);
      goto LAB_01a985cc;
    }
    do {
      if (plVar29[1] == uVar19) {
        if (plVar29[2] == uVar19) goto LAB_01a984d0;
      }
      else if ((plVar29[1] & uVar24 - 1) != uVar22) goto LAB_01a985cc;
      plVar29 = (long *)*plVar29;
      uVar26 = 0;
    } while (plVar29 != (long *)0x0);
  }
  goto LAB_01a98638;
LAB_01a984d0:
  plVar29 = (long *)plVar29[3];
  if (plVar29 == (long *)0x0) goto LAB_01a985cc;
  plVar1 = plVar29 + 10;
  do {
    cVar4 = '\x01';
    bVar34 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar34) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar24 = plVar29[0x14];
  if (uVar24 == 0) {
    iVar37 = 0;
  }
  else {
    uVar26 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
    uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar26 < 2) {
      uVar19 = uVar24 - 1 & 0x3c339b023b4438e8;
    }
    else if (uVar24 < 0x3c339b023b4438e9) {
      uVar19 = 0;
      if (uVar24 != 0) {
        uVar19 = 0x3c339b023b4438e8 / uVar24;
      }
      uVar19 = 0x3c339b023b4438e8 - uVar19 * uVar24;
    }
    else {
      uVar19 = 0x3c339b023b4438e8;
    }
    plVar30 = *(long **)(plVar29[0x13] + uVar19 * 8);
    if (plVar30 == (long *)0x0) {
      iVar37 = 0;
    }
    else {
      plVar30 = (long *)*plVar30;
      if (plVar30 == (long *)0x0) {
        iVar37 = 0;
      }
      else if (uVar26 < 2) {
        do {
          if (plVar30[1] == 0x3c339b023b4438e8) {
            if (plVar30[2] == 0x3c339b023b4438e8) goto LAB_01a9861c;
          }
          else if ((plVar30[1] & uVar24 - 1) != uVar19) {
            iVar37 = 0;
            break;
          }
          plVar30 = (long *)*plVar30;
          iVar37 = 0;
        } while (plVar30 != (long *)0x0);
      }
      else {
        do {
          uVar26 = plVar30[1];
          if (uVar26 == 0x3c339b023b4438e8) {
            if (plVar30[2] == 0x3c339b023b4438e8) goto LAB_01a9861c;
          }
          else {
            if (uVar24 <= uVar26) {
              uVar22 = 0;
              if (uVar24 != 0) {
                uVar22 = uVar26 / uVar24;
              }
              uVar26 = uVar26 - uVar22 * uVar24;
            }
            if (uVar26 != uVar19) {
              iVar37 = 0;
              goto LAB_01a98620;
            }
          }
          plVar30 = (long *)*plVar30;
        } while (plVar30 != (long *)0x0);
        iVar37 = 0;
      }
    }
  }
  goto LAB_01a98620;
LAB_01a9861c:
  iVar37 = (int)plVar30[6];
LAB_01a98620:
  do {
    iVar54 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar34 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar34) {
      *(int *)plVar1 = iVar54;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar54 == 0) {
    (**(code **)(*plVar29 + 0x10))();
  }
  uVar26 = (ulong)iVar37;
LAB_01a98638:
  FUN_009c69bc(&local_a8,param_1);
  plVar29 = (long *)CONCAT17((undefined1)uStack_a1,local_a8);
  lVar27 = plVar29[0x19];
  lVar28 = plVar29[0x18];
  if (plVar29 != (long *)0x0) {
    lVar20 = plVar29[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar37 = *piVar2;
      cVar4 = '\x01';
      bVar34 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar34) {
        *piVar2 = iVar37 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar37 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar29 + 0x20))();
    }
  }
  uVar13 = DAT_0388a880;
  uVar81 = DAT_0388a6f0;
  uVar100 = DAT_0388a6d8;
  uVar38 = DAT_0388a680;
  uVar87 = DAT_0388a5e0;
  bVar36 = (byte)_DAT_038897c0;
  bVar50 = (byte)((ulong)_DAT_038897c0 >> 8);
  bVar51 = (byte)((ulong)_DAT_038897c0 >> 0x10);
  bVar52 = (byte)((ulong)_DAT_038897c0 >> 0x18);
  fVar69 = (float)CONCAT13((byte)((ulong)lVar28 >> 0x18) & bVar52,
                           CONCAT12((byte)((ulong)lVar28 >> 0x10) & bVar51,
                                    CONCAT11((byte)((ulong)lVar28 >> 8) & bVar50,
                                             (byte)lVar28 & bVar36)));
  bVar53 = (byte)((ulong)_DAT_038897c0 >> 0x20);
  bVar55 = (byte)((ulong)_DAT_038897c0 >> 0x28);
  bVar56 = (byte)((ulong)_DAT_038897c0 >> 0x30);
  bVar57 = (byte)((ulong)_DAT_038897c0 >> 0x38);
  auVar39._0_8_ =
       CONCAT17((byte)((ulong)lVar28 >> 0x38) & bVar57,
                CONCAT16((byte)((ulong)lVar28 >> 0x30) & bVar56,
                         CONCAT15((byte)((ulong)lVar28 >> 0x28) & bVar55,
                                  CONCAT14((byte)((ulong)lVar28 >> 0x20) & bVar53,fVar69))));
  bVar58 = (byte)_UNK_038897c8;
  auVar39[8] = (byte)lVar27 & bVar58;
  bVar60 = (byte)((ulong)_UNK_038897c8 >> 8);
  auVar39[9] = (byte)((ulong)lVar27 >> 8) & bVar60;
  bVar61 = (byte)((ulong)_UNK_038897c8 >> 0x10);
  auVar39[10] = (byte)((ulong)lVar27 >> 0x10) & bVar61;
  bVar62 = (byte)((ulong)_UNK_038897c8 >> 0x18);
  auVar39[0xb] = (byte)((ulong)lVar27 >> 0x18) & bVar62;
  bVar63 = (byte)((ulong)_UNK_038897c8 >> 0x20);
  auVar41[0xc] = (byte)((ulong)lVar27 >> 0x20) & bVar63;
  auVar41._0_12_ = auVar39;
  bVar65 = (byte)((ulong)_UNK_038897c8 >> 0x28);
  auVar41[0xd] = (byte)((ulong)lVar27 >> 0x28) & bVar65;
  bVar66 = (byte)((ulong)_UNK_038897c8 >> 0x30);
  bVar67 = (byte)((ulong)_UNK_038897c8 >> 0x38);
  auVar41[0xe] = (byte)((ulong)lVar27 >> 0x30) & bVar66;
  auVar41[0xf] = (byte)((ulong)lVar27 >> 0x38) & bVar67;
  uVar70 = NEON_ext(auVar39._0_8_,auVar39._0_8_,4,1);
  uVar80 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a6f0);
  uVar86 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a5e0);
  uVar99 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a6d8);
  fVar68 = (float)uVar70 * (float)uVar70;
  fVar75 = (float)((ulong)uVar70 >> 0x20);
  fVar75 = fVar75 * fVar75;
  fVar78 = (float)uVar80;
  fVar79 = (float)((ulong)uVar80 >> 0x20);
  fVar84 = (float)uVar86 * (float)uVar86;
  fVar96 = (float)((ulong)uVar86 >> 0x20);
  fVar96 = fVar96 * fVar96;
  fVar77 = (float)uVar99;
  fVar85 = (float)((ulong)uVar99 >> 0x20);
  fVar102 = (float)_DAT_03888fc0;
  fVar101 = fVar102 - (fVar68 + fVar68 + fVar84 + fVar84);
  fVar104 = (float)((ulong)_DAT_03888fc0 >> 0x20);
  fVar103 = fVar104 - (fVar75 + fVar75 + fVar96 + fVar96);
  fVar106 = (float)_UNK_03888fc8;
  fVar105 = fVar106 - (fVar78 * fVar78 + fVar78 * fVar78 + fVar77 * fVar77 + fVar77 * fVar77);
  fVar108 = (float)((ulong)_UNK_03888fc8 >> 0x20);
  fVar107 = fVar108 - (fVar79 * fVar79 + fVar79 * fVar79 + fVar85 * fVar85 + fVar85 * fVar85);
  uVar70 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a880);
  fVar69 = (float)uVar70 * fVar69;
  fVar76 = (float)((ulong)uVar70 >> 0x20) * (float)((ulong)auVar39._0_8_ >> 0x20);
  fVar78 = fVar78 * auVar39._8_4_;
  fVar79 = fVar79 * auVar41._12_4_;
  uVar70 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a680);
  fVar69 = fVar69 + fVar69;
  fVar76 = fVar76 + fVar76;
  fVar78 = fVar78 + fVar78;
  fVar79 = fVar79 + fVar79;
  fVar96 = (float)((ulong)lVar27 >> 0x20);
  fVar68 = (float)uVar70 * fVar96;
  fVar75 = (float)((ulong)uVar70 >> 0x20) * fVar96;
  fVar68 = fVar68 + fVar68;
  fVar75 = fVar75 + fVar75;
  fVar84 = fVar77 * fVar96 + fVar77 * fVar96;
  fVar96 = fVar85 * fVar96 + fVar85 * fVar96;
  auVar82._0_4_ = fVar69 + fVar68;
  auVar82._4_4_ = fVar76 + fVar75;
  auVar82._8_4_ = fVar78 + fVar84;
  auVar82._12_4_ = fVar79 + fVar96;
  auVar89._0_4_ = fVar69 - fVar68;
  auVar89._4_4_ = fVar76 - fVar75;
  auVar89._8_4_ = fVar78 - fVar84;
  auVar89._12_4_ = fVar79 - fVar96;
  uVar86 = a64_TBL(ZEXT816(0),auVar82,auVar89,DAT_0388a898);
  uVar70 = a64_TBL(ZEXT816(0),auVar82,auVar89,DAT_0388a5e8);
  auVar71._4_4_ = fVar103;
  auVar71._0_4_ = fVar101;
  auVar71._8_4_ = fVar105;
  auVar71._12_4_ = fVar107;
  auVar9._8_8_ = uVar70;
  auVar9._0_8_ = uVar86;
  uVar80 = a64_TBL(ZEXT816(0),auVar71,auVar9,DAT_0388a640);
  auVar92._4_4_ = fVar103;
  auVar92._0_4_ = fVar101;
  auVar92._8_4_ = fVar105;
  auVar92._12_4_ = fVar107;
  auVar10._8_8_ = uVar70;
  auVar10._0_8_ = uVar86;
  uVar70 = a64_TBL(ZEXT816(0),auVar92,auVar10,DAT_0388a7f0);
  fVar78 = (float)uVar80;
  fVar69 = (float)((ulong)uVar80 >> 0x20);
  fVar96 = (float)uVar70;
  fVar68 = (float)((ulong)uVar70 >> 0x20);
  fVar84 = fVar96 * fVar96 + fVar78 * fVar78;
  fVar76 = fVar68 * fVar68 + fVar69 * fVar69;
  fVar75 = fVar84 + fVar76;
  fVar84 = fVar84 + fVar76;
  auVar42._8_8_ = CONCAT44(fVar84,fVar75);
  auVar42._0_8_ = CONCAT44(fVar84,fVar75);
  auVar71 = NEON_frsqrte(auVar42,4);
  fStack_d8 = auVar71._8_4_;
  fStack_d4 = auVar71._12_4_;
  local_e0 = auVar71._0_4_;
  fStack_dc = auVar71._4_4_;
  auVar43._0_4_ = local_e0 * fVar75;
  auVar43._4_4_ = fStack_dc * fVar84;
  auVar43._8_4_ = fStack_d8 * fVar75;
  auVar43._12_4_ = fStack_d4 * fVar84;
  auVar71 = NEON_frsqrts(auVar71,auVar43,4);
  FUN_009c69bc(&local_a8,param_1);
  plVar29 = (long *)CONCAT17((undefined1)uStack_a1,local_a8);
  lVar27 = plVar29[0x19];
  lVar28 = plVar29[0x18];
  if (plVar29 != (long *)0x0) {
    lVar20 = plVar29[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar37 = *piVar2;
      cVar4 = '\x01';
      bVar34 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar34) {
        *piVar2 = iVar37 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar37 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar29 + 0x20))();
    }
  }
  local_120._0_4_ = auVar71._0_4_;
  local_120._4_4_ = auVar71._4_4_;
  fStack_118 = auVar71._8_4_;
  fStack_114 = auVar71._12_4_;
  local_e0 = local_e0 * (float)local_120;
  fStack_dc = fStack_dc * local_120._4_4_;
  fStack_d8 = fStack_d8 * fStack_118;
  fStack_d4 = fStack_d4 * fStack_114;
  fVar76 = (float)CONCAT13((byte)((ulong)lVar28 >> 0x18) & bVar52,
                           CONCAT12((byte)((ulong)lVar28 >> 0x10) & bVar51,
                                    CONCAT11((byte)((ulong)lVar28 >> 8) & bVar50,
                                             (byte)lVar28 & bVar36)));
  auVar40._0_8_ =
       CONCAT17((byte)((ulong)lVar28 >> 0x38) & bVar57,
                CONCAT16((byte)((ulong)lVar28 >> 0x30) & bVar56,
                         CONCAT15((byte)((ulong)lVar28 >> 0x28) & bVar55,
                                  CONCAT14((byte)((ulong)lVar28 >> 0x20) & bVar53,fVar76))));
  auVar40[8] = (byte)lVar27 & bVar58;
  auVar40[9] = (byte)((ulong)lVar27 >> 8) & bVar60;
  auVar40[10] = (byte)((ulong)lVar27 >> 0x10) & bVar61;
  auVar40[0xb] = (byte)((ulong)lVar27 >> 0x18) & bVar62;
  auVar44[0xc] = (byte)((ulong)lVar27 >> 0x20) & bVar63;
  auVar44._0_12_ = auVar40;
  auVar44[0xd] = (byte)((ulong)lVar27 >> 0x28) & bVar65;
  auVar44[0xe] = (byte)((ulong)lVar27 >> 0x30) & bVar66;
  auVar44[0xf] = (byte)((ulong)lVar27 >> 0x38) & bVar67;
  uVar70 = NEON_ext(auVar40._0_8_,auVar40._0_8_,4,1);
  uVar81 = a64_TBL(ZEXT816(0),auVar44,uVar81);
  uVar87 = a64_TBL(ZEXT816(0),auVar44,uVar87);
  uVar100 = a64_TBL(ZEXT816(0),auVar44,uVar100);
  fVar79 = (float)uVar70 * (float)uVar70;
  fVar77 = (float)((ulong)uVar70 >> 0x20);
  fVar77 = fVar77 * fVar77;
  fVar105 = (float)uVar81;
  fVar107 = (float)((ulong)uVar81 >> 0x20);
  fVar85 = (float)uVar87 * (float)uVar87;
  fVar101 = (float)((ulong)uVar87 >> 0x20);
  fVar101 = fVar101 * fVar101;
  fVar97 = (float)uVar100;
  fVar98 = (float)((ulong)uVar100 >> 0x20);
  fVar102 = fVar102 - (fVar79 + fVar79 + fVar85 + fVar85);
  fVar104 = fVar104 - (fVar77 + fVar77 + fVar101 + fVar101);
  fVar106 = fVar106 - (fVar105 * fVar105 + fVar105 * fVar105 + fVar97 * fVar97 + fVar97 * fVar97);
  fVar108 = fVar108 - (fVar107 * fVar107 + fVar107 * fVar107 + fVar98 * fVar98 + fVar98 * fVar98);
  uVar87 = a64_TBL(ZEXT816(0),auVar44,uVar13);
  fVar76 = (float)uVar87 * fVar76;
  fVar103 = (float)((ulong)uVar87 >> 0x20) * (float)((ulong)auVar40._0_8_ >> 0x20);
  fVar105 = fVar105 * auVar40._8_4_;
  fVar107 = fVar107 * auVar44._12_4_;
  uVar87 = a64_TBL(ZEXT816(0),auVar44,uVar38);
  fVar76 = fVar76 + fVar76;
  fVar103 = fVar103 + fVar103;
  fVar105 = fVar105 + fVar105;
  fVar107 = fVar107 + fVar107;
  fVar101 = (float)((ulong)lVar27 >> 0x20);
  fVar79 = (float)uVar87 * fVar101;
  fVar77 = (float)((ulong)uVar87 >> 0x20) * fVar101;
  fVar79 = fVar79 + fVar79;
  fVar77 = fVar77 + fVar77;
  fVar85 = fVar97 * fVar101 + fVar97 * fVar101;
  fVar101 = fVar98 * fVar101 + fVar98 * fVar101;
  auVar83._0_4_ = fVar76 + fVar79;
  auVar83._4_4_ = fVar103 + fVar77;
  auVar83._8_4_ = fVar105 + fVar85;
  auVar83._12_4_ = fVar107 + fVar101;
  auVar90._0_4_ = fVar76 - fVar79;
  auVar90._4_4_ = fVar103 - fVar77;
  auVar90._8_4_ = fVar105 - fVar85;
  auVar90._12_4_ = fVar107 - fVar101;
  uVar100 = a64_TBL(ZEXT816(0),auVar83,auVar90,DAT_0388a758);
  uVar87 = a64_TBL(ZEXT816(0),auVar83,auVar90,DAT_0388a720);
  auVar7._4_4_ = fVar104;
  auVar7._0_4_ = fVar102;
  auVar7._8_4_ = fVar106;
  auVar7._12_4_ = fVar108;
  auVar11._8_8_ = uVar87;
  auVar11._0_8_ = uVar100;
  uVar38 = a64_TBL(ZEXT816(0),auVar7,auVar11,DAT_0388a668);
  auVar8._4_4_ = fVar104;
  auVar8._0_4_ = fVar102;
  auVar8._8_4_ = fVar106;
  auVar8._12_4_ = fVar108;
  auVar12._8_8_ = uVar87;
  auVar12._0_8_ = uVar100;
  uVar87 = a64_TBL(ZEXT816(0),auVar8,auVar12,DAT_0388a5a8);
  fVar77 = (float)uVar38;
  fVar76 = (float)((ulong)uVar38 >> 0x20);
  fVar85 = (float)uVar87;
  fVar79 = (float)((ulong)uVar87 >> 0x20);
  fVar104 = fVar85 * fVar85 + fVar77 * fVar77;
  fVar106 = fVar79 * fVar79 + fVar76 * fVar76;
  fVar102 = fVar104 + fVar106;
  fVar104 = fVar104 + fVar106;
  auVar45._8_8_ = CONCAT44(fVar104,fVar102);
  auVar45._0_8_ = CONCAT44(fVar104,fVar102);
  auVar71 = NEON_frsqrte(auVar45,4);
  auVar91._0_4_ = auVar71._0_4_ * fVar102;
  auVar91._4_4_ = auVar71._4_4_ * fVar104;
  auVar91._8_4_ = auVar71._8_4_ * fVar102;
  auVar91._12_4_ = auVar71._12_4_ * fVar104;
  auVar92 = NEON_frsqrts(auVar71,auVar91,4);
  auVar72._0_4_ = auVar71._0_4_ * auVar92._0_4_;
  auVar72._4_4_ = auVar71._4_4_ * auVar92._4_4_;
  auVar72._8_4_ = auVar71._8_4_ * auVar92._8_4_;
  auVar72._12_4_ = auVar71._12_4_ * auVar92._12_4_;
  auVar93._0_4_ = fVar102 * auVar72._0_4_;
  auVar93._4_4_ = fVar104 * auVar72._4_4_;
  auVar93._8_4_ = fVar102 * auVar72._8_4_;
  auVar93._12_4_ = fVar104 * auVar72._12_4_;
  iVar37 = -(uint)(fVar102 == 0.0);
  iVar54 = -(uint)(fVar104 == 0.0);
  iVar59 = -(uint)(fVar102 == 0.0);
  iVar64 = -(uint)(fVar104 == 0.0);
  auVar71 = NEON_frsqrts(auVar72,auVar93,4);
  fVar77 = fVar77 * auVar72._0_4_ * auVar71._0_4_;
  fVar76 = fVar76 * auVar72._4_4_ * auVar71._4_4_;
  fVar85 = fVar85 * auVar72._8_4_ * auVar71._8_4_;
  fVar79 = fVar79 * auVar72._12_4_ * auVar71._12_4_;
  fVar102 = (float)CONCAT13((byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                            CONCAT12((byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10),
                                     CONCAT11((byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar37 >> 8)
                                              ,SUB41(fVar77,0) & ~(byte)iVar37)));
  auVar88._0_8_ =
       CONCAT17((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                CONCAT16((byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10),
                         CONCAT15((byte)((uint)fVar76 >> 8) & ~(byte)((uint)iVar54 >> 8),
                                  CONCAT14(SUB41(fVar76,0) & ~(byte)iVar54,fVar102))));
  auVar88[8] = SUB41(fVar85,0) & ~(byte)iVar59;
  auVar88[9] = (byte)((uint)fVar85 >> 8) & ~(byte)((uint)iVar59 >> 8);
  auVar88[10] = (byte)((uint)fVar85 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
  auVar88[0xb] = (byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
  auVar94[0xc] = SUB41(fVar79,0) & ~(byte)iVar64;
  auVar94._0_12_ = auVar88;
  auVar94[0xd] = (byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar64 >> 8);
  auVar94[0xe] = (byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
  auVar94[0xf] = (byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
  if (*(long *)(param_1 + 0xbc0) != 0) {
    uVar24 = (*(long *)(param_1 + 0xbc0) + *(long *)(param_1 + 3000)) - 1;
    pfVar21 = (float *)(*(long *)(*(long *)(param_1 + 0xb80) + (uVar24 / 0x55) * 8) +
                       (uVar24 % 0x55) * 0x30);
    auVar73._0_4_ = fVar102 * pfVar21[4];
    fVar76 = (float)((ulong)auVar88._0_8_ >> 0x20);
    auVar73._4_4_ = fVar76 * pfVar21[5];
    auVar73._8_4_ = auVar88._8_4_ * pfVar21[6];
    auVar73._12_4_ = auVar94._12_4_ * pfVar21[7];
    auVar71 = NEON_ext(auVar73,auVar73,8,1);
    auVar46._0_4_ = fVar102 * *pfVar21;
    auVar46._4_4_ = fVar76 * pfVar21[1];
    auVar46._8_4_ = auVar88._8_4_ * pfVar21[2];
    auVar46._12_4_ = auVar94._12_4_ * pfVar21[3];
    fVar76 = auVar71._0_4_ + auVar73._0_4_ + auVar71._4_4_ + auVar73._4_4_;
    bVar34 = 0.0 < fVar76;
    NEON_ext(auVar46,auVar46,8,1);
    fVar79 = (float)FUN_0095d8f0();
    if (((*puVar14 & 1) == 0) && (iVar37 = __cxa_guard_acquire(PTR_DAT_04379660), iVar37 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar28 = *(long *)puVar15;
    *(long *)puVar16 = lVar28;
    uVar24 = *(ulong *)(lVar28 + 0x60);
    fVar102 = 0.0;
    if (uVar24 != 0) {
      uVar19 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar22 = *(ulong *)(param_1 + 0x9f8);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar31 = uVar24 - 1 & uVar22;
      }
      else if (uVar22 < uVar24) {
        uVar31 = uVar22;
      }
      else {
        uVar31 = 0;
        if (uVar24 != 0) {
          uVar31 = uVar22 / uVar24;
        }
        uVar31 = uVar22 - uVar31 * uVar24;
      }
      plVar29 = *(long **)(*(long *)(lVar28 + 0x58) + uVar31 * 8);
      if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
        if (uVar19 < 2) {
          do {
            if (plVar29[1] == uVar22) {
              if (plVar29[2] == uVar22) goto LAB_01a989b8;
            }
            else if ((plVar29[1] & uVar24 - 1) != uVar31) break;
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar29[1];
            if (uVar19 == uVar22) {
              if (plVar29[2] == uVar22) goto LAB_01a989b8;
            }
            else {
              if (uVar24 <= uVar19) {
                uVar6 = 0;
                if (uVar24 != 0) {
                  uVar6 = uVar19 / uVar24;
                }
                uVar19 = uVar19 - uVar6 * uVar24;
              }
              if (uVar19 != uVar31) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
    }
    goto LAB_01a98b14;
  }
  bVar34 = false;
  lVar28 = 0;
  fVar104 = 0.0;
  goto LAB_01a98b30;
LAB_01a989b8:
  plVar29 = (long *)plVar29[3];
  if (plVar29 != (long *)0x0) {
    plVar1 = plVar29 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar24 = plVar29[0x21];
    fVar102 = 0.0;
    if (uVar24 != 0) {
      uVar19 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar22 = uVar24 - 1 & 0xb7d679e0095eb5af;
      }
      else if (uVar24 < 0xb7d679e0095eb5b0) {
        uVar22 = 0;
        if (uVar24 != 0) {
          uVar22 = 0xb7d679e0095eb5af / uVar24;
        }
        uVar22 = 0xb7d679e0095eb5af - uVar22 * uVar24;
      }
      else {
        uVar22 = 0xb7d679e0095eb5af;
      }
      plVar30 = *(long **)(plVar29[0x20] + uVar22 * 8);
      if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
        if (uVar19 < 2) {
          do {
            if (plVar30[1] == 0xb7d679e0095eb5af) {
              if (plVar30[2] == -0x4829861ff6a14a51) goto LAB_01a98afc;
            }
            else if ((plVar30[1] & uVar24 - 1) != uVar22) break;
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar30[1];
            if (uVar19 == 0xb7d679e0095eb5af) {
              if (plVar30[2] == -0x4829861ff6a14a51) goto LAB_01a98afc;
            }
            else {
              if (uVar24 <= uVar19) {
                uVar31 = 0;
                if (uVar24 != 0) {
                  uVar31 = uVar19 / uVar24;
                }
                uVar19 = uVar19 - uVar31 * uVar24;
              }
              if (uVar19 != uVar22) break;
            }
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
      }
    }
    goto LAB_01a98b00;
  }
  goto LAB_01a98b14;
LAB_01a98afc:
  fVar102 = *(float *)(plVar30 + 6);
LAB_01a98b00:
  do {
    iVar37 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar37;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar37 == 0) {
    (**(code **)(*plVar29 + 0x10))();
  }
LAB_01a98b14:
  lVar28 = *(long *)(param_1 + 0xbc0);
  fVar104 = 1.0;
  if (fVar76 <= 0.0) {
    fVar104 = -1.0;
  }
  fVar104 = fVar104 * fVar79 * fVar102;
LAB_01a98b30:
  auVar95._4_4_ = fStack_dc;
  auVar95._0_4_ = local_e0;
  auVar95._8_4_ = fStack_d8;
  auVar95._12_4_ = fStack_d4;
  auVar47._0_4_ = fVar75 * local_e0;
  auVar47._4_4_ = fVar84 * fStack_dc;
  auVar47._8_4_ = fVar75 * fStack_d8;
  auVar47._12_4_ = fVar84 * fStack_d4;
  puVar25 = *(undefined8 **)(param_1 + 0xb88);
  puVar23 = *(undefined8 **)(param_1 + 0xb80);
  uVar19 = (long)puVar25 - (long)puVar23 >> 3;
  uVar24 = 0;
  if ((long)puVar25 - (long)puVar23 != 0) {
    uVar24 = uVar19 * 0x55 - 1;
  }
  auVar71 = NEON_frsqrts(auVar95,auVar47,4);
  uVar31 = *(ulong *)(param_1 + 3000);
  uVar22 = uVar31 + lVar28;
  local_110 = auVar71._0_4_;
  fStack_10c = auVar71._4_4_;
  fStack_108 = auVar71._8_4_;
  fStack_104 = auVar71._12_4_;
  if (uVar24 == uVar22) {
    lVar28 = param_1 + 0xb78;
    if (uVar31 < 0x55) {
      lVar27 = (long)*(undefined8 **)(param_1 + 0xb90) - *(long *)(param_1 + 0xb78);
      if (uVar19 < (ulong)(lVar27 >> 3)) {
        if (*(undefined8 **)(param_1 + 0xb90) == puVar25) {
          lVar27 = (**(code **)(**(long **)(param_1 + 0xbc8) + 0x10))
                             (*(long **)(param_1 + 0xbc8),0xff0,0x10);
          if (lVar27 == 0) {
            (**(code **)(**(long **)(param_1 + 0xbc8) + 0xb8))();
          }
          local_a8 = (undefined7)lVar27;
          uStack_a1._0_1_ = (undefined1)((ulong)lVar27 >> 0x38);
          FUN_01aa7c18(lVar28,&local_a8);
          uVar87 = **(undefined8 **)(param_1 + 0xb80);
          local_a8 = (undefined7)uVar87;
          uStack_a1._0_1_ = (undefined1)((ulong)uVar87 >> 0x38);
          *(undefined8 **)(param_1 + 0xb80) = *(undefined8 **)(param_1 + 0xb80) + 1;
          FUN_01aa77a4(lVar28,&local_a8);
        }
        else {
          lVar27 = (**(code **)(**(long **)(param_1 + 0xbc8) + 0x10))
                             (*(long **)(param_1 + 0xbc8),0xff0,0x10);
          if (lVar27 == 0) {
            (**(code **)(**(long **)(param_1 + 0xbc8) + 0xb8))();
          }
          local_a8 = (undefined7)lVar27;
          uStack_a1._0_1_ = (undefined1)((ulong)lVar27 >> 0x38);
          FUN_01aa79dc(lVar28,&local_a8);
        }
      }
      else {
        uVar24 = lVar27 >> 2;
        if (lVar27 == 0) {
          uVar24 = 1;
        }
        puVar23 = (undefined8 *)(param_1 + 0xb98);
        pvVar17 = (void *)(**(code **)(**(long **)(param_1 + 0xb98) + 0x10))
                                    (*(long **)(param_1 + 0xb98),uVar24 << 3,0x10);
        if (pvVar17 == (void *)0x0) {
          (**(code **)(*(long *)*puVar23 + 0xb8))();
        }
        pvVar33 = (void *)((long)pvVar17 + uVar24 * 8);
        lVar28 = (**(code **)(**(long **)(param_1 + 0xbc8) + 0x10))
                           (*(long **)(param_1 + 0xbc8),0xff0,0x10);
        if (lVar28 == 0) {
          (**(code **)(**(long **)(param_1 + 0xbc8) + 0xb8))();
        }
        local_120 = (void *)((long)pvVar17 + uVar19 * 8);
        local_a8 = (undefined7)lVar28;
        uStack_a1._0_1_ = (undefined1)((ulong)lVar28 >> 0x38);
        if (uVar19 == uVar24) {
          if (pvVar17 <= local_120 && (long)local_120 - (long)pvVar17 != 0) {
            lVar28 = (long)local_120 - (long)pvVar17 >> 3;
            uVar24 = lVar28 + 2;
            if (-1 < lVar28 + 1) {
              uVar24 = lVar28 + 1;
            }
            local_120 = (void *)((long)local_120 + (uVar24 & 0x3ffffffffffffffe) * -4);
            goto LAB_01a98dc0;
          }
          lVar28 = (long)pvVar33 - (long)pvVar17;
          uVar24 = lVar28 >> 2;
          if (lVar28 == 0) {
            uVar24 = 1;
          }
          pvVar18 = (void *)(**(code **)(*(long *)*puVar23 + 0x10))
                                      ((long *)*puVar23,uVar24 << 3,0x10);
          if (pvVar18 == (void *)0x0) {
            (**(code **)(*(long *)*puVar23 + 0xb8))();
          }
          local_120 = (void *)((long)pvVar18 + (uVar24 >> 2) * 8);
          pvVar33 = (void *)((long)pvVar18 + uVar24 * 8);
          if (pvVar17 != (void *)0x0) {
            plVar29 = (long *)*puVar23;
            uVar24 = (**(code **)(*plVar29 + 0xc0))(plVar29);
            if ((uVar24 & 1) != 0) {
              lVar27 = tpidr_el0;
              if (*(char *)(lVar27 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar27 + 0x38d488) = 1;
                *(undefined8 *)(lVar27 + 0x38d478) = 0;
                *(undefined8 *)(lVar27 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar27 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar27 + 0x38d480)) {
                FUN_02bcc824(plVar29,pvVar17,lVar28,0x10);
                goto LAB_01a98dc4;
              }
            }
            (**(code **)(*plVar29 + 0x18))(plVar29,pvVar17,lVar28,0x10);
          }
        }
        else {
LAB_01a98dc0:
          pvVar18 = pvVar17;
        }
LAB_01a98dc4:
        FUN_01aa7e58(puVar23,local_120,&local_a8);
        lVar28 = *(long *)(param_1 + 0xb88);
        pvVar17 = (void *)((long)local_120 + 8);
        pvVar32 = pvVar18;
        pvVar35 = pvVar17;
        if (lVar28 != *(long *)(param_1 + 0xb80)) {
          do {
            lVar28 = lVar28 + -8;
            pvVar18 = pvVar32;
            pvVar17 = pvVar35;
            if (local_120 == pvVar32) {
              if (pvVar35 < pvVar33) {
                lVar27 = (long)pvVar33 - (long)pvVar35 >> 3;
                uVar24 = lVar27 + 2;
                if (-1 < lVar27 + 1) {
                  uVar24 = lVar27 + 1;
                }
                __n = (long)pvVar35 - (long)local_120;
                pvVar17 = (void *)((long)pvVar35 + (uVar24 & 0x3ffffffffffffffe) * 4);
                pvVar3 = pvVar17;
                if (__n != 0) {
                  memmove((void *)((long)pvVar17 - __n),local_120,__n);
                  pvVar3 = (void *)((long)pvVar17 - __n);
                }
              }
              else {
                lVar20 = (long)pvVar33 - (long)pvVar32;
                lVar27 = lVar20 >> 2;
                if (lVar20 == 0) {
                  lVar27 = 1;
                }
                pvVar18 = (void *)(**(code **)(*(long *)*puVar23 + 0x10))
                                            ((long *)*puVar23,lVar27 << 3,0x10);
                if (pvVar18 == (void *)0x0) {
                  (**(code **)(*(long *)*puVar23 + 0xb8))();
                }
                pvVar3 = (void *)((long)pvVar18 + (lVar27 + 3U >> 2) * 8);
                pvVar33 = (void *)((long)pvVar18 + lVar27 * 8);
                pvVar17 = pvVar3;
                if (local_120 != pvVar35) {
                  do {
                    FUN_01aa7e58(puVar23,pvVar17,local_120);
                    local_120 = (void *)((long)local_120 + 8);
                    pvVar17 = (void *)((long)pvVar17 + 8);
                  } while (pvVar35 != local_120);
                }
                if (pvVar32 != (void *)0x0) {
                  plVar29 = (long *)*puVar23;
                  uVar24 = (**(code **)(*plVar29 + 0xc0))(plVar29);
                  if ((uVar24 & 1) != 0) {
                    lVar27 = tpidr_el0;
                    if (*(char *)(lVar27 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar27 + 0x38d488) = 1;
                      *(undefined8 *)(lVar27 + 0x38d478) = 0;
                      *(undefined8 *)(lVar27 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar27 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (0 < *(int *)(lVar27 + 0x38d480)) {
                      FUN_02bcc824(plVar29,pvVar32,lVar20,0x10);
                      goto LAB_01a99530;
                    }
                  }
                  (**(code **)(*plVar29 + 0x18))(plVar29,pvVar32,lVar20,0x10);
                }
LAB_01a99530:
              }
              local_120 = pvVar3;
            }
            local_120 = (void *)((long)local_120 - 8);
            FUN_01aa7f30(puVar23,local_120,lVar28);
            pvVar32 = pvVar18;
            pvVar35 = pvVar17;
          } while (lVar28 != *(long *)(param_1 + 0xb80));
        }
        lVar27 = *(long *)(param_1 + 0xb78);
        *(void **)(param_1 + 0xb78) = pvVar18;
        *(void **)(param_1 + 0xb80) = local_120;
        lVar28 = *(long *)(param_1 + 0xb90);
        *(void **)(param_1 + 0xb88) = pvVar17;
        *(void **)(param_1 + 0xb90) = pvVar33;
        if (lVar27 == 0) goto LAB_01a98ce8;
        plVar29 = (long *)*puVar23;
        lVar28 = lVar28 - lVar27;
        uVar24 = (**(code **)(*plVar29 + 0xc0))(plVar29);
        if ((uVar24 & 1) != 0) {
          lVar20 = tpidr_el0;
          if (*(char *)(lVar20 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar20 + 0x38d488) = 1;
            *(undefined8 *)(lVar20 + 0x38d478) = 0;
            *(undefined8 *)(lVar20 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar20 + 0x38d480)) {
            FUN_02bcc824(plVar29,lVar27,lVar28,0x10);
            goto LAB_01a98e8c;
          }
        }
        (**(code **)(*plVar29 + 0x18))(plVar29,lVar27,lVar28,0x10);
      }
LAB_01a98e8c:
    }
    else {
      *(ulong *)(param_1 + 3000) = uVar31 - 0x55;
      local_a8 = (undefined7)*puVar23;
      uStack_a1._0_1_ = (undefined1)((ulong)*puVar23 >> 0x38);
      *(undefined8 **)(param_1 + 0xb80) = puVar23 + 1;
      FUN_01aa77a4(lVar28,&local_a8);
    }
LAB_01a98ce8:
    uVar22 = *(long *)(param_1 + 3000) + *(long *)(param_1 + 0xbc0);
    puVar23 = *(undefined8 **)(param_1 + 0xb80);
    puVar25 = *(undefined8 **)(param_1 + 0xb88);
  }
  iVar37 = -(uint)(fVar75 == 0.0);
  iVar54 = -(uint)(fVar84 == 0.0);
  iVar59 = -(uint)(fVar75 == 0.0);
  iVar64 = -(uint)(fVar84 == 0.0);
  if (puVar25 == puVar23) {
    puVar23 = (undefined8 *)0x0;
  }
  else {
    puVar23 = (undefined8 *)(puVar23[uVar22 / 0x55] + (uVar22 % 0x55) * 0x30);
  }
  uVar87 = *(undefined8 *)(param_1 + 0xbc8);
  auVar74._0_8_ =
       CONCAT17(~(byte)((uint)iVar54 >> 0x18),
                CONCAT16(~(byte)((uint)iVar54 >> 0x10),
                         CONCAT15(~(byte)((uint)iVar54 >> 8),
                                  CONCAT14(~(byte)iVar54,
                                           CONCAT13(~(byte)((uint)iVar37 >> 0x18),
                                                    CONCAT12(~(byte)((uint)iVar37 >> 0x10),
                                                             CONCAT11(~(byte)((uint)iVar37 >> 8),
                                                                      ~(byte)iVar37)))))));
  auVar74[8] = ~(byte)iVar59;
  auVar74[9] = ~(byte)((uint)iVar59 >> 8);
  auVar74[10] = ~(byte)((uint)iVar59 >> 0x10);
  auVar74[0xb] = ~(byte)((uint)iVar59 >> 0x18);
  auVar74[0xc] = ~(byte)iVar64;
  auVar74[0xd] = ~(byte)((uint)iVar64 >> 8);
  auVar74[0xe] = ~(byte)((uint)iVar64 >> 0x10);
  auVar74[0xf] = ~(byte)((uint)iVar64 >> 0x18);
  auVar48._0_8_ = CONCAT44(fVar69 * auVar95._4_4_ * fStack_10c,fVar78 * auVar95._0_4_ * local_110);
  auVar48._8_4_ = fVar96 * auVar95._8_4_ * fStack_108;
  auVar48._12_4_ = fVar68 * auVar95._12_4_ * fStack_104;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    uVar100 = auVar74._8_8_;
    uVar38 = auVar48._8_8_;
    iVar37 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar14 = PTR_DAT_04379528;
    auVar74._8_8_ = uVar100;
    auVar48._8_8_ = uVar38;
    if (iVar37 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar14,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  auVar49._0_8_ =
       CONCAT17(auVar48[7] & auVar74[7],
                CONCAT16(auVar48[6] & auVar74[6],
                         CONCAT15(auVar48[5] & auVar74[5],
                                  CONCAT14(auVar48[4] & auVar74[4],
                                           CONCAT13(auVar48[3] & auVar74[3],
                                                    CONCAT12(auVar48[2] & auVar74[2],
                                                             CONCAT11(auVar48[1] & auVar74[1],
                                                                      auVar48[0] & auVar74[0])))))))
  ;
  auVar49[8] = auVar48[8] & auVar74[8];
  auVar49[9] = auVar48[9] & auVar74[9];
  auVar49[10] = auVar48[10] & auVar74[10];
  auVar49[0xb] = auVar48[0xb] & auVar74[0xb];
  auVar49[0xc] = auVar48[0xc] & auVar74[0xc];
  auVar49[0xd] = auVar48[0xd] & auVar74[0xd];
  auVar49[0xe] = auVar48[0xe] & auVar74[0xe];
  auVar49[0xf] = auVar48[0xf] & auVar74[0xf];
  lVar28 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar28 == 0) {
    *(float *)(puVar23 + 4) = fVar104;
    *(bool *)((long)puVar23 + 0x24) = bVar34;
    puVar23[1] = auVar94._8_8_;
    *puVar23 = auVar88._0_8_;
    puVar23[3] = auVar49._8_8_;
    puVar23[2] = auVar49._0_8_;
    *(undefined4 *)((long)puVar23 + 0x2c) = uStack_a1;
    *(ulong *)((long)puVar23 + 0x25) = CONCAT17((undefined1)uStack_a1,local_a8);
  }
  else {
    if (0xf < *(ulong *)(lVar28 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = uVar87;
    *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
    puVar23[1] = auVar94._8_8_;
    *puVar23 = auVar88._0_8_;
    *(float *)(puVar23 + 4) = fVar104;
    *(bool *)((long)puVar23 + 0x24) = bVar34;
    puVar23[3] = auVar49._8_8_;
    puVar23[2] = auVar49._0_8_;
    *(undefined4 *)((long)puVar23 + 0x2c) = uStack_a1;
    *(ulong *)((long)puVar23 + 0x25) = CONCAT17((undefined1)uStack_a1,local_a8);
    *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
  }
  lVar28 = *(long *)(param_1 + 0xbc0);
  uVar24 = lVar28 + 1;
  *(ulong *)(param_1 + 0xbc0) = uVar24;
  if (uVar24 <= uVar26) {
    return;
  }
  *(long *)(param_1 + 0xbc0) = lVar28;
  uVar24 = *(long *)(param_1 + 3000) + 1;
  *(ulong *)(param_1 + 3000) = uVar24;
  if (uVar24 < 0xaa) {
    return;
  }
  plVar29 = *(long **)(param_1 + 0xbc8);
  uVar87 = **(undefined8 **)(param_1 + 0xb80);
  uVar24 = (**(code **)(*plVar29 + 0xc0))(plVar29);
  if ((uVar24 & 1) != 0) {
    lVar28 = tpidr_el0;
    if (*(char *)(lVar28 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar28 + 0x38d488) = 1;
      *(undefined8 *)(lVar28 + 0x38d478) = 0;
      *(undefined8 *)(lVar28 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar28 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar28 + 0x38d480)) {
      FUN_02bcc824(plVar29,uVar87,0xff0,0x10);
      goto LAB_01a9907c;
    }
  }
  (**(code **)(*plVar29 + 0x18))(plVar29,uVar87,0xff0,0x10);
LAB_01a9907c:
  *(long *)(param_1 + 0xb80) = *(long *)(param_1 + 0xb80) + 8;
  *(long *)(param_1 + 3000) = *(long *)(param_1 + 3000) + -0x55;
  return;
}


