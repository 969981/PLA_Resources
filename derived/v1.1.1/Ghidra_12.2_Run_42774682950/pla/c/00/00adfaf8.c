/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00adfaf8; name: FUN_00adfaf8
 */


uint FUN_00adfaf8(long param_1)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  undefined1 *puVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  undefined8 local_220;
  undefined8 uStack_218;
  long *local_208;
  long *local_200;
  long *local_1f8;
  code *local_1f0;
  code *pcStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined8 *local_1d0 [12];
  undefined1 auStack_170 [8];
  long local_168;
  int local_78;
  long *local_58;
  
  uVar3 = *(uint *)(param_1 + 0x310);
  lVar23 = (&DAT_0428af30)[(ulong)uVar3 * 6];
  if (lVar23 == 0) {
    plVar22 = &DAT_0428af30;
  }
  else {
    plVar22 = &DAT_0428af30;
    if (*(char *)(lVar23 + 0x1e1) != '\0') {
      plVar22 = &DAT_0428af30 + (ulong)uVar3 * 6;
    }
  }
  piVar2 = (int *)((long)*(uint **)(*plVar22 + 0x250) + (ulong)**(uint **)(*plVar22 + 0x250));
  if (((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) ||
      (uVar20 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar20 == 0)) ||
     (*(char *)((long)piVar2 + uVar20) != '\x01')) {
    uVar15 = 1;
    if ((int)uVar3 < 0x158) {
      if (((0x3c < uVar3 - 0x26) ||
          ((1L << ((ulong)(uVar3 - 0x26) & 0x3f) & 0x1001000000000001U) == 0)) &&
         ((uVar3 != 0xac && (uVar3 != 0xcd)))) goto LAB_00ae034c;
    }
    else if ((int)uVar3 < 0x19d) {
      if ((uVar3 != 0x18a) && (uVar3 != 0x158)) goto LAB_00ae034c;
    }
    else if (((0x36 < uVar3 - 0x19d) ||
             ((1L << ((ulong)(uVar3 - 0x19d) & 0x3f) & 0x40010000000009U) == 0)) && (uVar3 != 0x33c)
            ) goto LAB_00ae034c;
  }
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379578), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar23 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar23;
  lVar23 = *(long *)(lVar23 + 200);
  local_220 = CONCAT71(local_220._1_7_,*(undefined1 *)(param_1 + 0x2d8));
  local_1f0 = FUN_00935a9c;
  pcStack_1e8 = FUN_00935abc;
  local_1e0 = &LAB_00935ac0;
  puStack_1d8 = &LAB_00935acc;
  local_1d0[0] = &local_220;
  FUN_009325b0(auStack_170,*(long *)(*(long *)(lVar23 + 0x330) + 0xd0) + 0xa8,&local_1f0);
  pcVar14 = pcStack_1e8;
  if (pcStack_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    pcStack_1e8 = (code *)0x0;
    (*pcVar14)(local_1d0);
  }
  local_220 = CONCAT71(local_220._1_7_,*(undefined1 *)(param_1 + 0x2d9));
  local_1f0 = FUN_00935a9c;
  pcStack_1e8 = FUN_00935abc;
  local_1e0 = &LAB_00935ac0;
  puStack_1d8 = &LAB_00935acc;
  lVar8 = 0;
  if (local_78 != 0) {
    lVar8 = local_168;
  }
  local_1d0[0] = &local_220;
  FUN_009325b0(auStack_170,*(long *)(*(long *)(lVar23 + 0x330) + 0xd0) + 0xa8,&local_1f0);
  pcVar14 = pcStack_1e8;
  if (pcStack_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    pcStack_1e8 = (code *)0x0;
    (*pcVar14)(local_1d0);
  }
  lVar9 = 0;
  if (local_78 != 0) {
    lVar9 = local_168;
  }
  uVar15 = 1;
  if ((lVar8 == 0) || (lVar9 == 0)) goto LAB_00ae034c;
  if (((*(short *)(*(long *)(lVar8 + 0x70) + 0x70) == 0x2c9) &&
      (uVar20 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x70) + 0x60) + 0x98)),
      (uVar20 & 1) != 0)) ||
     ((*(short *)(*(long *)(lVar9 + 0x70) + 0x70) == 0x2c9 &&
      (uVar20 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x60) + 0x98)),
      (uVar20 & 1) != 0)))) {
    uVar15 = 0;
    goto LAB_00ae034c;
  }
  FUN_00998db0(&local_58,lVar23,param_1 + 0x2d8);
  FUN_00998db0(&local_1f8,lVar23,param_1 + 0x2d9);
  puVar11 = PTR_DAT_04379660;
  lVar9 = local_58[0x1b];
  lVar23 = local_58[0x1a];
  lVar10 = local_1f8[0x1b];
  lVar8 = local_1f8[0x1a];
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar13 = PTR_DAT_04379670;
  puVar12 = PTR_DAT_04379668;
  lVar21 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar21;
  puVar18 = *(undefined1 **)(lVar21 + 0x60);
  fVar42 = 0.0;
  if (puVar18 != (undefined1 *)0x0) {
    uVar20 = (long)puVar18 - ((ulong)puVar18 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      puVar19 = (undefined1 *)((ulong)(puVar18 + -1) & 0x8013c350d279d9f9);
    }
    else if (&DAT_8013c350d279d9f9 < puVar18) {
      puVar19 = &DAT_8013c350d279d9f9;
    }
    else {
      uVar25 = 0;
      if (puVar18 != (undefined1 *)0x0) {
        uVar25 = 0x8013c350d279d9f9 / (ulong)puVar18;
      }
      puVar19 = &DAT_8013c350d279d9f9 + -(uVar25 * (long)puVar18);
    }
    plVar22 = *(long **)(*(long *)(lVar21 + 0x58) + (long)puVar19 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if ((undefined1 *)plVar22[1] == &DAT_8013c350d279d9f9) {
            if ((undefined1 *)plVar22[2] == &DAT_8013c350d279d9f9) goto LAB_00adfdb0;
          }
          else if ((undefined1 *)((ulong)plVar22[1] & (ulong)(puVar18 + -1)) != puVar19) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          puVar24 = (undefined1 *)plVar22[1];
          if (puVar24 == &DAT_8013c350d279d9f9) {
            if ((undefined1 *)plVar22[2] == &DAT_8013c350d279d9f9) goto LAB_00adfdb0;
          }
          else {
            if (puVar18 <= puVar24) {
              uVar20 = 0;
              if (puVar18 != (undefined1 *)0x0) {
                uVar20 = (ulong)puVar24 / (ulong)puVar18;
              }
              puVar24 = puVar24 + -(uVar20 * (long)puVar18);
            }
            if (puVar24 != puVar19) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
LAB_00adff8c:
  local_200 = *(long **)(param_1 + 0x2c8);
  if (local_200 != (long *)0x0) {
    lVar21 = local_200[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_00ae05c0;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar17;
    }
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  fVar28 = (float)FUN_00ab8f88(&local_200);
  if (local_200 != (long *)0x0) {
    lVar21 = local_200[0xb];
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      iVar16 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_200 + 0x20))();
    }
  }
  local_208 = *(long **)(param_1 + 0x2d0);
  if (local_208 != (long *)0x0) {
    lVar21 = local_208[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_00ae05c0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar17;
    }
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  fVar29 = (float)FUN_00ab8f88(&local_208);
  if (local_208 != (long *)0x0) {
    lVar21 = local_208[0xb];
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      iVar16 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_208 + 0x20))();
    }
  }
  local_240 = (float)lVar8;
  fStack_23c = (float)((ulong)lVar8 >> 0x20);
  fStack_238 = (float)lVar10;
  fStack_234 = (float)((ulong)lVar10 >> 0x20);
  fVar33 = (float)lVar9;
  fVar34 = (float)((ulong)lVar9 >> 0x20);
  fVar30 = (float)lVar23;
  fVar31 = (float)((ulong)lVar23 >> 0x20);
  fVar38 = fVar30 - local_240;
  fVar39 = fVar31 - fStack_23c;
  fVar40 = fVar33 - fStack_238;
  fVar41 = fVar34 - fStack_234;
  fVar38 = fVar38 * fVar38;
  fVar32 = fVar39 * fVar39;
  fVar40 = fVar40 * fVar40;
  fVar41 = fVar41 * fVar41;
  auVar35._4_4_ = fVar32;
  auVar35._0_4_ = fVar38;
  auVar35._8_4_ = fVar40;
  auVar35._12_4_ = fVar41;
  auVar7._4_4_ = fVar32;
  auVar7._0_4_ = fVar38;
  auVar7._8_4_ = fVar40;
  auVar7._12_4_ = fVar41;
  auVar35 = NEON_ext(auVar35,auVar7,8,1);
  fVar38 = auVar35._0_4_ + fVar38;
  fVar32 = auVar35._4_4_ + fVar32;
  fVar40 = fVar38 + fVar32;
  fVar38 = fVar38 + fVar32;
  fVar32 = SQRT(fVar40);
  auVar36._0_8_ = CONCAT44(SQRT(fVar38),fVar32);
  auVar36._8_4_ = SQRT(fVar40);
  auVar36._12_4_ = SQRT(fVar38);
  if (fVar42 < (fVar32 - fVar28) - fVar29) {
LAB_00ae03c4:
    uVar15 = 0;
  }
  else {
    if ((*puVar11 & 1) == 0) {
      uVar17 = auVar36._8_8_;
      iVar16 = __cxa_guard_acquire(PTR_DAT_04379660);
      auVar36._8_8_ = uVar17;
      if (iVar16 != 0) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
    }
    lVar23 = *(long *)puVar12;
    *(long *)puVar13 = lVar23;
    puVar18 = *(undefined1 **)(lVar23 + 0x60);
    fVar42 = 0.0;
    if (puVar18 != (undefined1 *)0x0) {
      uVar20 = (long)puVar18 - ((ulong)puVar18 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        puVar19 = (undefined1 *)((ulong)(puVar18 + -1) & 0x8013c350d279d9f9);
      }
      else {
        uVar25 = 0;
        if (puVar18 != (undefined1 *)0x0) {
          uVar25 = 0x8013c350d279d9f9 / (ulong)puVar18;
        }
        puVar19 = &DAT_8013c350d279d9f9;
        if (puVar18 < (undefined1 *)0x8013c350d279d9fa) {
          puVar19 = &DAT_8013c350d279d9f9 + -(uVar25 * (long)puVar18);
        }
      }
      plVar22 = *(long **)(*(long *)(lVar23 + 0x58) + (long)puVar19 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if ((undefined1 *)plVar22[1] == &DAT_8013c350d279d9f9) {
              if ((undefined1 *)plVar22[2] == &DAT_8013c350d279d9f9) goto LAB_00ae0140;
            }
            else if ((undefined1 *)((ulong)plVar22[1] & (ulong)(puVar18 + -1)) != puVar19) break;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            puVar24 = (undefined1 *)plVar22[1];
            if (puVar24 == &DAT_8013c350d279d9f9) {
              if ((undefined1 *)plVar22[2] == &DAT_8013c350d279d9f9) goto LAB_00ae0140;
            }
            else {
              if (puVar18 <= puVar24) {
                uVar20 = 0;
                if (puVar18 != (undefined1 *)0x0) {
                  uVar20 = (ulong)puVar24 / (ulong)puVar18;
                }
                puVar24 = puVar24 + -(uVar20 * (long)puVar18);
              }
              if (puVar24 != puVar19) break;
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
joined_r0x00ae03b0:
    if (auVar36._0_4_ == 0.0) {
      if (fVar42 < 90.0) goto LAB_00ae03c4;
    }
    else {
      fVar29 = (float)FUN_00aacd40(ABS(fVar39));
      if (fVar42 < fVar29) goto LAB_00ae03c4;
    }
    auVar37._0_8_ = (code *)CONCAT44(fVar31 + fVar28,fVar30 + 0.0);
    auVar37._8_4_ = fVar33 + 0.0;
    auVar37._12_4_ = fVar34 + 0.0;
    uStack_218 = CONCAT44(fStack_234 + 0.0,fStack_238 + 0.0);
    local_220 = CONCAT44(fStack_23c + fVar28,local_240 + 0.0);
    pcStack_1e8 = auVar37._8_8_;
    local_1f0 = auVar37._0_8_;
    uVar15 = FUN_00ab6ce4(fVar28 * 0.9,&local_1f0,&local_220,auStack_170,0x100e4000);
    uVar15 = uVar15 ^ 1;
  }
  if (local_1f8 != (long *)0x0) {
    lVar23 = local_1f8[0xb];
    piVar2 = (int *)(lVar23 + 0xc);
    do {
      iVar16 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_1f8 + 0x20))();
    }
  }
  if (local_58 != (long *)0x0) {
    lVar23 = local_58[0xb];
    piVar2 = (int *)(lVar23 + 0xc);
    do {
      iVar16 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
LAB_00ae034c:
  return uVar15 & 1;
LAB_00adfdb0:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    plVar1 = plVar22 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar22[0x21];
    fVar42 = 0.0;
    if (uVar20 != 0) {
      uVar25 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar26 = uVar20 - 1 & 0x1aa924e63c8e49fd;
      }
      else if (uVar20 < 0x1aa924e63c8e49fe) {
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = 0x1aa924e63c8e49fd / uVar20;
        }
        uVar26 = 0x1aa924e63c8e49fd - uVar26 * uVar20;
      }
      else {
        uVar26 = 0x1aa924e63c8e49fd;
      }
      plVar27 = *(long **)(plVar22[0x20] + uVar26 * 8);
      if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar27[1] == 0x1aa924e63c8e49fd) {
              if (plVar27[2] == 0x1aa924e63c8e49fd) goto LAB_00adff74;
            }
            else if ((plVar27[1] & uVar20 - 1) != uVar26) break;
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar27[1];
            if (uVar25 == 0x1aa924e63c8e49fd) {
              if (plVar27[2] == 0x1aa924e63c8e49fd) goto LAB_00adff74;
            }
            else {
              if (uVar20 <= uVar25) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar25 / uVar20;
                }
                uVar25 = uVar25 - uVar6 * uVar20;
              }
              if (uVar25 != uVar26) break;
            }
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
      }
    }
    goto LAB_00adff78;
  }
  goto LAB_00adff8c;
