/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d99b8c; name: FUN_01d99b8c
 */


long FUN_01d99b8c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  float fVar30;
  undefined8 *local_128;
  undefined8 uStack_120;
  long *local_118;
  undefined4 local_110;
  float fStack_10c;
  float fStack_108;
  long *local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  char *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long local_68;
  
  local_100 = (long *)0x0;
  pcStack_f8 = (char *)0x0;
  FUN_00ae8374(&local_100,*(long *)(param_1 + 0x1b0) + 0x390);
  lVar17 = param_1 + 0x1d0;
  FUN_00ab3f84(lVar17,&local_100);
  plVar15 = local_100;
  if (local_100 != (long *)0x0) {
    plVar28 = local_100 + 1;
    do {
      iVar12 = (int)*plVar28 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar3) {
        *(int *)plVar28 = iVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_88 = (undefined8 *)*plVar15;
      FUN_02a44274(lVar18 + 0xd8,&local_88);
    }
  }
  local_100 = (long *)0x0;
  pcStack_f8 = (char *)0x0;
  FUN_00af7e30(&local_100,*(long *)(param_1 + 0x1b0) + 0x3a0);
  FUN_00b67cfc(param_1 + 0x1e0,&local_100);
  plVar15 = local_100;
  if (local_100 != (long *)0x0) {
    plVar28 = local_100 + 1;
    do {
      iVar12 = (int)*plVar28 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar3) {
        *(int *)plVar28 = iVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_88 = (undefined8 *)*plVar15;
      FUN_02a44274(lVar18 + 0xd8,&local_88);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x160) + 0x10))(&local_100);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_018fed88(&local_88,&local_100);
  plVar15 = local_100;
  if (local_100 != (long *)0x0) {
    plVar28 = local_100 + 1;
    do {
      iVar12 = (int)*plVar28 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar3) {
        *(int *)plVar28 = iVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_110 = (undefined4)*plVar15;
      fStack_10c = (float)((ulong)*plVar15 >> 0x20);
      FUN_02a44274(lVar18 + 0xd8,&local_110);
    }
  }
  FUN_019fa21c(param_1 + 0x200,&local_88);
  puVar6 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar16 = (int *)(local_88 + 1);
    do {
      iVar12 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_100 = (long *)*puVar6;
      FUN_02a44274(lVar18 + 0xd8,&local_100);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x180) + 0x10))(&local_100);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_01caa5c4(&local_88,&local_100);
  plVar15 = local_100;
  if (local_100 != (long *)0x0) {
    plVar28 = local_100 + 1;
    do {
      iVar12 = (int)*plVar28 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar3) {
        *(int *)plVar28 = iVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_110 = (undefined4)*plVar15;
      fStack_10c = (float)((ulong)*plVar15 >> 0x20);
      FUN_02a44274(lVar18 + 0xd8,&local_110);
    }
  }
  FUN_00abc168(param_1 + 0x240,&local_88);
  puVar6 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar16 = (int *)(local_88 + 1);
    do {
      iVar12 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_100 = (long *)*puVar6;
      FUN_02a44274(lVar18 + 0xd8,&local_100);
    }
  }
  local_90 = *(long **)(param_1 + 0x68);
  if (local_90 != (long *)0x0) {
    lVar18 = local_90[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01d9ada8;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar18 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_100 = (long *)0x32b64a2075e1e63f;
  pcStack_f8 = "pokemon_controller";
  local_f0 = 0x12;
  local_e8 = (long *)0x0;
  FUN_01cb51e0(&local_90,lVar17,&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    lVar18 = local_90[0xb];
    piVar16 = (int *)(lVar18 + 0xc);
    do {
      iVar12 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  local_98 = *(long **)(param_1 + 0x68);
  if (local_98 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    lVar18 = local_98[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01d9ada8;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar18 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar15 = local_98;
  }
  FUN_01cb9a20(&local_98,lVar17,&local_100);
  if (plVar15 != (long *)0x0) {
    lVar18 = plVar15[0xb];
    piVar16 = (int *)(lVar18 + 0xc);
    do {
      iVar12 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  FUN_01d98a18(param_1,param_1 + 0x7f0);
  plVar15 = (long *)FUN_01caed6c(&local_100,*(undefined8 *)(param_1 + 8));
  if (plVar15 == (long *)0x0) {
    local_a0 = (long *)0x0;
  }
  else {
    lVar18 = plVar15[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01d9ada8;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar18 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar18 = plVar15[0xb];
    local_a0 = plVar15;
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01d9ada8;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar18 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_100 = (long *)0x32b64a2075e1e63f;
  pcStack_f8 = "pokemon_controller";
  local_f0 = 0x12;
  local_e8 = (long *)0x0;
  FUN_01cb17d0(&local_a0,&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    lVar18 = local_a0[0xb];
    piVar16 = (int *)(lVar18 + 0xc);
    do {
      iVar12 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  *(undefined4 *)((long)plVar15 + 0xac) = 0x1002e000;
  plVar28 = *(long **)(*(long *)(param_1 + 0x1b8) + 0x5e8);
  if (plVar28 != (long *)0x0) {
    plVar29 = plVar28 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar3) {
        *(int *)plVar29 = (int)*plVar29 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar7 = FUN_02c6d5b0(plVar28[0x13]);
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar14 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar14;
  uVar8 = FUN_02c6849c(plVar28[0x13]);
  uVar9 = FUN_02c6f924(plVar28[0x13]);
  piVar16 = (int *)FUN_010aa96c(uVar14,uVar8,uVar9,uVar7 & 1);
  if (((*(ushort *)((long)piVar16 - (long)*piVar16) < 0x49) ||
      (uVar19 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[0x24], uVar19 == 0)) ||
     (fVar30 = *(float *)((long)piVar16 + uVar19), fVar30 <= 0.0)) {
    uVar10 = FUN_02c6d8ec(plVar28[0x13]);
    uVar8 = FUN_02c6849c(plVar28[0x13]);
    uVar9 = FUN_02c6f924(plVar28[0x13]);
    uVar11 = FUN_02c6f5e8(plVar28[0x13]);
    uVar19 = FUN_010a0360(uVar8,uVar9,uVar11,uVar7 & 1,uVar10 & 1);
    local_d0 = 0x82f2d4b929fa149d;
    pcStack_c8 = "L_autoForwardEasing";
    local_100 = (long *)&DAT_d1a80c5e7d9bc8d4;
    pcStack_f8 = "S_autoForwardEasing";
    local_f0 = 0x13;
    local_e8 = (long *)0xd981d302a3f7783a;
    local_e0 = "M_autoForwardEasing";
    uStack_d8 = 0x13;
    local_c0 = 0x13;
    uStack_b8 = 0xb846f978e0c68d7;
    local_b0 = "LL_autoForwardEasing";
    uStack_a8 = 0x14;
    plVar29 = (&local_100)[(uVar19 & 0xff) * 3];
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar18 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar18;
    uVar19 = *(ulong *)(lVar18 + 0x60);
    uVar8 = 0;
    if (uVar19 != 0) {
      uVar21 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar22 = uVar19 - 1 & 0x32b64a2075e1e63f;
      }
      else {
        uVar22 = 0x32b64a2075e1e63f;
        if (uVar19 < 0x32b64a2075e1e640) {
          uVar22 = 0;
          if (uVar19 != 0) {
            uVar22 = 0x32b64a2075e1e63f / uVar19;
          }
          uVar22 = 0x32b64a2075e1e63f - uVar22 * uVar19;
        }
      }
      plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar22 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar21 < 2) {
          do {
            if (plVar24[1] == 0x32b64a2075e1e63f) {
              if (plVar24[2] == 0x32b64a2075e1e63f) goto LAB_01d9a2e4;
            }
            else if ((plVar24[1] & uVar19 - 1) != uVar22) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar24[1];
            if (uVar21 == 0x32b64a2075e1e63f) {
              if (plVar24[2] == 0x32b64a2075e1e63f) goto LAB_01d9a2e4;
            }
            else {
              if (uVar19 <= uVar21) {
                uVar4 = 0;
                if (uVar19 != 0) {
                  uVar4 = uVar21 / uVar19;
                }
                uVar21 = uVar21 - uVar4 * uVar19;
              }
              if (uVar21 != uVar22) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    goto LAB_01d9a434;
  }
  *(float *)((long)plVar15 + 0x9c) = fVar30;
  lVar18 = *(long *)(param_1 + 0x90);
  pbVar5 = PTR_DAT_043796e0;
  puVar6 = (undefined8 *)PTR_DAT_043796e8;
  goto joined_r0x01d9a43c;
LAB_01d9a2e4:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar1 = plVar24 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar25 = (long *)plVar24[0x21];
    uVar8 = 0;
    if (plVar25 != (long *)0x0) {
      uVar19 = (long)plVar25 - ((ulong)plVar25 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        plVar23 = (long *)((long)plVar25 - 1U & (ulong)plVar29);
      }
      else {
        plVar23 = plVar29;
        if (plVar25 <= plVar29) {
          uVar21 = 0;
          if (plVar25 != (long *)0x0) {
            uVar21 = (ulong)plVar29 / (ulong)plVar25;
          }
          plVar23 = (long *)((long)plVar29 - uVar21 * (long)plVar25);
        }
      }
      plVar26 = *(long **)(plVar24[0x20] + (long)plVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar19 < 2) {
          do {
            if ((long *)plVar26[1] == plVar29) {
              if ((long *)plVar26[2] == plVar29) goto LAB_01d9a41c;
            }
            else if ((long *)((ulong)plVar26[1] & (long)plVar25 - 1U) != plVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            plVar27 = (long *)plVar26[1];
            if (plVar27 == plVar29) {
              if ((long *)plVar26[2] == plVar29) goto LAB_01d9a41c;
            }
            else {
              if (plVar25 <= plVar27) {
                uVar19 = 0;
                if (plVar25 != (long *)0x0) {
                  uVar19 = (ulong)plVar27 / (ulong)plVar25;
                }
                plVar27 = (long *)((long)plVar27 - uVar19 * (long)plVar25);
              }
              if (plVar27 != plVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_01d9a420;
  }
  goto LAB_01d9a434;
LAB_01d9a41c:
  uVar8 = (undefined4)plVar26[6];
LAB_01d9a420:
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar24 + 0x10))();
  }
LAB_01d9a434:
  *(undefined4 *)((long)plVar15 + 0x9c) = uVar8;
  lVar18 = *(long *)(param_1 + 0x90);
  pbVar5 = PTR_DAT_043796e0;
  puVar6 = (undefined8 *)PTR_DAT_043796e8;
joined_r0x01d9a43c:
  PTR_DAT_043796e0 = pbVar5;
  PTR_DAT_043796e8 = (undefined *)puVar6;
  if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
    piVar16 = (int *)(lVar18 + 0xc);
    iVar12 = *(int *)(lVar18 + 0xc);
    do {
      plVar29 = *(long **)(lVar18 + 0x10);
      if (((*pbVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar5), iVar13 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar14;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *puVar6 = PTR_DAT_043794d8;
        __cxa_guard_release(pbVar5);
      }
      while( true ) {
        if (plVar29 == (long *)0x0) goto LAB_01d9a440;
        if (plVar29 == puVar6) break;
        plVar29 = (long *)*plVar29;
      }
      iVar13 = *piVar16;
      if (iVar13 == iVar12) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = iVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar18 = *(long *)(lVar18 + 0x18);
          plVar29 = (long *)(lVar18 + -0x50);
          if (lVar18 != 0) {
            FUN_0199ce28(&local_100,plVar29);
            FUN_018ff388(param_1 + 0x210,&local_100);
            plVar24 = local_100;
            if (local_100 != (long *)0x0) {
              plVar1 = local_100 + 1;
              do {
                iVar12 = (int)*plVar1 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *(int *)plVar1 = iVar12;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar12 == 0) {
                local_100[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar20 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar20;
                local_88 = (undefined8 *)*plVar24;
                FUN_02a44274(lVar20 + 0xd8,&local_88);
              }
            }
            lVar18 = *(long *)(lVar18 + 8);
            piVar16 = (int *)(lVar18 + 0xc);
            do {
              iVar12 = *piVar16;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar3) {
                *piVar16 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*plVar29 + 0x20))(plVar29);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar13;
    } while (iVar13 != 0);
  }
LAB_01d9a440:
  (**(code **)(*plVar15 + 0x10))(&local_100,plVar15);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_01caa8c4(&local_88,&local_100);
  plVar29 = local_100;
  if (local_100 != (long *)0x0) {
    plVar24 = local_100 + 1;
    do {
      iVar12 = (int)*plVar24 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *(int *)plVar24 = iVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_110 = (undefined4)*plVar29;
      fStack_10c = (float)((ulong)*plVar29 >> 0x20);
      FUN_02a44274(lVar18 + 0xd8,&local_110);
    }
  }
  FUN_01caf6a8(param_1 + 0x2c8,&local_88);
  puVar6 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar16 = (int *)(local_88 + 1);
    do {
      iVar12 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_100 = (long *)*puVar6;
      FUN_02a44274(lVar18 + 0xd8,&local_100);
    }
  }
  local_110 = 0;
  fStack_10c = 0.0;
  fStack_108 = 0.0;
  FUN_01d98a18(param_1,&local_110);
  *(float *)(param_1 + 0x530) = fStack_10c;
  *(float *)(param_1 + 0x534) = fStack_108;
  *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x81c);
  *(undefined1 *)(param_1 + 0x544) = 1;
  *(float *)(param_1 + 0x538) = fStack_108 * 0.5 + fStack_10c;
  (**(code **)(**(long **)(param_1 + 0x810) + 0x10))(&local_100);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_01afeab4(&local_88,&local_100);
  plVar29 = local_100;
  if (local_100 != (long *)0x0) {
    plVar24 = local_100 + 1;
    do {
      iVar12 = (int)*plVar24 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *(int *)plVar24 = iVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_68 = *plVar29;
      FUN_02a44274(lVar18 + 0xd8,&local_68);
    }
  }
  FUN_01b01b6c(param_1 + 0x220,&local_88);
  puVar6 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar16 = (int *)(local_88 + 1);
    do {
      iVar12 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_100 = (long *)*puVar6;
      FUN_02a44274(lVar18 + 0xd8,&local_100);
    }
  }
  lVar17 = FUN_01caf9a8(*(long *)(param_1 + 0x68),*(undefined8 *)(*(long *)(param_1 + 0x68) + 8),
                        lVar17);
  if (lVar17 != 0) {
    lVar18 = *(long *)(lVar17 + 0x58);
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01d9ada8;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar18 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar29 = *(long **)(param_1 + 0x1c0);
  *(long *)(param_1 + 0x1c0) = lVar17;
  if (plVar29 == (long *)0x0) {
LAB_01d9a6e0:
    plVar29 = *(long **)(param_1 + 0x1c0);
  }
  else {
    lVar17 = plVar29[0xb];
    piVar16 = (int *)(lVar17 + 0xc);
    do {
      iVar12 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 != 0) goto LAB_01d9a6e0;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar29 + 0x20))();
    plVar29 = *(long **)(param_1 + 0x1c0);
  }
  if (plVar29 != (long *)0x0) {
    lVar17 = plVar29[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d9ada8;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar17 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar24 = *(long **)(param_1 + 0x188);
  *(long **)(param_1 + 0x188) = plVar29;
  if (plVar24 != (long *)0x0) {
    lVar17 = plVar24[0xb];
    piVar16 = (int *)(lVar17 + 0xc);
    do {
      iVar12 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))();
    }
    plVar29 = *(long **)(param_1 + 0x188);
  }
  plVar24 = *(long **)(param_1 + 0x1b8);
  local_118 = plVar29;
  if (plVar29 != (long *)0x0) {
    lVar17 = plVar29[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_01d9ada8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar17 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar24 + 0xf8))(plVar24,&local_118);
  if (local_118 != (long *)0x0) {
    lVar17 = local_118[0xb];
    piVar16 = (int *)(lVar17 + 0xc);
    do {
      iVar12 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_118 + 0x20))();
    }
  }
  lVar17 = *(long *)(param_1 + 0x1c0);
  (**(code **)(**(long **)(param_1 + 0x1b0) + 0x10))(&local_100);
  local_128 = (undefined8 *)0x0;
  uStack_120 = 0;
  FUN_01caabc4(&local_128,&local_100);
  plVar29 = local_100;
  if (local_100 != (long *)0x0) {
    plVar24 = local_100 + 1;
    do {
      iVar12 = (int)*plVar24 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *(int *)plVar24 = iVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_88 = (undefined8 *)*plVar29;
      FUN_02a44274(lVar18 + 0xd8,&local_88);
    }
  }
  FUN_01b3c478(lVar17 + 0xe90,&local_128);
  puVar6 = local_128;
  if (local_128 != (undefined8 *)0x0) {
    piVar16 = (int *)(local_128 + 1);
    do {
      iVar12 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      local_128[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_100 = (long *)*puVar6;
      FUN_02a44274(lVar17 + 0xd8,&local_100);
    }
  }
  if (plVar28 != (long *)0x0) {
    plVar29 = plVar28 + 10;
    do {
      iVar12 = (int)*plVar29 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar3) {
        *(int *)plVar29 = iVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
    }
  }
  lVar17 = plVar15[0xb];
  piVar16 = (int *)(lVar17 + 0xc);
  do {
    iVar12 = *piVar16;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar3) {
      *piVar16 = iVar12 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  return param_1 + 0x120;
}


