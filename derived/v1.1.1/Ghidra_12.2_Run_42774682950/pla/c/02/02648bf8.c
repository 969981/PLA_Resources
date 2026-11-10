/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02648bf8; name: FUN_02648bf8
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02648bf8(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,int param_6,int *param_7)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  float fVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  undefined1 auVar59 [12];
  undefined1 auVar60 [16];
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  float fVar93;
  undefined8 *local_210;
  undefined8 uStack_208;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  long *local_198;
  undefined8 *local_190;
  undefined8 uStack_188;
  undefined8 auStack_180 [4];
  undefined8 local_160 [2];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined2 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined2 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  long *local_80 [2];
  
  bVar76 = param_4[0xf];
  bVar75 = param_4[0xe];
  bVar74 = param_4[0xd];
  bVar73 = param_4[0xc];
  bVar72 = param_4[0xb];
  bVar71 = param_4[10];
  bVar70 = param_4[9];
  bVar69 = param_4[8];
  bVar68 = param_4[7];
  bVar67 = param_4[6];
  bVar66 = param_4[5];
  bVar65 = param_4[4];
  bVar64 = param_4[3];
  bVar63 = param_4[2];
  bVar62 = param_4[1];
  bVar61 = param_4[0];
  bVar57 = param_2[0xf];
  bVar55 = param_2[0xe];
  bVar53 = param_2[0xd];
  bVar52 = param_2[0xc];
  bVar50 = param_2[0xb];
  bVar48 = param_2[10];
  bVar46 = param_2[9];
  bVar45 = param_2[8];
  bVar43 = param_2[7];
  bVar41 = param_2[6];
  bVar39 = param_2[5];
  bVar38 = param_2[4];
  bVar37 = param_2[3];
  bVar36 = param_2[2];
  bVar35 = param_2[1];
  bVar34 = param_2[0];
  local_190 = (undefined8 *)0x0;
  uStack_188 = 0;
  FUN_00af7e30(&local_190,param_5 + 0x8a8);
  puVar15 = local_190;
  puVar8 = PTR_DAT_0437a558;
  puVar7 = PTR_DAT_0437a550;
  if (local_190 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)((long)local_190 + 0xc) != 0) {
    piVar1 = (int *)((long)local_190 + 0xc);
    iVar13 = *(int *)((long)local_190 + 0xc);
    do {
      plVar27 = (long *)puVar15[2];
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        uVar16 = FUN_00aa0310();
        *(undefined8 *)puVar8 = uVar16;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar27 == (long *)0x0) goto LAB_02649414;
        if (plVar27 == (long *)puVar8) break;
        plVar27 = (long *)*plVar27;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar17 = puVar15[3];
          plVar27 = (long *)0x0;
          puVar15 = local_190;
          if (lVar17 != 0) {
            plVar27 = (long *)(lVar17 + -0x50);
          }
          goto joined_r0x02648cd4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar11;
    } while (iVar11 != 0);
  }
LAB_02649414:
  plVar27 = (long *)0x0;
  puVar15 = local_190;
