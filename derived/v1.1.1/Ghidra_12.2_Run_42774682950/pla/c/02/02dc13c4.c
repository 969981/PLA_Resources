/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dc13c4; name: FUN_02dc13c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02dc13c4(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined2 uVar11;
  ushort uVar12;
  float fVar13;
  bool bVar14;
  bool bVar15;
  short sVar16;
  uint uVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  long *plVar26;
  undefined4 *puVar27;
  uint uVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  undefined1 auVar33 [16];
  float fVar35;
  float extraout_var_01;
  float fVar36;
  undefined1 auVar34 [16];
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  byte bVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  byte bVar64;
  byte bVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  byte bVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  byte bVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  byte bVar76;
  byte bVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  byte bVar81;
  byte bVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  byte bVar85;
  byte bVar86;
  float fVar87;
  float fVar93;
  int iVar95;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  int iVar94;
  int iVar96;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 uVar102;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_8c;
  float fStack_84;
  undefined1 auStack_70 [8];
  long *local_68;
  
  uVar83 = param_2[0xf];
  uVar78 = param_2[0xe];
  uVar73 = param_2[0xd];
  uVar70 = param_2[0xc];
  uVar74 = param_2[0xb];
  uVar66 = param_2[10];
  uVar62 = param_2[9];
  uVar59 = param_2[8];
  uVar80 = param_2[7];
  uVar75 = param_2[6];
  uVar67 = param_2[5];
  uVar63 = param_2[4];
  uVar54 = param_2[3];
  uVar51 = param_2[2];
  uVar48 = param_2[1];
  uVar45 = param_2[0];
  if (*(char *)(param_5 + 0x8e) != '\0') {
    return;
  }
  lVar20 = *(long *)(param_5 + 0x98);
  if (lVar20 != 0) goto LAB_02dc1508;
  lVar21 = *(long *)(*(long *)(param_5 + 0x80) + 0x58);
  lVar20 = lVar21 + 0x1a8;
  if (*(char *)(lVar21 + 0x304) != '\0') {
    lVar20 = lVar21 + 0x1f0;
  }
  FUN_00956dac(&local_68,lVar20);
  if (local_68 == (long *)0x0) {
LAB_02dc1500:
    lVar20 = *(long *)(param_5 + 0x98);
  }
  else {
    lVar20 = FUN_00a3e9dc(local_68 + 0x1e,auStack_70);
    if (local_68 != (long *)0x0) {
      lVar21 = local_68[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar29 = *piVar1;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = iVar29 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar29 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    if ((lVar20 == 0) || (plVar26 = *(long **)(lVar20 + 0x1f0), plVar26 == (long *)0x0))
    goto LAB_02dc1500;
    plVar2 = plVar26 + 10;
    do {
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar14) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (((*PTR_DAT_0437a570 & 1) == 0) &&
       (iVar29 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar29 != 0)) {
      FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a570);
    }
    plVar18 = (long *)PTR_DAT_0437a578;
    if (plVar26[0x19] != 0) {
      plVar18 = (long *)(plVar26[0x19] + 0x88);
    }
    lVar20 = *plVar18;
    if (lVar20 != 0) {
      piVar1 = (int *)(lVar20 + 0x50);
      do {
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar18 = *(long **)(param_5 + 0x98);
    *(long *)(param_5 + 0x98) = lVar20;
    if (plVar18 != (long *)0x0) {
      plVar3 = plVar18 + 10;
      do {
        iVar29 = (int)*plVar3 + -1;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar14) {
          *(int *)plVar3 = iVar29;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
    }
    do {
      iVar29 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar14) {
        *(int *)plVar2 = iVar29;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar29 != 0) goto LAB_02dc1500;
    (**(code **)(*plVar26 + 0x10))(plVar26);
    lVar20 = *(long *)(param_5 + 0x98);
  }
  if (lVar20 == 0) {
    return;
  }
LAB_02dc1508:
  puVar22 = *(undefined8 **)(lVar20 + 0x58);
  puVar5 = *(undefined8 **)(lVar20 + 0x60);
  if (puVar22 != puVar5) {
    do {
      sVar16 = FUN_02b6f370(*puVar22,param_5 + 0xa0);
      if (-1 < sVar16) {
        uVar23 = (uint)*(ushort *)((long)puVar22 + 10) + (int)sVar16;
        goto LAB_02dc1548;
      }
      puVar22 = puVar22 + 2;
    } while (puVar5 != puVar22);
  }
  uVar23 = 0xffff;
LAB_02dc1548:
  puVar22 = *(undefined8 **)(*(long *)(param_5 + 0x98) + 0x58);
  puVar5 = *(undefined8 **)(*(long *)(param_5 + 0x98) + 0x60);
  if (puVar22 != puVar5) {
    do {
      sVar16 = FUN_02b6f370(*puVar22,param_5 + 0xc0);
      if (-1 < sVar16) {
        uVar25 = (uint)*(ushort *)((long)puVar22 + 10) + (int)sVar16;
        goto LAB_02dc158c;
      }
      puVar22 = puVar22 + 2;
    } while (puVar5 != puVar22);
  }
  uVar25 = 0xffff;
LAB_02dc158c:
  uVar12 = (ushort)uVar25;
  if ((short)(uVar12 | (ushort)uVar23) < 0) {
    *(undefined1 *)(param_5 + 0x8d) = 0;
  }
  else {
    iVar29 = 1;
    *(undefined4 *)(param_5 + 0x1df0) = 1;
    if ((uVar25 & 0xffff) != (uVar23 & 0xffff)) {
      uVar19 = *(undefined8 *)(param_5 + 0x98);
      *(undefined4 *)(param_5 + 0x1df0) = 2;
      uVar28 = uVar25;
      while( true ) {
        uVar17 = FUN_02b68b4c(uVar19,uVar28);
        uVar28 = (uint)(short)uVar17;
        if (((int)uVar28 < 0) || ((uVar17 & 0xffff) == (uVar23 & 0xffff))) break;
        uVar19 = *(undefined8 *)(param_5 + 0x98);
        *(int *)(param_5 + 0x1df0) = *(int *)(param_5 + 0x1df0) + 1;
      }
      if ((uVar17 & 0xffff) != (uVar23 & 0xffff)) {
        return;
      }
      iVar29 = *(int *)(param_5 + 0x1df0);
      if (0x3f < iVar29) {
        return;
      }
    }
    pbVar4 = (byte *)(param_5 + 0x2600);
    if ((-1 < (short)uVar12) && (*(char *)(param_5 + 0x2601) != '\0')) {
      uVar28 = uVar25;
      do {
        iVar29 = iVar29 + -1;
        FUN_02b6b088(*(undefined8 *)(param_5 + 0x98),uVar28);
        if ((iVar29 == 0) && (*(char *)(param_5 + 0x90) != '\0')) {
          FUN_02b6b46c(*(undefined8 *)(param_5 + 0x98),uVar28,param_5 + 0x130);
        }
        if ((uVar28 & 0xffff) == (uVar23 & 0xffff)) break;
        sVar16 = FUN_02b68b4c(*(undefined8 *)(param_5 + 0x98),uVar28);
        uVar28 = (uint)sVar16;
      } while (-1 < (int)uVar28);
    }
    FUN_028a5cd4(&local_68,*(undefined8 *)(param_5 + 0x80));
    auVar33 = (**(code **)(*local_68 + 0x40))(local_68);
    fVar35 = (float)CONCAT13(uVar74,CONCAT12(uVar66,CONCAT11(uVar62,uVar59)));
    fVar32 = (float)CONCAT13(uVar54,CONCAT12(uVar51,CONCAT11(uVar48,uVar45)));
    if (*(char *)(param_5 + 0x2603) == '\0') {
      auVar98._0_12_ = param_4._0_12_;
      auVar98._12_4_ = 0x3f800000;
      uVar102 = auVar98._8_8_;
      uVar19 = param_4._0_8_;
    }
    else {
      (**(code **)(*local_68 + 0x40))(local_68);
      uVar102 = _UNK_0388a138;
      uVar19 = _DAT_0388a130;
      *(long *)(param_5 + 0xe8) = param_4._8_8_;
      *(long *)(param_5 + 0xe0) = param_4._0_8_;
    }
    if (-1 < (short)uVar12) {
      iVar29 = *(int *)(param_5 + 0x1df0);
      do {
        iVar29 = iVar29 + -1;
        lVar21 = param_5 + (long)iVar29 * 0x70;
        *(int *)(lVar21 + 0x150) = (int)(short)uVar25;
        lVar20 = FUN_02b6962c(*(undefined8 *)(param_5 + 0x98),uVar25);
        fVar31 = *(float *)(lVar20 + 0x30);
        fVar87 = *(float *)(lVar20 + 0x34);
        fVar93 = *(float *)(lVar20 + 0x38);
        fVar13 = *(float *)(lVar20 + 0x3c);
        fStack_8c = (float)(CONCAT17(uVar80,CONCAT16(uVar75,CONCAT15(uVar67,CONCAT14(uVar63,fVar32))
                                                    )) >> 0x20);
        fStack_84 = (float)(CONCAT17(uVar83,CONCAT16(uVar78,CONCAT15(uVar73,CONCAT14(uVar70,fVar35))
                                                    )) >> 0x20);
        local_a0 = param_3._0_4_;
        fStack_9c = param_3._4_4_;
        fStack_98 = param_3._8_4_;
        fStack_94 = param_3._12_4_;
        local_b0 = (float)uVar19;
        fStack_ac = (float)((ulong)uVar19 >> 0x20);
        fStack_a8 = (float)uVar102;
        fStack_a4 = (float)((ulong)uVar102 >> 0x20);
        fVar30 = auVar33._0_4_ * fVar31 + fVar32 * fVar87 + local_a0 * fVar93 + local_b0 * fVar13;
        fVar36 = auVar33._4_4_ * fVar31 + fStack_8c * fVar87 + fStack_9c * fVar93 +
                 fStack_ac * fVar13;
        uVar45 = SUB41(fVar36,0);
        uVar48 = (undefined1)((uint)fVar36 >> 8);
        uVar51 = (undefined1)((uint)fVar36 >> 0x10);
        uVar54 = (undefined1)((uint)fVar36 >> 0x18);
        fVar36 = auVar33._8_4_ * fVar31 + fVar35 * fVar87 + fStack_98 * fVar93 + fStack_a8 * fVar13;
        uVar59 = (undefined1)((uint)fVar36 >> 8);
        uVar62 = (undefined1)((uint)fVar36 >> 0x10);
        uVar66 = (undefined1)((uint)fVar36 >> 0x18);
        fVar31 = auVar33._12_4_ * fVar31 + fStack_84 * fVar87 + fStack_94 * fVar93 +
                 fStack_a4 * fVar13;
        uVar74 = (undefined1)((uint)fVar31 >> 8);
        uVar79 = (undefined1)((uint)fVar31 >> 0x10);
        uVar84 = (undefined1)((uint)fVar31 >> 0x18);
        auVar9[4] = uVar45;
        auVar9._0_4_ = fVar30;
        auVar9[5] = uVar48;
        auVar9[6] = uVar51;
        auVar9[7] = uVar54;
        auVar9[8] = SUB41(fVar36,0);
        auVar9[9] = uVar59;
        auVar9[10] = uVar62;
        auVar9[0xb] = uVar66;
        auVar9[0xc] = SUB41(fVar31,0);
        auVar9[0xd] = uVar74;
        auVar9[0xe] = uVar79;
        auVar9[0xf] = uVar84;
        auVar10[4] = uVar45;
        auVar10._0_4_ = fVar30;
        auVar10[5] = uVar48;
        auVar10[6] = uVar51;
        auVar10[7] = uVar54;
        auVar10[8] = SUB41(fVar36,0);
        auVar10[9] = uVar59;
        auVar10[10] = uVar62;
        auVar10[0xb] = uVar66;
        auVar10[0xc] = SUB41(fVar31,0);
        auVar10[0xd] = uVar74;
        auVar10[0xe] = uVar79;
        auVar10[0xf] = uVar84;
        auVar98 = NEON_ext(auVar9,auVar10,8,1);
        *(ulong *)(lVar21 + 0xf8) = (ulong)auVar98._0_4_;
        *(ulong *)(lVar21 + 0xf0) =
             CONCAT17(uVar54,CONCAT16(uVar51,CONCAT15(uVar48,CONCAT14(uVar45,fVar30))));
        auVar98 = FUN_02b694d4(*(undefined8 *)(param_5 + 0x98),uVar25);
        *(long *)(lVar21 + 0x128) = auVar98._8_8_;
        *(long *)(lVar21 + 0x120) = auVar98._0_8_;
        auVar98 = FUN_02b6937c(*(undefined8 *)(param_5 + 0x98),uVar25);
        lVar20 = param_5 + (long)iVar29 * 0x20;
        *(long *)(lVar21 + 0x138) = auVar98._8_8_;
        *(long *)(lVar21 + 0x130) = auVar98._0_8_;
        *(undefined8 *)(lVar20 + 0x1e08) = *(undefined8 *)(lVar21 + 0x128);
        *(undefined8 *)(lVar20 + 0x1e00) = *(undefined8 *)(lVar21 + 0x120);
        *(undefined8 *)(lVar20 + 0x1e18) = *(undefined8 *)(lVar21 + 0x138);
        *(undefined8 *)(lVar20 + 0x1e10) = *(undefined8 *)(lVar21 + 0x130);
        if ((uVar25 & 0xffff) == (uVar23 & 0xffff)) break;
        sVar16 = FUN_02b68b4c(*(undefined8 *)(param_5 + 0x98),uVar25);
        uVar25 = (uint)sVar16;
      } while (-1 < (int)uVar25);
    }
    if (local_68 != (long *)0x0) {
      lVar20 = local_68[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar29 = *piVar1;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = iVar29 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar29 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))(local_68);
      }
    }
    FUN_02dc1ba4(param_5);
    iVar29 = *(int *)(param_5 + 0x1df0);
    if (1 < iVar29) {
      lVar20 = 0;
      puVar27 = (undefined4 *)(param_5 + 0x1c0);
      do {
        lVar21 = lVar20 * 4;
        lVar20 = lVar20 + 1;
        if (0.001 < *(float *)(param_5 + 0x1cf0 + lVar21)) {
          FUN_02b694d4(*(undefined8 *)(param_5 + 0x98),*puVar27);
          fVar32 = extraout_s0 * extraout_s0;
          fVar35 = extraout_var * extraout_var;
          uVar45 = (undefined1)((uint)fVar35 >> 8);
          uVar48 = (undefined1)((uint)fVar35 >> 0x10);
          uVar51 = (undefined1)((uint)fVar35 >> 0x18);
          fVar30 = extraout_var_00 * extraout_var_00;
          uVar54 = (undefined1)((uint)fVar30 >> 8);
          uVar63 = (undefined1)((uint)fVar30 >> 0x10);
          uVar67 = (undefined1)((uint)fVar30 >> 0x18);
          fVar36 = extraout_var_01 * extraout_var_01;
          uVar75 = (undefined1)((uint)fVar36 >> 8);
          uVar80 = (undefined1)((uint)fVar36 >> 0x10);
          uVar59 = (undefined1)((uint)fVar36 >> 0x18);
          auVar33[4] = SUB41(fVar35,0);
          auVar33._0_4_ = fVar32;
          auVar33[5] = uVar45;
          auVar33[6] = uVar48;
          auVar33[7] = uVar51;
          auVar33[8] = SUB41(fVar30,0);
          auVar33[9] = uVar54;
          auVar33[10] = uVar63;
          auVar33[0xb] = uVar67;
          auVar33[0xc] = SUB41(fVar36,0);
          auVar33[0xd] = uVar75;
          auVar33[0xe] = uVar80;
          auVar33[0xf] = uVar59;
          auVar7[4] = SUB41(fVar35,0);
          auVar7._0_4_ = fVar32;
          auVar7[5] = uVar45;
          auVar7[6] = uVar48;
          auVar7[7] = uVar51;
          auVar7[8] = SUB41(fVar30,0);
          auVar7[9] = uVar54;
          auVar7[10] = uVar63;
          auVar7[0xb] = uVar67;
          auVar7[0xc] = SUB41(fVar36,0);
          auVar7[0xd] = uVar75;
          auVar7[0xe] = uVar80;
          auVar7[0xf] = uVar59;
          auVar33 = NEON_ext(auVar33,auVar7,8,1);
          fVar32 = auVar33._0_4_ + fVar32;
          fVar35 = auVar33._4_4_ + fVar35;
          fVar30 = fVar32 + fVar35;
          fVar32 = fVar32 + fVar35;
          uVar45 = SUB41(fVar32,0);
          uVar48 = (undefined1)((uint)fVar32 >> 8);
          uVar51 = (undefined1)((uint)fVar32 >> 0x10);
          uVar54 = (undefined1)((uint)fVar32 >> 0x18);
          auVar8[4] = uVar45;
          auVar8._0_4_ = fVar30;
          auVar8[5] = uVar48;
          auVar8[6] = uVar51;
          auVar8[7] = uVar54;
          auVar8[8] = SUB41(fVar30,0);
          auVar8[9] = (char)((uint)fVar30 >> 8);
          auVar8[10] = (char)((uint)fVar30 >> 0x10);
          auVar8[0xb] = (char)((uint)fVar30 >> 0x18);
          auVar8[0xc] = uVar45;
          auVar8[0xd] = uVar48;
          auVar8[0xe] = uVar51;
          auVar8[0xf] = uVar54;
          auVar33 = NEON_frsqrte(auVar8,4);
          auVar97._0_4_ = auVar33._0_4_ * fVar30;
          auVar97._4_4_ = auVar33._4_4_ * fVar32;
          auVar97._8_4_ = auVar33._8_4_ * fVar30;
          uVar11 = (undefined2)(CONCAT15(uVar48,CONCAT14(uVar45,fVar30)) >> 0x20);
          auVar97._12_4_ = auVar33._12_4_ * (float)CONCAT13(uVar54,CONCAT12(uVar51,uVar11));
          auVar98 = NEON_frsqrts(auVar33,auVar97,4);
          auVar88._0_4_ = auVar33._0_4_ * auVar98._0_4_;
          auVar88._4_4_ = auVar33._4_4_ * auVar98._4_4_;
          auVar88._8_4_ = auVar33._8_4_ * auVar98._8_4_;
          auVar88._12_4_ = auVar33._12_4_ * auVar98._12_4_;
          auVar99._0_4_ = fVar30 * auVar88._0_4_;
          auVar99._4_4_ = fVar32 * auVar88._4_4_;
          auVar99._8_4_ = fVar30 * auVar88._8_4_;
          auVar99._12_4_ = (float)CONCAT13(uVar54,CONCAT12(uVar51,uVar11)) * auVar88._12_4_;
          iVar29 = -(uint)(fVar30 == 0.0);
          iVar94 = -(uint)(fVar32 == 0.0);
          iVar95 = -(uint)(fVar30 == 0.0);
          iVar96 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar51,uVar11)) == 0.0);
          auVar33 = NEON_frsqrts(auVar88,auVar99,4);
          fVar32 = extraout_s0 * auVar88._0_4_ * auVar33._0_4_;
          fVar35 = extraout_var * auVar88._4_4_ * auVar33._4_4_;
          fVar30 = extraout_var_00 * auVar88._8_4_ * auVar33._8_4_;
          fVar36 = extraout_var_01 * auVar88._12_4_ * auVar33._12_4_;
          auVar34._0_8_ =
               CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18),
                        CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10),
                                 CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar94 >> 8),
                                          CONCAT14(SUB41(fVar35,0) & ~(byte)iVar94,
                                                   CONCAT13((byte)((uint)fVar32 >> 0x18) &
                                                            ~(byte)((uint)iVar29 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                                                     ~(byte)((uint)iVar29 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar32 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar29
                                                                                     >> 8),
                                                                              SUB41(fVar32,0) &
                                                                              ~(byte)iVar29)))))));
          auVar34[8] = SUB41(fVar30,0) & ~(byte)iVar95;
          auVar34[9] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar95 >> 8);
          auVar34[10] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
          auVar34[0xb] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
          auVar34[0xc] = SUB41(fVar36,0) & ~(byte)iVar96;
          auVar34[0xd] = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar96 >> 8);
          auVar34[0xe] = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
          auVar34[0xf] = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
          *(long *)(puVar27 + -0x1e) = auVar34._8_8_;
          *(undefined8 *)(puVar27 + -0x20) = auVar34._0_8_;
          iVar29 = *(int *)(param_5 + 0x1df0);
        }
        puVar27 = puVar27 + 0x1c;
      } while (lVar20 < iVar29 + -1);
    }
    bVar37 = (byte)_DAT_03888d10;
    bVar39 = (byte)((ulong)_DAT_03888d10 >> 8);
    bVar41 = (byte)((ulong)_DAT_03888d10 >> 0x10);
    bVar43 = (byte)((ulong)_DAT_03888d10 >> 0x18);
    bVar46 = (byte)((ulong)_DAT_03888d10 >> 0x20);
    bVar49 = (byte)((ulong)_DAT_03888d10 >> 0x28);
    bVar52 = (byte)((ulong)_DAT_03888d10 >> 0x30);
    bVar55 = (byte)((ulong)_DAT_03888d10 >> 0x38);
    bVar57 = (byte)_UNK_03888d18;
    bVar60 = (byte)((ulong)_UNK_03888d18 >> 8);
    bVar64 = (byte)((ulong)_UNK_03888d18 >> 0x10);
    bVar68 = (byte)((ulong)_UNK_03888d18 >> 0x18);
    bVar71 = (byte)((ulong)_UNK_03888d18 >> 0x20);
    bVar76 = (byte)((ulong)_UNK_03888d18 >> 0x28);
    bVar81 = (byte)((ulong)_UNK_03888d18 >> 0x30);
    bVar85 = (byte)((ulong)_UNK_03888d18 >> 0x38);
    if (*pbVar4 == 0) {
      if (1 < iVar29) {
        uVar23 = 0;
        puVar22 = (undefined8 *)(param_5 + 0x170);
        lVar20 = 0x73d;
        lVar21 = 0x100000000;
        while( true ) {
          lVar24 = 0x100000000;
          if (uVar23 == 0) {
            lVar24 = -0x100000000;
          }
          lVar24 = lVar21 + lVar24 >> 0x20;
          if ((0x3f < ((int)lVar20 - (uVar23 ^ 1)) - 0x73c) ||
             (*(float *)(param_5 + (ulong)(byte)(uVar23 ^ 1) * -4 + lVar20 * 4) < 0.001)) {
            lVar24 = param_5 + lVar24 * 0x70;
            puVar22[1] = *(undefined8 *)(lVar24 + 0x108);
            *puVar22 = *(undefined8 *)(lVar24 + 0x100);
          }
          else {
            lVar24 = param_5 + lVar24 * 0x70;
            uVar102 = *(undefined8 *)(lVar24 + 0xf8);
            uVar19 = *(undefined8 *)(lVar24 + 0xf0);
            fVar32 = (float)uVar19 - *(float *)(puVar22 + -2);
            fVar35 = (float)((ulong)uVar19 >> 0x20) - *(float *)((long)puVar22 + -0xc);
            fVar30 = (float)uVar102 - *(float *)(puVar22 + -1);
            fVar36 = (float)((ulong)uVar102 >> 0x20) - *(float *)((long)puVar22 + -4);
            bVar14 = false;
            if ((ABS(fVar32) < 0.001) && (bVar14 = false, !NAN(ABS(fVar35)))) {
              bVar14 = ABS(fVar35) < 0.001;
            }
            bVar15 = false;
            if ((bVar14) && (bVar15 = false, !NAN(ABS(fVar30)))) {
              bVar15 = ABS(fVar30) < 0.001;
            }
            bVar38 = bVar37;
            bVar40 = bVar39;
            bVar42 = bVar41;
            bVar44 = bVar43;
            bVar47 = bVar46;
            bVar50 = bVar49;
            bVar53 = bVar52;
            bVar56 = bVar55;
            bVar58 = bVar57;
            bVar61 = bVar60;
            bVar65 = bVar64;
            bVar69 = bVar68;
            bVar72 = bVar71;
            bVar77 = bVar76;
            bVar82 = bVar81;
            bVar86 = bVar85;
            if (!bVar15) {
              auVar91._0_4_ = fVar32 * fVar32;
              auVar91._4_4_ = fVar35 * fVar35;
              auVar91._8_4_ = fVar30 * fVar30;
              auVar91._12_4_ = fVar36 * fVar36;
              auVar33 = NEON_ext(auVar91,auVar91,8,1);
              fVar87 = auVar33._0_4_ + auVar91._0_4_;
              fVar93 = auVar33._4_4_ + auVar91._4_4_;
              fVar31 = fVar87 + fVar93;
              fVar87 = fVar87 + fVar93;
              if (fVar31 != 0.0) {
                auVar92._8_8_ = CONCAT44(fVar87,fVar31);
                auVar92._0_8_ = CONCAT44(fVar87,fVar31);
                auVar33 = NEON_frsqrte(auVar92,4);
                auVar105._0_4_ = auVar33._0_4_ * fVar31;
                auVar105._4_4_ = auVar33._4_4_ * fVar87;
                auVar105._8_4_ = auVar33._8_4_ * fVar31;
                auVar105._12_4_ = auVar33._12_4_ * fVar87;
                auVar98 = NEON_frsqrts(auVar33,auVar105,4);
                auVar101._0_4_ = auVar33._0_4_ * auVar98._0_4_;
                auVar101._4_4_ = auVar33._4_4_ * auVar98._4_4_;
                auVar101._8_4_ = auVar33._8_4_ * auVar98._8_4_;
                auVar101._12_4_ = auVar33._12_4_ * auVar98._12_4_;
                auVar106._0_4_ = fVar31 * auVar101._0_4_;
                auVar106._4_4_ = fVar87 * auVar101._4_4_;
                auVar106._8_4_ = fVar31 * auVar101._8_4_;
                auVar106._12_4_ = fVar87 * auVar101._12_4_;
                iVar29 = -(uint)(fVar31 == 0.0);
                iVar94 = -(uint)(fVar87 == 0.0);
                iVar95 = -(uint)(fVar31 == 0.0);
                iVar96 = -(uint)(fVar87 == 0.0);
                auVar33 = NEON_frsqrts(auVar101,auVar106,4);
                fVar32 = fVar32 * auVar101._0_4_ * auVar33._0_4_;
                fVar35 = fVar35 * auVar101._4_4_ * auVar33._4_4_;
                fVar30 = fVar30 * auVar101._8_4_ * auVar33._8_4_;
                fVar36 = fVar36 * auVar101._12_4_ * auVar33._12_4_;
                bVar38 = SUB41(fVar32,0) & ~(byte)iVar29;
                bVar40 = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar29 >> 8);
                bVar42 = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
                bVar44 = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
                bVar47 = SUB41(fVar35,0) & ~(byte)iVar94;
                bVar50 = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar94 >> 8);
                bVar53 = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
                bVar56 = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
                bVar58 = SUB41(fVar30,0) & ~(byte)iVar95;
                bVar61 = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar95 >> 8);
                bVar65 = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
                bVar69 = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
                bVar72 = SUB41(fVar36,0) & ~(byte)iVar96;
                bVar77 = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar96 >> 8);
                bVar82 = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
                bVar86 = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
              }
            }
            puVar22[1] = CONCAT17(bVar86,CONCAT16(bVar82,CONCAT15(bVar77,CONCAT14(bVar72,CONCAT13(
                                                  bVar69,CONCAT12(bVar65,CONCAT11(bVar61,bVar58)))))
                                                 ));
            *puVar22 = CONCAT17(bVar56,CONCAT16(bVar53,CONCAT15(bVar50,CONCAT14(bVar47,CONCAT13(
                                                  bVar44,CONCAT12(bVar42,CONCAT11(bVar40,bVar38)))))
                                               ));
          }
          if ((long)*(int *)(param_5 + 0x1df0) <= lVar20 + -0x73b) break;
          uVar23 = (uint)*pbVar4;
          puVar22 = puVar22 + 0xe;
          lVar20 = lVar20 + 1;
          lVar21 = lVar21 + 0x100000000;
        }
      }
    }
    else {
      uVar23 = iVar29 - 2;
      if (-1 < (int)uVar23) {
        lVar21 = (long)(int)uVar23;
        lVar20 = (ulong)uVar23 << 0x20;
        bVar38 = 1;
        puVar22 = (undefined8 *)(param_5 + (long)(int)uVar23 * 0x70 + 0x100);
        while( true ) {
          uVar25 = uVar23 - (bVar38 ^ 1);
          lVar24 = 0x100000000;
          if (bVar38 == 0) {
            lVar24 = -0x100000000;
          }
          lVar24 = lVar20 + lVar24 >> 0x20;
          if ((0x3f < uVar25) || (*(float *)(param_5 + (long)(int)uVar25 * 4 + 0x1cf0) < 0.001)) {
            lVar24 = param_5 + lVar24 * 0x70;
            puVar22[1] = *(undefined8 *)(lVar24 + 0x108);
            *puVar22 = *(undefined8 *)(lVar24 + 0x100);
          }
          else {
            lVar24 = param_5 + lVar24 * 0x70;
            uVar102 = *(undefined8 *)(lVar24 + 0xf8);
            uVar19 = *(undefined8 *)(lVar24 + 0xf0);
            fVar32 = (float)uVar19 - *(float *)(puVar22 + -2);
            fVar35 = (float)((ulong)uVar19 >> 0x20) - *(float *)((long)puVar22 + -0xc);
            fVar30 = (float)uVar102 - *(float *)(puVar22 + -1);
            fVar36 = (float)((ulong)uVar102 >> 0x20) - *(float *)((long)puVar22 + -4);
            bVar14 = false;
            if ((ABS(fVar32) < 0.001) && (bVar14 = false, !NAN(ABS(fVar35)))) {
              bVar14 = ABS(fVar35) < 0.001;
            }
            bVar15 = false;
            if ((bVar14) && (bVar15 = false, !NAN(ABS(fVar30)))) {
              bVar15 = ABS(fVar30) < 0.001;
            }
            bVar38 = bVar37;
            bVar40 = bVar39;
            bVar42 = bVar41;
            bVar44 = bVar43;
            bVar47 = bVar46;
            bVar50 = bVar49;
            bVar53 = bVar52;
            bVar56 = bVar55;
            bVar58 = bVar57;
            bVar61 = bVar60;
            bVar65 = bVar64;
            bVar69 = bVar68;
            bVar72 = bVar71;
            bVar77 = bVar76;
            bVar82 = bVar81;
            bVar86 = bVar85;
            if (!bVar15) {
              auVar89._0_4_ = fVar32 * fVar32;
              auVar89._4_4_ = fVar35 * fVar35;
              auVar89._8_4_ = fVar30 * fVar30;
              auVar89._12_4_ = fVar36 * fVar36;
              auVar33 = NEON_ext(auVar89,auVar89,8,1);
              fVar87 = auVar33._0_4_ + auVar89._0_4_;
              fVar93 = auVar33._4_4_ + auVar89._4_4_;
              fVar31 = fVar87 + fVar93;
              fVar87 = fVar87 + fVar93;
              if (fVar31 != 0.0) {
                auVar90._8_8_ = CONCAT44(fVar87,fVar31);
                auVar90._0_8_ = CONCAT44(fVar87,fVar31);
                auVar33 = NEON_frsqrte(auVar90,4);
                auVar103._0_4_ = auVar33._0_4_ * fVar31;
                auVar103._4_4_ = auVar33._4_4_ * fVar87;
                auVar103._8_4_ = auVar33._8_4_ * fVar31;
                auVar103._12_4_ = auVar33._12_4_ * fVar87;
                auVar98 = NEON_frsqrts(auVar33,auVar103,4);
                auVar100._0_4_ = auVar33._0_4_ * auVar98._0_4_;
                auVar100._4_4_ = auVar33._4_4_ * auVar98._4_4_;
                auVar100._8_4_ = auVar33._8_4_ * auVar98._8_4_;
                auVar100._12_4_ = auVar33._12_4_ * auVar98._12_4_;
                auVar104._0_4_ = fVar31 * auVar100._0_4_;
                auVar104._4_4_ = fVar87 * auVar100._4_4_;
                auVar104._8_4_ = fVar31 * auVar100._8_4_;
                auVar104._12_4_ = fVar87 * auVar100._12_4_;
                iVar29 = -(uint)(fVar31 == 0.0);
                iVar94 = -(uint)(fVar87 == 0.0);
                iVar95 = -(uint)(fVar31 == 0.0);
                iVar96 = -(uint)(fVar87 == 0.0);
                auVar33 = NEON_frsqrts(auVar100,auVar104,4);
                fVar32 = fVar32 * auVar100._0_4_ * auVar33._0_4_;
                fVar35 = fVar35 * auVar100._4_4_ * auVar33._4_4_;
                fVar30 = fVar30 * auVar100._8_4_ * auVar33._8_4_;
                fVar36 = fVar36 * auVar100._12_4_ * auVar33._12_4_;
                bVar38 = SUB41(fVar32,0) & ~(byte)iVar29;
                bVar40 = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar29 >> 8);
                bVar42 = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
                bVar44 = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
                bVar47 = SUB41(fVar35,0) & ~(byte)iVar94;
                bVar50 = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar94 >> 8);
                bVar53 = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
                bVar56 = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
                bVar58 = SUB41(fVar30,0) & ~(byte)iVar95;
                bVar61 = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar95 >> 8);
                bVar65 = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
                bVar69 = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
                bVar72 = SUB41(fVar36,0) & ~(byte)iVar96;
                bVar77 = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar96 >> 8);
                bVar82 = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
                bVar86 = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
              }
            }
            puVar22[1] = CONCAT17(bVar86,CONCAT16(bVar82,CONCAT15(bVar77,CONCAT14(bVar72,CONCAT13(
                                                  bVar69,CONCAT12(bVar65,CONCAT11(bVar61,bVar58)))))
                                                 ));
            *puVar22 = CONCAT17(bVar56,CONCAT16(bVar53,CONCAT15(bVar50,CONCAT14(bVar47,CONCAT13(
                                                  bVar44,CONCAT12(bVar42,CONCAT11(bVar40,bVar38)))))
                                               ));
          }
          if (lVar21 < 1) break;
          lVar21 = lVar21 + -1;
          bVar38 = *pbVar4;
          puVar22 = puVar22 + -0xe;
          lVar20 = lVar20 + -0x100000000;
          uVar23 = uVar23 - 1;
        }
      }
    }
    FUN_02dc1d40(param_5);
    *(undefined1 *)(param_5 + 0x8e) = 1;
  }
  return;
}