LAB_00adff74:
  fVar42 = *(float *)(plVar27 + 6);
LAB_00adff78:
  do {
    iVar16 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar22 + 0x10))();
  }
  goto LAB_00adff8c;
LAB_00ae0140:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    plVar1 = plVar22 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar22[0x21];
    fVar42 = 0.0;
    if (uVar20 != 0) {
      uVar25 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar26 = uVar20 - 1 & 0x6aa864aa73456419;
      }
      else if (uVar20 < 0x6aa864aa7345641a) {
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = 0x6aa864aa73456419 / uVar20;
        }
        uVar26 = 0x6aa864aa73456419 - uVar26 * uVar20;
      }
      else {
        uVar26 = 0x6aa864aa73456419;
      }
      plVar27 = *(long **)(plVar22[0x20] + uVar26 * 8);
      if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar27[1] == 0x6aa864aa73456419) {
              if (plVar27[2] == 0x6aa864aa73456419) goto LAB_00ae0284;
            }
            else if ((plVar27[1] & uVar20 - 1) != uVar26) break;
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar27[1];
            if (uVar25 == 0x6aa864aa73456419) {
              if (plVar27[2] == 0x6aa864aa73456419) goto LAB_00ae0284;
            }
            else {
              if (uVar20 <= uVar25) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar25 / uVar20;
                }
                uVar25 = uVar25 - uVar6 * uVar20;
              }
              if (uVar25 != uVar26) break;
            }
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
      }
    }
    goto LAB_00ae0288;
  }
  goto joined_r0x00ae03b0;
LAB_00ae0284:
  fVar42 = *(float *)(plVar27 + 6);
LAB_00ae0288:
  do {
    iVar16 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar22 + 0x10))();
  }
  goto joined_r0x00ae03b0;
}