joined_r0x02648cd4:
  local_190 = puVar15;
  if (puVar15 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar15 + 1);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      puVar15[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_1e0 = *puVar15;
      FUN_02a44274(lVar17 + 0xd8,&local_1e0);
    }
  }
  if (plVar27 == (long *)0x0) {
    return;
  }
  FUN_00a9ecd4(&local_190,plVar27);
  FUN_009983e4(local_80,&local_190);
  puVar15 = local_190;
  if (local_190 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_190 + 1);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      local_190[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_1e0 = *puVar15;
      FUN_02a44274(lVar17 + 0xd8,&local_1e0);
    }
  }
  if (local_80[0] == (long *)0x0) goto LAB_02649374;
  FUN_028a17c4(&local_88);
  plVar26 = local_88;
  if (((*PTR_DAT_0437a570 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
  }
  puVar15 = (undefined8 *)PTR_DAT_0437a578;
  if (plVar26[0x19] != 0) {
    puVar15 = (undefined8 *)(plVar26[0x19] + 0x88);
  }
  lVar17 = (long)param_6;
  plVar26 = (long *)*puVar15;
  if (plVar26 != (long *)0x0) {
    plVar23 = plVar26 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar19 = param_5 + lVar17 * 0x58;
  puVar15 = (undefined8 *)(lVar19 + 0xc50);
  if ((char)param_7[1] != '\0') {
    puVar15 = (undefined8 *)(lVar19 + 0xc70);
  }
  local_a8 = *puVar15;
  local_a0 = puVar15[1];
  local_98 = puVar15[2];
  local_90 = (long *)puVar15[3];
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))();
  }
  uVar10 = FUN_02b68184(plVar26,&local_a8);
  if ((~uVar10 & 0xffff) != 0) {
    auVar30 = FUN_02b6a984(plVar26,uVar10);
    puVar7 = PTR_DAT_04379660;
    bVar77 = (byte)_DAT_038897c0;
    bVar78 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar79 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar80 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    fVar31 = (float)CONCAT13(auVar30[3] & bVar80,
                             CONCAT12(auVar30[2] & bVar79,
                                      CONCAT11(auVar30[1] & bVar78,auVar30[0] & bVar77)));
    bVar81 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar82 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar83 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar84 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    bVar85 = (byte)_UNK_038897c8;
    bVar86 = (byte)((ulong)_UNK_038897c8 >> 8);
    bVar87 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    bVar88 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    fVar33 = (float)CONCAT13(auVar30[0xb] & bVar88,
                             CONCAT12(auVar30[10] & bVar87,
                                      CONCAT11(auVar30[9] & bVar86,auVar30[8] & bVar85)));
    bVar89 = (byte)((ulong)_UNK_038897c8 >> 0x20);
    bVar90 = (byte)((ulong)_UNK_038897c8 >> 0x28);
    bVar91 = (byte)((ulong)_UNK_038897c8 >> 0x30);
    bVar92 = (byte)((ulong)_UNK_038897c8 >> 0x38);
    fVar28 = (float)CONCAT13(param_3[3] & bVar80,
                             CONCAT12(param_3[2] & bVar79,
                                      CONCAT11(param_3[1] & bVar78,param_3[0] & bVar77)));
    auVar59._0_8_ =
         CONCAT17(param_3[7] & bVar84,
                  CONCAT16(param_3[6] & bVar83,
                           CONCAT15(param_3[5] & bVar82,CONCAT14(param_3[4] & bVar81,fVar28))));
    auVar59[8] = param_3[8] & bVar85;
    auVar59[9] = param_3[9] & bVar86;
    auVar59[10] = param_3[10] & bVar87;
    auVar59[0xb] = param_3[0xb] & bVar88;
    auVar60[0xc] = param_3[0xc] & bVar89;
    auVar60._0_12_ = auVar59;
    auVar60[0xd] = param_3[0xd] & bVar90;
    auVar60[0xe] = param_3[0xe] & bVar91;
    auVar60[0xf] = param_3[0xf] & bVar92;
    fVar32 = (float)CONCAT13(bVar64 & bVar80,
                             CONCAT12(bVar63 & bVar79,CONCAT11(bVar62 & bVar78,bVar61 & bVar77)));
    fVar29 = (float)CONCAT13(bVar72 & bVar88,
                             CONCAT12(bVar71 & bVar87,CONCAT11(bVar70 & bVar86,bVar69 & bVar85)));
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar9 = PTR_DAT_04379670;
    puVar8 = PTR_DAT_04379668;
    fVar28 = fVar31 * 0.0 +
             (float)CONCAT13(bVar37 & bVar80,
                             CONCAT12(bVar36 & bVar79,CONCAT11(bVar35 & bVar78,bVar34 & bVar77))) *
             0.0 + fVar28 * 0.0 + fVar32;
    fVar31 = (float)(CONCAT17(auVar30[7] & bVar84,
                              CONCAT16(auVar30[6] & bVar83,
                                       CONCAT15(auVar30[5] & bVar82,
                                                CONCAT14(auVar30[4] & bVar81,fVar31)))) >> 0x20) *
             0.0 + (float)CONCAT13(bVar43 & bVar84,
                                   CONCAT12(bVar41 & bVar83,
                                            CONCAT11(bVar39 & bVar82,bVar38 & bVar81))) * 0.0 +
             (float)((ulong)auVar59._0_8_ >> 0x20) * 0.0 +
             (float)(CONCAT17(bVar68 & bVar84,
                              CONCAT16(bVar67 & bVar83,
                                       CONCAT15(bVar66 & bVar82,CONCAT14(bVar65 & bVar81,fVar32))))
                    >> 0x20);
    fVar32 = fVar33 * 0.0 +
             (float)CONCAT13(bVar50 & bVar88,
                             CONCAT12(bVar48 & bVar87,CONCAT11(bVar46 & bVar86,bVar45 & bVar85))) *
             0.0 + auVar59._8_4_ * 0.0 + fVar29;
    fVar33 = (float)(CONCAT17(auVar30[0xf] & bVar92,
                              CONCAT16(auVar30[0xe] & bVar91,
                                       CONCAT15(auVar30[0xd] & bVar90,
                                                CONCAT14(auVar30[0xc] & bVar89,fVar33)))) >> 0x20) *
             0.0 + (float)CONCAT13(bVar57 & bVar92,
                                   CONCAT12(bVar55 & bVar91,
                                            CONCAT11(bVar53 & bVar90,bVar52 & bVar89))) * 0.0 +
             auVar60._12_4_ * 0.0 +
             (float)(CONCAT17(bVar76 & bVar92,
                              CONCAT16(bVar75 & bVar91,
                                       CONCAT15(bVar74 & bVar90,CONCAT14(bVar73 & bVar89,fVar29))))
                    >> 0x20);
    lVar19 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar19;
    uVar18 = *(ulong *)(lVar19 + 0x60);
    fVar29 = 0.0;
    if (uVar18 != 0) {
      uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar18 - 1 & 0x6a437d1436c47a27;
      }
      else {
        uVar21 = 0x6a437d1436c47a27;
        if (uVar18 < 0x6a437d1436c47a28) {
          uVar21 = 0;
          if (uVar18 != 0) {
            uVar21 = 0x6a437d1436c47a27 / uVar18;
          }
          uVar21 = 0x6a437d1436c47a27 - uVar21 * uVar18;
        }
      }
      plVar23 = *(long **)(*(long *)(lVar19 + 0x58) + uVar21 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar23[1] == 0x6a437d1436c47a27) {
              if (plVar23[2] == 0x6a437d1436c47a27) goto LAB_02648f64;
            }
            else if ((plVar23[1] & uVar18 - 1) != uVar21) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar23[1];
            if (uVar20 == 0x6a437d1436c47a27) {
              if (plVar23[2] == 0x6a437d1436c47a27) goto LAB_02648f64;
            }
            else {
              if (uVar18 <= uVar20) {
                uVar5 = 0;
                if (uVar18 != 0) {
                  uVar5 = uVar20 / uVar18;
                }
                uVar20 = uVar20 - uVar5 * uVar18;
              }
              if (uVar20 != uVar21) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_026490c0;
  }
  goto joined_r0x02649c14;
LAB_02648f64:
  plVar23 = (long *)plVar23[3];
  if (plVar23 != (long *)0x0) {
    plVar2 = plVar23 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = plVar23[0x21];
    fVar29 = 0.0;
    if (uVar18 != 0) {
      uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar18 - 1 & 0x4a7c0309da41fb2c;
      }
      else if (uVar18 < 0x4a7c0309da41fb2d) {
        uVar21 = 0;
        if (uVar18 != 0) {
          uVar21 = 0x4a7c0309da41fb2c / uVar18;
        }
        uVar21 = 0x4a7c0309da41fb2c - uVar21 * uVar18;
      }
      else {
        uVar21 = 0x4a7c0309da41fb2c;
      }
      plVar25 = *(long **)(plVar23[0x20] + uVar21 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar25[1] == 0x4a7c0309da41fb2c) {
              if (plVar25[2] == 0x4a7c0309da41fb2c) goto LAB_026490a8;
            }
            else if ((plVar25[1] & uVar18 - 1) != uVar21) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar25[1];
            if (uVar20 == 0x4a7c0309da41fb2c) {
              if (plVar25[2] == 0x4a7c0309da41fb2c) goto LAB_026490a8;
            }
            else {
              if (uVar18 <= uVar20) {
                uVar5 = 0;
                if (uVar18 != 0) {
                  uVar5 = uVar20 / uVar18;
                }
                uVar20 = uVar20 - uVar5 * uVar18;
              }
              if (uVar20 != uVar21) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_026490ac;
  }
  goto LAB_026490c0;
LAB_026490a8:
  fVar29 = *(float *)(plVar25 + 6);
LAB_026490ac:
  do {
    iVar13 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar23 + 0x10))();
  }
