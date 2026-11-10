/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02680764; name: FUN_02680764
 */


uint FUN_02680764(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  long *plVar20;
  undefined1 *puVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined8 local_190;
  char *pcStack_188;
  undefined8 local_180;
  long *local_178;
  undefined1 *local_170;
  char *pcStack_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [48];
  undefined8 local_110 [2];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined2 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar9 = PTR_DAT_0437a668;
  puVar8 = PTR_DAT_0437a660;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar15 = *(long *)(param_1 + 0x698);
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0xc) == 0)) {
LAB_02680790:
    uVar11 = 1;
  }
  else {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar13 = *(int *)(lVar15 + 0xc);
    do {
      puVar26 = *(undefined8 **)(lVar15 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar14;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar8 = puVar7;
        __cxa_guard_release(puVar9);
      }
      if (puVar26 == (undefined8 *)0x0) goto LAB_02680790;
      while (puVar26 != (undefined8 *)puVar8) {
        puVar26 = (undefined8 *)*puVar26;
        uVar11 = 1;
        if (puVar26 == (undefined8 *)0x0) goto LAB_02680794;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 == 0) goto LAB_02680790;
          local_bc = 0;
          local_e0 = 0x7f7fffee;
          local_110[0] = 0;
          local_d8 = 0xffffffffffffffff;
          local_c8 = 0xffffffff;
          local_d0 = 0xffffff;
          local_100 = 0;
          uStack_f8 = 0;
          local_c4 = 0xf;
          local_c0 = 0xffff;
          local_a0 = 0xffffffff;
          local_a8 = 0xffffff;
          local_9c = 0xf;
          local_98 = 0xffff;
          local_94 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_b8 = 0;
          uStack_b0 = 0xffffffffffffffff;
          local_90 = 0;
          uStack_88 = 0;
          auVar27 = FUN_02680cb8(param_1);
          local_170 = &DAT_471b26c9ac42475c;
          pcStack_168 = "ringuma";
          local_160 = 7;
          local_158 = (long *)0x0;
          local_190 = 0xb8bd54a432299b6e;
          pcStack_188 = "dig_check_offset";
          local_180 = 0x10;
          local_178 = (long *)0x0;
          auVar28 = FUN_00aee408(&local_170,&local_190);
          local_150 = CONCAT44(auVar27._4_4_ + auVar28._4_4_,auVar27._0_4_ + auVar28._0_4_);
          uStack_148 = CONCAT44(auVar27._12_4_ + auVar28._12_4_,auVar27._8_4_ + auVar28._8_4_);
          if (local_178 != (long *)0x0) {
            (**(code **)(*local_178 + 0x20))();
          }
          if (local_158 != (long *)0x0) {
            (**(code **)(*local_158 + 0x20))();
          }
          plVar25 = (long *)(lVar15 + -0x50);
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar19 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar19;
          puVar16 = *(undefined1 **)(lVar19 + 0x60);
          fVar29 = 0.0;
          if (puVar16 == (undefined1 *)0x0) goto LAB_02680b40;
          uVar17 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
          uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
          uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar17 < 2) {
            puVar18 = (undefined1 *)((ulong)(puVar16 + -1) & 0x471b26c9ac42475c);
          }
          else if (&DAT_471b26c9ac42475c < puVar16) {
            puVar18 = &DAT_471b26c9ac42475c;
          }
          else {
            uVar22 = 0;
            if (puVar16 != (undefined1 *)0x0) {
              uVar22 = 0x471b26c9ac42475c / (ulong)puVar16;
            }
            puVar18 = &DAT_471b26c9ac42475c + -(uVar22 * (long)puVar16);
          }
          plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + (long)puVar18 * 8);
          if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
          goto LAB_02680b40;
          if (1 < uVar17) goto LAB_026809cc;
          goto LAB_02680c54;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar11 = 1;
      iVar13 = iVar12;
    } while (iVar12 != 0);
  }
  goto LAB_02680794;
LAB_026809cc:
  do {
    puVar21 = (undefined1 *)plVar20[1];
    if (puVar21 == &DAT_471b26c9ac42475c) {
      if ((undefined1 *)plVar20[2] == &DAT_471b26c9ac42475c) goto LAB_026809e4;
    }
    else {
      if (puVar16 <= puVar21) {
        uVar17 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar17 = (ulong)puVar21 / (ulong)puVar16;
        }
        puVar21 = puVar21 + -(uVar17 * (long)puVar16);
      }
      if (puVar21 != puVar18) break;
    }
    plVar20 = (long *)*plVar20;
  } while (plVar20 != (long *)0x0);
  goto LAB_02680b40;
LAB_026809e4:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar2 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar17 = plVar20[0x21];
    fVar29 = 0.0;
    if (uVar17 != 0) {
      uVar22 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar17 - 1 & 0x51327336888b0fc9;
      }
      else if (uVar17 < 0x51327336888b0fca) {
        uVar23 = 0;
        if (uVar17 != 0) {
          uVar23 = 0x51327336888b0fc9 / uVar17;
        }
        uVar23 = 0x51327336888b0fc9 - uVar23 * uVar17;
      }
      else {
        uVar23 = 0x51327336888b0fc9;
      }
      plVar24 = *(long **)(plVar20[0x20] + uVar23 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar24[1] == 0x51327336888b0fc9) {
              if (plVar24[2] == 0x51327336888b0fc9) goto LAB_02680b28;
            }
            else if ((plVar24[1] & uVar17 - 1) != uVar23) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar24[1];
            if (uVar22 == 0x51327336888b0fc9) {
              if (plVar24[2] == 0x51327336888b0fc9) goto LAB_02680b28;
            }
            else {
              if (uVar17 <= uVar22) {
                uVar5 = 0;
                if (uVar17 != 0) {
                  uVar5 = uVar22 / uVar17;
                }
                uVar22 = uVar22 - uVar5 * uVar17;
              }
              if (uVar22 != uVar23) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    goto LAB_02680b2c;
  }
  goto LAB_02680b40;
LAB_02680b28:
  fVar29 = *(float *)(plVar24 + 6);
LAB_02680b2c:
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
    (**(code **)(*plVar20 + 0x10))();
  }
  goto LAB_02680b40;
  while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
LAB_02680c54:
    if ((undefined1 *)plVar20[1] == &DAT_471b26c9ac42475c) {
      if ((undefined1 *)plVar20[2] == &DAT_471b26c9ac42475c) goto LAB_026809e4;
    }
    else if ((undefined1 *)((ulong)plVar20[1] & (ulong)(puVar16 + -1)) != puVar18) break;
  }
LAB_02680b40:
  local_170 = (undefined1 *)
              CONCAT44((float)((ulong)local_150 >> 0x20) + -fVar29,(float)local_150 + 0.0);
  pcStack_168 = (char *)CONCAT44((float)((ulong)uStack_148 >> 0x20) + 0.0,(float)uStack_148 + 0.0);
  uVar10 = FUN_01e48200();
  uVar11 = FUN_01e434f4(plVar25,&local_150,&local_170,uVar10,auStack_140);
  FUN_032c7b9c(local_110);
  lVar15 = *(long *)(lVar15 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
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
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
LAB_02680794:
  return uVar11 & 1;
}