LAB_026490c0:
  fVar29 = -fVar29;
  local_c0 = CONCAT44(fVar31 + (float)((ulong)*(undefined8 *)(param_5 + 0xcf0) >> 0x20) * fVar29,
                      fVar28 + (float)*(undefined8 *)(param_5 + 0xcf0) * fVar29);
  uStack_b8 = CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(param_5 + 0xcf8) >> 0x20) * fVar29,
                       fVar32 + (float)*(undefined8 *)(param_5 + 0xcf8) * fVar29);
  if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar8;
  *(long *)puVar9 = lVar19;
  uVar18 = *(ulong *)(lVar19 + 0x60);
  fVar29 = 0.0;
  if (uVar18 != 0) {
    uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar21 = uVar18 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar21 = 0x6a437d1436c47a27;
      if (uVar18 < 0x6a437d1436c47a28) {
        uVar21 = 0;
        if (uVar18 != 0) {
          uVar21 = 0x6a437d1436c47a27 / uVar18;
        }
        uVar21 = 0x6a437d1436c47a27 - uVar21 * uVar18;
      }
    }
    plVar23 = *(long **)(*(long *)(lVar19 + 0x58) + uVar21 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar23[1] == 0x6a437d1436c47a27) {
            if (plVar23[2] == 0x6a437d1436c47a27) goto LAB_02649178;
          }
          else if ((plVar23[1] & uVar18 - 1) != uVar21) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar23[1];
          if (uVar20 == 0x6a437d1436c47a27) {
            if (plVar23[2] == 0x6a437d1436c47a27) goto LAB_02649178;
          }
          else {
            if (uVar18 <= uVar20) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar20 / uVar18;
              }
              uVar20 = uVar20 - uVar5 * uVar18;
            }
            if (uVar20 != uVar21) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
  goto LAB_026492dc;
LAB_02649178:
  plVar23 = (long *)plVar23[3];
  if (plVar23 != (long *)0x0) {
    plVar2 = plVar23 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = plVar23[0x21];
    fVar29 = 0.0;
    if (uVar18 != 0) {
      uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar18 - 1 & 0x2230a6384a39d5b;
      }
      else if (uVar18 < 0x2230a6384a39d5c) {
        uVar21 = 0;
        if (uVar18 != 0) {
          uVar21 = 0x2230a6384a39d5b / uVar18;
        }
        uVar21 = 0x2230a6384a39d5b - uVar21 * uVar18;
      }
      else {
        uVar21 = 0x2230a6384a39d5b;
      }
      plVar25 = *(long **)(plVar23[0x20] + uVar21 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar25[1] == 0x2230a6384a39d5b) {
              if (plVar25[2] == 0x2230a6384a39d5b) goto LAB_026492c0;
            }
            else if ((plVar25[1] & uVar18 - 1) != uVar21) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar25[1];
            if (uVar20 == 0x2230a6384a39d5b) {
              if (plVar25[2] == 0x2230a6384a39d5b) goto LAB_026492c0;
            }
            else {
              if (uVar18 <= uVar20) {
                uVar5 = 0;
                if (uVar18 != 0) {
                  uVar5 = uVar20 / uVar18;
                }
                uVar20 = uVar20 - uVar5 * uVar18;
              }
              if (uVar20 != uVar21) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_026492c8;
  }
  goto LAB_026492dc;
LAB_026492c0:
  fVar29 = *(float *)(plVar25 + 6);
LAB_026492c8:
  do {
    iVar13 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar23 + 0x10))();
  }
LAB_026492dc:
  local_d0 = CONCAT44((float)((ulong)local_c0 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_5 + 0xcf0) >> 0x20) * fVar29,
                      (float)local_c0 + (float)*(undefined8 *)(param_5 + 0xcf0) * fVar29);
  uStack_c8 = CONCAT44((float)((ulong)uStack_b8 >> 0x20) +
                       (float)((ulong)*(undefined8 *)(param_5 + 0xcf8) >> 0x20) * fVar29,
                       (float)uStack_b8 + (float)*(undefined8 *)(param_5 + 0xcf8) * fVar29);
  lVar19 = *(long *)(param_5 + 0x698);
  if ((lVar19 != 0) && (*(int *)(lVar19 + 0xc) != 0)) {
    piVar1 = (int *)(lVar19 + 0xc);
    local_210._0_4_ = *(int *)(lVar19 + 0xc);
    do {
      plVar23 = *(long **)(lVar19 + 0x10);
      if (((*PTR_DAT_0437a668 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a668), iVar13 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar16;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_0437a660 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_0437a668);
      }
      while( true ) {
        if (plVar23 == (long *)0x0) goto joined_r0x02649c14;
        if (plVar23 == (long *)PTR_DAT_0437a660) break;
        plVar23 = (long *)*plVar23;
      }
      iVar13 = *piVar1;
      if (iVar13 == (int)local_210) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = (int)local_210 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar19 = *(long *)(lVar19 + 0x18);
          if (lVar19 != 0) {
            local_130 = 0x7f7fffee;
            local_160[0] = 0;
            local_114 = 0xf;
            local_150 = 0;
            uStack_148 = 0;
            local_ec = 0xf;
            local_128 = 0xffffffffffffffff;
            local_118 = 0xffffffff;
            local_120 = 0xffffff;
            local_110 = 0xffff;
            local_10c = 0;
            local_f0 = 0xffffffff;
            local_f8 = 0xffffff;
            local_e8 = 0xffff;
            local_e4 = 0;
            local_140 = 0;
            uStack_138 = 0;
            local_108 = 0;
            uStack_100 = 0xffffffffffffffff;
            local_e0 = 0;
            uStack_d8 = 0;
            uVar12 = FUN_01e481f0();
            uVar18 = FUN_01e434f4((long *)(lVar19 + -0x50),&local_c0,&local_d0,uVar12,&local_190);
            uVar16 = uStack_188;
            puVar15 = local_190;
            if ((uVar18 & 1) == 0) goto LAB_02649bd0;
            uStack_208 = uStack_188;
            local_210 = local_190;
            if (((*puVar7 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            lVar24 = *(long *)puVar8;
            *(long *)puVar9 = lVar24;
            uVar18 = *(ulong *)(lVar24 + 0x60);
            fVar29 = 0.0;
            if (uVar18 == 0) goto LAB_0264993c;
            uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
            uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
            uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar20 < 2) {
              uVar21 = uVar18 - 1 & 0x6a437d1436c47a27;
            }
            else {
              uVar21 = 0x6a437d1436c47a27;
              if (uVar18 < 0x6a437d1436c47a28) {
                uVar21 = 0;
                if (uVar18 != 0) {
                  uVar21 = 0x6a437d1436c47a27 / uVar18;
                }
                uVar21 = 0x6a437d1436c47a27 - uVar21 * uVar18;
              }
            }
            plVar23 = *(long **)(*(long *)(lVar24 + 0x58) + uVar21 * 8);
            if ((plVar23 == (long *)0x0) || (plVar23 = (long *)*plVar23, plVar23 == (long *)0x0))
            goto LAB_0264993c;
            if (1 < uVar20) goto LAB_026497c8;
            goto LAB_02649d8c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      local_210._0_4_ = iVar13;
    } while (iVar13 != 0);
  }
  goto joined_r0x02649c14;
LAB_026497c8:
  do {
    uVar20 = plVar23[1];
    if (uVar20 == 0x6a437d1436c47a27) {
      if (plVar23[2] == 0x6a437d1436c47a27) goto LAB_026497e0;
    }
    else {
      if (uVar18 <= uVar20) {
        uVar5 = 0;
        if (uVar18 != 0) {
          uVar5 = uVar20 / uVar18;
        }
        uVar20 = uVar20 - uVar5 * uVar18;
      }
      if (uVar20 != uVar21) break;
    }
    plVar23 = (long *)*plVar23;
  } while (plVar23 != (long *)0x0);
  goto LAB_0264993c;
LAB_026497e0:
  plVar23 = (long *)plVar23[3];
  if (plVar23 != (long *)0x0) {
    plVar2 = plVar23 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = plVar23[0x21];
    fVar29 = 0.0;
    if (uVar18 != 0) {
      uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar18 - 1 & 0x4a7c0309da41fb2c;
      }
      else if (uVar18 < 0x4a7c0309da41fb2d) {
        uVar21 = 0;
        if (uVar18 != 0) {
          uVar21 = 0x4a7c0309da41fb2c / uVar18;
        }
        uVar21 = 0x4a7c0309da41fb2c - uVar21 * uVar18;
      }
      else {
        uVar21 = 0x4a7c0309da41fb2c;
      }
      plVar25 = *(long **)(plVar23[0x20] + uVar21 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar25[1] == 0x4a7c0309da41fb2c) {
              if (plVar25[2] == 0x4a7c0309da41fb2c) goto LAB_02649924;
            }
            else if ((plVar25[1] & uVar18 - 1) != uVar21) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar25[1];
            if (uVar20 == 0x4a7c0309da41fb2c) {
              if (plVar25[2] == 0x4a7c0309da41fb2c) goto LAB_02649924;
            }
            else {
              if (uVar18 <= uVar20) {
                uVar5 = 0;
                if (uVar18 != 0) {
                  uVar5 = uVar20 / uVar18;
                }
                uVar20 = uVar20 - uVar5 * uVar18;
              }
              if (uVar20 != uVar21) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_02649928;
  }
  goto LAB_0264993c;
LAB_02649924:
  fVar29 = *(float *)(plVar25 + 6);
LAB_02649928:
  do {
    iVar13 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 != 0) goto LAB_0264993c;
  (**(code **)(*plVar23 + 0x10))();
  bVar34 = *puVar7;
  goto joined_r0x02649c2c;
LAB_026499e4:
  plVar23 = (long *)plVar23[3];
  if (plVar23 != (long *)0x0) {
    plVar2 = plVar23 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = plVar23[0x21];
    fVar93 = 0.0;
    if (uVar18 != 0) {
      uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar18 - 1 & 0xec0a403853534f30;
      }
      else if (uVar18 < 0xec0a403853534f31) {
        uVar21 = 0;
        if (uVar18 != 0) {
          uVar21 = 0xec0a403853534f30 / uVar18;
        }
        uVar21 = 0xec0a403853534f30 - uVar21 * uVar18;
      }
      else {
        uVar21 = 0xec0a403853534f30;
      }
      plVar25 = *(long **)(plVar23[0x20] + uVar21 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar25[1] == 0xec0a403853534f30) {
              if (plVar25[2] == -0x13f5bfc7acacb0d0) goto LAB_02649b28;
            }
            else if ((plVar25[1] & uVar18 - 1) != uVar21) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar25[1];
            if (uVar20 == 0xec0a403853534f30) {
              if (plVar25[2] == -0x13f5bfc7acacb0d0) goto LAB_02649b28;
            }
            else {
              if (uVar18 <= uVar20) {
                uVar5 = 0;
                if (uVar18 != 0) {
                  uVar5 = uVar20 / uVar18;
                }
                uVar20 = uVar20 - uVar5 * uVar18;
              }
              if (uVar20 != uVar21) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_02649b2c;
  }
  goto LAB_02649b40;
LAB_02649b28:
  fVar93 = *(float *)(plVar25 + 6);
LAB_02649b2c:
  do {
    iVar13 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar23 + 0x10))();
  }
  goto LAB_02649b40;
  while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
LAB_02649d8c:
    if (plVar23[1] == 0x6a437d1436c47a27) {
      if (plVar23[2] == 0x6a437d1436c47a27) goto LAB_026497e0;
    }
    else if ((plVar23[1] & uVar18 - 1) != uVar21) break;
  }
LAB_0264993c:
  bVar34 = *puVar7;
joined_r0x02649c2c:
  if (((bVar34 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  fVar28 = SUB84(puVar15,0) - fVar28;
  fVar31 = (float)((ulong)puVar15 >> 0x20) - fVar31;
  fVar32 = (float)uVar16 - fVar32;
  fVar33 = (float)((ulong)uVar16 >> 0x20) - fVar33;
  lVar24 = *(long *)puVar8;
  *(long *)puVar9 = lVar24;
  uVar18 = *(ulong *)(lVar24 + 0x60);
  fVar93 = 0.0;
  if (uVar18 != 0) {
    uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar21 = uVar18 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar21 = 0x6a437d1436c47a27;
      if (uVar18 < 0x6a437d1436c47a28) {
        uVar21 = 0;
        if (uVar18 != 0) {
          uVar21 = 0x6a437d1436c47a27 / uVar18;
        }
        uVar21 = 0x6a437d1436c47a27 - uVar21 * uVar18;
      }
    }
    plVar23 = *(long **)(*(long *)(lVar24 + 0x58) + uVar21 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar23[1] == 0x6a437d1436c47a27) {
            if (plVar23[2] == 0x6a437d1436c47a27) goto LAB_026499e4;
          }
          else if ((plVar23[1] & uVar18 - 1) != uVar21) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar23[1];
          if (uVar20 == 0x6a437d1436c47a27) {
            if (plVar23[2] == 0x6a437d1436c47a27) goto LAB_026499e4;
          }
          else {
            if (uVar18 <= uVar20) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar20 / uVar18;
              }
              uVar20 = uVar20 - uVar5 * uVar18;
            }
            if (uVar20 != uVar21) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
LAB_02649b40:
  fVar28 = fVar28 * fVar28;
  fVar31 = fVar31 * fVar31;
  uVar40 = (undefined1)((uint)fVar31 >> 8);
  uVar42 = (undefined1)((uint)fVar31 >> 0x10);
  uVar44 = (undefined1)((uint)fVar31 >> 0x18);
  fVar32 = fVar32 * fVar32;
  uVar47 = (undefined1)((uint)fVar32 >> 8);
  uVar49 = (undefined1)((uint)fVar32 >> 0x10);
  uVar51 = (undefined1)((uint)fVar32 >> 0x18);
  fVar33 = fVar33 * fVar33;
  uVar54 = (undefined1)((uint)fVar33 >> 8);
  uVar56 = (undefined1)((uint)fVar33 >> 0x10);
  uVar58 = (undefined1)((uint)fVar33 >> 0x18);
  fVar29 = fVar29 + fVar93;
  auVar30[4] = SUB41(fVar31,0);
  auVar30._0_4_ = fVar28;
  auVar30[5] = uVar40;
  auVar30[6] = uVar42;
  auVar30[7] = uVar44;
  auVar30[8] = SUB41(fVar32,0);
  auVar30[9] = uVar47;
  auVar30[10] = uVar49;
  auVar30[0xb] = uVar51;
  auVar30[0xc] = SUB41(fVar33,0);
  auVar30[0xd] = uVar54;
  auVar30[0xe] = uVar56;
  auVar30[0xf] = uVar58;
  auVar6[4] = SUB41(fVar31,0);
  auVar6._0_4_ = fVar28;
  auVar6[5] = uVar40;
  auVar6[6] = uVar42;
  auVar6[7] = uVar44;
  auVar6[8] = SUB41(fVar32,0);
  auVar6[9] = uVar47;
  auVar6[10] = uVar49;
  auVar6[0xb] = uVar51;
  auVar6[0xc] = SUB41(fVar33,0);
  auVar6[0xd] = uVar54;
  auVar6[0xe] = uVar56;
  auVar6[0xf] = uVar58;
  auVar30 = NEON_ext(auVar30,auVar6,8,1);
  if (fVar29 < SQRT(auVar30._0_4_ + fVar28 + auVar30._4_4_ + fVar31)) {
    fVar31 = (float)*(undefined8 *)(param_5 + 0xcf0);
    fVar32 = (float)((ulong)*(undefined8 *)(param_5 + 0xcf0) >> 0x20);
    fVar33 = (float)*(undefined8 *)(param_5 + 0xcf8);
    fVar28 = (float)((ulong)*(undefined8 *)(param_5 + 0xcf8) >> 0x20);
    local_210 = (undefined8 *)
                CONCAT44((float)((ulong)local_c0 >> 0x20) + fVar32 * fVar29,
                         (float)local_c0 + fVar31 * fVar29);
    uStack_208 = CONCAT44((float)((ulong)uStack_b8 >> 0x20) + fVar28 * fVar29,
                          (float)uStack_b8 + fVar33 * fVar29);
    local_1e0 = CONCAT44(0.0 - fVar32,0.0 - fVar31);
    uStack_1d8 = CONCAT44(0.0 - fVar28,0.0 - fVar33);
    puVar15 = &local_1e0;
  }
  else {
    puVar15 = auStack_180;
  }
  auVar30 = FUN_026cc484(puVar15);
  iVar13 = FUN_0264c060(param_5,&local_190);
  lVar22 = param_5 + lVar17 * 0x58;
  lVar24 = *(long *)(lVar22 + 0xc38);
  if (lVar24 != 0) {
    *(undefined8 *)(lVar24 + 0xd8) = uStack_208;
    *(undefined8 **)(lVar24 + 0xd0) = local_210;
    *(undefined1 *)(lVar24 + 0xe0) = 1;
    lVar24 = *(long *)(lVar22 + 0xc38);
    *(undefined1 (*) [16])(lVar24 + 0xc0) = auVar30;
    *(undefined1 *)(lVar24 + 0xe0) = 1;
  }
  puVar8 = PTR_DAT_0437a6e0;
  puVar7 = PTR_DAT_0437a6d8;
  lVar17 = *(long *)(param_5 + lVar17 * 0x58 + 0xc40);
  if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar1 = (int *)(lVar17 + 0xc);
    iVar11 = *(int *)(lVar17 + 0xc);
    do {
      plVar23 = *(long **)(lVar17 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
        uVar16 = FUN_00ad3750();
        *(undefined8 *)puVar8 = uVar16;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar23 == (long *)0x0) goto LAB_02649bd0;
        if (plVar23 == (long *)puVar8) break;
        plVar23 = (long *)*plVar23;
      }
      iVar14 = *piVar1;
      if (iVar14 == iVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar17 != 0) {
            plVar23 = (long *)(lVar17 + -0x50);
            FUN_026b7cf0(&local_1e0,&UNK_03a7dc00 + (long)*param_7 * 8 + (long)iVar13 * 0x10);
            FUN_02c90b20(plVar23,&local_1e0);
            FUN_02c90b50(plVar23,0);
            if (local_198 != (long *)0x0) {
              (**(code **)(*local_198 + 0x20))();
            }
            FUN_00984b00(&local_1e0);
            lVar17 = *(long *)(lVar17 + 8);
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar23 + 0x20))(plVar23);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar14;
    } while (iVar14 != 0);
  }
LAB_02649bd0:
  FUN_032c7b9c(local_160);
  lVar17 = *(long *)(lVar19 + 8);
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*(long *)(lVar19 + -0x50) + 0x20))();
  }
joined_r0x02649c14:
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (plVar26 != (long *)0x0) {
    plVar23 = plVar26 + 10;
    do {
      iVar13 = (int)*plVar23 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *(int *)plVar23 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
  }
  if (local_88 != (long *)0x0) {
    plVar26 = local_88 + 10;
    do {
      iVar13 = (int)*plVar26 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *(int *)plVar26 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  if (local_80[0] != (long *)0x0) {
    lVar17 = local_80[0][0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_80[0] + 0x20))();
    }
  }
LAB_02649374:
  lVar17 = plVar27[0xb];
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar27 + 0x20))(plVar27);
  }
  return;
}


