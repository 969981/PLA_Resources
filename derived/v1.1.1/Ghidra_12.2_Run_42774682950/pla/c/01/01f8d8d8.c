/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f8d8d8; name: FUN_01f8d8d8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f8d8d8(long param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  ulong *puVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined **ppuVar28;
  ulong uVar29;
  long *local_1f8;
  long *local_1f0;
  long *local_1e8;
  long *local_1e0;
  long *local_1d8;
  long *local_1d0;
  long *local_1c8;
  undefined **local_1c0;
  long *local_1b8;
  int local_1b0;
  long *local_1a8;
  undefined8 *local_1a0;
  long *local_198;
  long *local_190;
  long *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  long *local_170;
  long *local_168;
  undefined **local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 *local_140;
  long lStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  char local_110;
  char local_100;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  uint local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined2 local_d0;
  long *local_b8;
  undefined1 auStack_b0 [24];
  long *local_98;
  long *local_90;
  long *local_88 [2];
  long *local_78 [3];
  
  puVar12 = PTR_DAT_043796e0;
  iVar15 = *(int *)(param_2 + (long)param_3 * 2 + 5);
  if (iVar15 == 0) {
    return;
  }
  lVar25 = *(long *)(param_1 + 0x18);
  if (lVar25 == 0) {
    return;
  }
  puVar1 = (ulong *)((long)param_2 + (long)param_3 * 0x10 + 0x2c);
  uVar10 = *puVar1;
  uVar7 = *puVar1;
  uVar6 = *puVar1;
  uVar29 = (ulong)*(uint *)((long)param_2 + (long)param_3 * 0x10 + 0x34);
  plVar21 = *(long **)(param_1 + 0x38);
  if (*(int *)(lVar25 + 0xc) == 0) {
    return;
  }
  piVar2 = (int *)(lVar25 + 0xc);
  iVar17 = *(int *)(lVar25 + 0xc);
  do {
    plVar24 = *(long **)(lVar25 + 0x10);
    if (((*puVar12 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar12), iVar16 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar16 != 0)) {
        uVar18 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar18;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar12);
    }
    while( true ) {
      if (plVar24 == (long *)0x0) {
        return;
      }
      if (plVar24 == (long *)PTR_DAT_043796e8) break;
      plVar24 = (long *)*plVar24;
    }
    iVar16 = *piVar2;
    if (iVar16 == iVar17) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar25 = *(long *)(lVar25 + 0x18);
        if (lVar25 == 0) {
          return;
        }
        FUN_0199c220(&local_180,(long *)(lVar25 + -0x50));
        puVar27 = local_180;
        if (local_180 == (undefined8 *)0x0) {
          local_1f8 = (long *)0x0;
          goto LAB_01f8d9f4;
        }
        if (*(int *)((long)local_180 + 0xc) == 0) goto LAB_01f8f270;
        piVar2 = (int *)((long)local_180 + 0xc);
        iVar17 = *(int *)((long)local_180 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar17 = iVar16;
    if (iVar16 == 0) {
      return;
    }
  } while( true );
  do {
    plVar24 = (long *)puVar27[2];
    if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar16 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar16 != 0)) {
        uVar18 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar18;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_0437a0e8);
    }
    while( true ) {
      if (plVar24 == (long *)0x0) goto LAB_01f8f270;
      if (plVar24 == (long *)PTR_DAT_0437a0f0) break;
      plVar24 = (long *)*plVar24;
    }
    iVar16 = *piVar2;
    if (iVar16 == iVar17) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar22 = puVar27[3];
        local_1f8 = (long *)0x0;
        puVar27 = local_180;
        if (lVar22 != 0) {
          local_1f8 = (long *)(lVar22 + -0x50);
        }
        goto joined_r0x01f8f194;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar17 = iVar16;
  } while (iVar16 != 0);
LAB_01f8f270:
  local_1f8 = (long *)0x0;
  puVar27 = local_180;
joined_r0x01f8f194:
  local_180 = puVar27;
  if (puVar27 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar27 + 1);
    do {
      iVar17 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar17 + -1 == 0) {
      puVar27[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_1b8 = (long *)*puVar27;
      FUN_02a44274(lVar22 + 0xd8,&local_1b8);
    }
  }
LAB_01f8d9f4:
  if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar17 != 0)) {
    local_180 = (undefined8 *)FUN_00938550();
    puVar11 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_180);
    FUN_00100250(PTR_LAB_0437a8d8,puVar11,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  FUN_02a47560(auStack_b0,PTR_DAT_0437a7d0);
  FUN_01845684(&local_90,local_1f8,plVar21,auStack_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_180 = (undefined8 *)local_1f8[0x12];
  local_178 = (undefined8 *)local_1f8[0x13];
  FUN_00bd8988(local_90,local_90[1],&local_180);
  puVar13 = PTR_DAT_0437a120;
  puVar11 = PTR_DAT_04379570;
  local_90[0x1a] = 0;
  local_90[0x1b] = 0;
  lVar22 = *(long *)(puVar13 + 8);
  local_90[0x16] = *(long *)puVar13;
  local_90[0x17] = lVar22;
  puVar27 = *(undefined8 **)puVar11;
  lVar22 = *(long *)(puVar11 + 8);
  *(undefined1 *)(local_90 + 0x1c) = 1;
  local_90[0x18] = (long)puVar27;
  local_90[0x19] = lVar22;
  if (iVar15 == 1) {
    local_168 = (long *)CONCAT44(local_168._4_4_,1);
    local_f0 = 1;
    local_170 = (long *)(PTR_DAT_04382858 + 0x10);
    local_150 = 0;
    uStack_148 = 0;
    local_160 = &PTR_FUN_04287c08;
    local_180 = (undefined8 *)0x0;
    local_110 = '\0';
    local_130 = 0;
    uStack_128 = 0;
    local_120 = local_120 & 0xffffffffffffff00;
    local_ec = 0x3f000000bf800000;
    local_e4 = 0x3f000000;
    local_e0 = local_e0 & 0xffff0000;
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar22 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar22;
    local_180 = *(undefined8 **)(lVar22 + 0x230);
    local_150 = 0;
    uStack_148 = 0;
    local_140 = (undefined8 *)CONCAT44(local_140._4_4_,(int)uVar10);
    local_f0 = 0;
    local_130 = CONCAT44(local_130._4_4_,0x14);
    local_e0 = CONCAT31(local_e0._1_3_,1);
    local_b8 = local_90;
    if (local_90 != (long *)0x0) {
      lVar22 = local_90[0xb];
      if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_01f8f87c;
      if (*(long *)(lVar22 + 0x10) == 0) {
        uVar18 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
        *(undefined8 *)(lVar22 + 0x10) = uVar18;
      }
      piVar2 = (int *)(lVar22 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_01c6be8c(&local_1b8,&local_b8,&local_180);
    local_1f0 = local_1b8;
    local_1b8 = (long *)0x0;
    if (local_b8 != (long *)0x0) {
      lVar22 = local_b8[0xb];
      piVar2 = (int *)(lVar22 + 0xc);
      do {
        iVar15 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
      }
    }
    if (local_110 != '\0') {
      local_110 = '\0';
    }
  }
  else {
    if (iVar15 == 2) {
      local_168 = (long *)CONCAT44(local_168._4_4_,3);
      local_160 = &PTR_FUN_04287c30;
      local_180 = (undefined8 *)0x0;
      local_100 = '\0';
      local_170 = (long *)(PTR_DAT_04382390 + 0x10);
      local_110 = '\0';
      local_150 = 0;
      uStack_148 = 0;
      local_e0 = 1;
      local_120 = 0;
      uStack_118 = 0;
      local_dc = 0x3f000000bf800000;
      local_d4 = 0x3f000000;
      local_d0 = 0;
      if (((*PTR_DAT_0437a648 & 1) == 0) &&
         (local_140 = puVar27, lStack_138 = lVar22, iVar15 = __cxa_guard_acquire(PTR_DAT_0437a648),
         iVar15 != 0)) {
        FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a648);
      }
      lVar23 = *(long *)PTR_DAT_0437a650;
      *(long *)PTR_DAT_0437a658 = lVar23;
      local_180 = *(undefined8 **)(lVar23 + 0x230);
      local_150 = 0;
      uStack_148 = 0;
      local_120 = CONCAT44(local_120._4_4_,0x14);
      local_d0 = CONCAT11(local_d0._1_1_,1);
      local_188 = local_90;
      local_140 = puVar27;
      lStack_138 = lVar22;
      local_130 = uVar6;
      if (local_90 != (long *)0x0) {
        lVar23 = local_90[0xb];
        if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01f8f87c;
        if (*(long *)(lVar23 + 0x10) == 0) {
          uVar18 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
          *(undefined8 *)(lVar23 + 0x10) = uVar18;
        }
        piVar2 = (int *)(lVar23 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_018f5e7c(&local_1b8,&local_188,&local_180);
      local_1f0 = local_1b8;
      if (local_188 != (long *)0x0) {
        lVar22 = local_188[0xb];
        piVar2 = (int *)(lVar22 + 0xc);
        do {
          iVar15 = *piVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          plVar24 = local_188;
        } while (cVar4 != '\0');
LAB_01f8eb18:
        local_1b8 = (long *)0x0;
        if (iVar15 == 0) {
          *(undefined8 *)(lVar22 + 0x18) = 0;
          (**(code **)(*plVar24 + 0x20))();
        }
      }
    }
    else {
      local_1f0 = (long *)0x0;
      if (iVar15 != 3) goto LAB_01f8dbc8;
      local_120 = 0;
      uStack_118 = 0;
      local_160 = &PTR_FUN_04287c58;
      local_100 = '\0';
      local_110 = '\0';
      local_168 = (long *)CONCAT44(local_168._4_4_,2);
      local_170 = (long *)(PTR_DAT_04382860 + 0x10);
      local_e0 = 1;
      local_180 = (undefined8 *)0x0;
      local_dc = 0x3f000000bf800000;
      local_150 = 0;
      uStack_148 = 0;
      local_d4 = 0x3f000000;
      local_190 = local_90;
      local_d0 = 1;
      local_140 = puVar27;
      lStack_138 = lVar22;
      local_130 = uVar7;
      uStack_128 = uVar29;
      if (local_90 != (long *)0x0) {
        lVar23 = local_90[0xb];
        if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01f8f87c;
        if (*(long *)(lVar23 + 0x10) == 0) {
          uVar18 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
          *(undefined8 *)(lVar23 + 0x10) = uVar18;
        }
        piVar2 = (int *)(lVar23 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_01c6d310(&local_1b8,&local_190,&local_180);
      local_1f0 = local_1b8;
      if (local_190 != (long *)0x0) {
        lVar22 = local_190[0xb];
        piVar2 = (int *)(lVar22 + 0xc);
        do {
          iVar15 = *piVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          plVar24 = local_190;
        } while (cVar4 != '\0');
        goto LAB_01f8eb18;
      }
    }
    if (local_100 != '\0') {
      local_100 = '\0';
    }
  }
LAB_01f8dbc8:
  local_1b8 = (long *)*param_2;
  local_1b0 = param_3;
  (**(code **)(*(long *)*param_4 + 0x10))(&local_180);
  local_1a8 = (undefined8 *)0x0;
  local_1a0 = (undefined8 *)0x0;
  do {
    puVar27 = local_178;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(&local_178,0x10);
    if (bVar5) {
      local_178 = (undefined8 *)0x0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar18 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar18;
  FUN_02a44e0c(&local_1c8,uVar18,puVar27);
  puVar9 = local_180;
  local_180 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar9 + 1);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_88[0] = (long *)*puVar9;
      FUN_02a44274(lVar22 + 0xd8,local_88);
    }
  }
  plVar24 = local_1a8;
  local_1a8 = (long *)0x0;
  if (local_1c8 == (long *)0x0) {
    if (plVar24 != (undefined8 *)0x0) {
      piVar2 = (int *)(plVar24 + 1);
      do {
        iVar15 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 == 1) {
        plVar24[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_88[0] = (long *)*plVar24;
        FUN_02a44274(lVar22 + 0xd8,local_88);
      }
    }
    puVar27 = (undefined8 *)0x0;
  }
  else {
    plVar19 = local_1c8;
    if (plVar24 != (undefined8 *)0x0) {
      piVar2 = (int *)(plVar24 + 1);
      do {
        iVar15 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 + -1 == 0) {
        plVar24[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_88[0] = (long *)*plVar24;
        FUN_02a44274(lVar22 + 0xd8,local_88);
      }
      plVar19 = local_1c8;
    }
    local_1c8 = (long *)0x0;
    local_1a8 = plVar19;
  }
  plVar24 = local_1c8;
  local_1a0 = puVar27;
  if (local_1c8 != (long *)0x0) {
    plVar19 = local_1c8 + 1;
    do {
      iVar15 = (int)*plVar19 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *(int *)plVar19 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      local_1c8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_88[0] = (long *)*plVar24;
      FUN_02a44274(lVar22 + 0xd8,local_88);
    }
  }
  puVar27 = local_180;
  if (local_180 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_180 + 1);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      local_180[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_88[0] = (long *)*puVar27;
      FUN_02a44274(lVar22 + 0xd8,local_88);
    }
  }
  local_198 = local_1f0;
  if (local_1f0 != (long *)0x0) {
    lVar22 = local_1f0[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_01f8f87c;
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar18;
    }
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar24 = local_90;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04379520), puVar11 = PTR_DAT_04379528, iVar15 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar22 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = plVar21;
  *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
  plVar19 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x280,0x10);
  if (plVar19 == (long *)0x0) {
    (**(code **)(*plVar21 + 0xb8))();
  }
  FUN_01f8abcc(plVar19,&local_1b8);
  plVar19[1] = (long)plVar21;
  plVar19[2] = (long)plVar19;
  plVar19[3] = 0x280;
  plVar19[4] = 0x10;
  *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
  if (plVar19 != (long *)0x0) {
    lVar22 = plVar19[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_01f8f87c;
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar18;
    }
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar21 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 9;
  }
  (**(code **)(*plVar21 + 0xb8))(plVar21,plVar24);
  local_180 = (undefined8 *)0x0;
  local_178 = (undefined8 *)0x0;
  FUN_009ad580(&local_180,plVar24 + 99);
  (**(code **)(*plVar21 + 0xc0))(plVar21,&local_180);
  puVar27 = local_180;
  if (local_180 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_180 + 1);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      local_180[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_88[0] = (long *)*puVar27;
      FUN_02a44274(lVar22 + 0xd8,local_88);
    }
  }
  (**(code **)(*plVar21 + 200))(plVar21,*(undefined1 *)((long)plVar24 + 0x33b));
  (**(code **)(*plVar21 + 0x90))(plVar21);
  local_88[0] = plVar19;
  FUN_02a4dad4(plVar24 + 0x1e,local_88);
  if (local_88[0] != (long *)0x0) {
    lVar22 = local_88[0][0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_88[0] + 0x20))();
    }
  }
  local_130 = local_130 & 0xffffffffffffff00;
  local_140 = (undefined8 *)0x0;
  lStack_138 = 0;
  local_178 = (undefined8 *)0x0;
  local_180 = (undefined8 *)CONCAT44(local_180._4_4_,0x24);
  local_150 = 0;
  uStack_148 = 0;
  local_160 = (undefined **)0x0;
  local_158 = (undefined8 *)0x0;
  local_170 = (long *)0x0;
  local_168 = (undefined8 *)0x0;
  (**(code **)(*plVar19 + 0x18))(local_88,plVar19);
  local_1c8 = (undefined8 *)0x0;
  local_1c0 = (undefined **)0x0;
  FUN_01f876ec(&local_1c8,local_88);
  plVar21 = local_88[0];
  if (local_88[0] != (long *)0x0) {
    plVar24 = local_88[0] + 1;
    do {
      iVar15 = (int)*plVar24 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      local_88[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_78[0] = (long *)*plVar21;
      FUN_02a44274(lVar22 + 0xd8,local_78);
    }
  }
  do {
    ppuVar28 = local_1c0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(&local_1c0,0x10);
    if (bVar5) {
      local_1c0 = (undefined **)0x0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar18 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar18;
  FUN_02a44e0c(local_78,uVar18,ppuVar28);
  plVar21 = local_1c8;
  local_1c8 = (long *)0x0;
  if (plVar21 != (undefined8 *)0x0) {
    piVar2 = (int *)(plVar21 + 1);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      plVar21[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_88[0] = (long *)*plVar21;
      FUN_02a44274(lVar22 + 0xd8,local_88);
    }
  }
  plVar21 = local_168;
  local_168 = (long *)0x0;
  if (local_78[0] == (long *)0x0) {
    if (plVar21 != (undefined8 *)0x0) {
      piVar2 = (int *)(plVar21 + 1);
      do {
        iVar15 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 == 1) {
        plVar21[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_88[0] = (long *)*plVar21;
        FUN_02a44274(lVar22 + 0xd8,local_88);
      }
    }
    ppuVar28 = (undefined **)0x0;
  }
  else {
    plVar24 = local_78[0];
    if (plVar21 != (undefined8 *)0x0) {
      piVar2 = (int *)(plVar21 + 1);
      do {
        iVar15 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 + -1 == 0) {
        plVar21[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_88[0] = (long *)*plVar21;
        FUN_02a44274(lVar22 + 0xd8,local_88);
      }
      plVar24 = local_78[0];
    }
    local_78[0] = (long *)0x0;
    local_168 = plVar24;
  }
  plVar21 = local_78[0];
  local_160 = ppuVar28;
  if (local_78[0] != (long *)0x0) {
    plVar24 = local_78[0] + 1;
    do {
      iVar15 = (int)*plVar24 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_88[0] = (long *)*plVar21;
      FUN_02a44274(lVar22 + 0xd8,local_88);
    }
  }
  plVar21 = local_1c8;
  if (local_1c8 != (long *)0x0) {
    plVar24 = local_1c8 + 1;
    do {
      iVar15 = (int)*plVar24 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      local_1c8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_88[0] = (long *)*plVar21;
      FUN_02a44274(lVar22 + 0xd8,local_88);
    }
  }
  local_1d0 = local_1f0;
  if (local_1f0 != (long *)0x0) {
    lVar22 = local_1f0[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_01f8f87c;
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar18;
    }
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_01e4b6a0(&local_1d0,&local_180);
  puVar27 = local_140;
  if (local_1d0 != (long *)0x0) {
    lVar22 = local_1d0[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_1d0 + 0x20))();
      puVar27 = local_140;
    }
  }
  local_140 = puVar27;
  if (puVar27 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar27 + 1);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      puVar27[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_88[0] = (long *)*puVar27;
      FUN_02a44274(lVar22 + 0xd8,local_88);
    }
  }
  puVar27 = local_158;
  if (local_158 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_158 + 1);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      local_158[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_88[0] = (long *)*puVar27;
      FUN_02a44274(lVar22 + 0xd8,local_88);
    }
  }
  plVar21 = local_168;
  if (local_168 != (long *)0x0) {
    plVar24 = local_168 + 1;
    do {
      iVar15 = (int)*plVar24 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      local_168[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_88[0] = (long *)*plVar21;
      FUN_02a44274(lVar22 + 0xd8,local_88);
    }
  }
  puVar27 = local_178;
  if (local_178 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_178 + 1);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      local_178[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_88[0] = (long *)*puVar27;
      FUN_02a44274(lVar22 + 0xd8,local_88);
    }
  }
  lVar22 = *(long *)(param_1 + 0x18);
  if ((lVar22 != 0) && (*(int *)(lVar22 + 0xc) != 0)) {
    piVar2 = (int *)(lVar22 + 0xc);
    iVar15 = *(int *)(lVar22 + 0xc);
    do {
      plVar21 = *(long **)(lVar22 + 0x10);
      if (((*puVar12 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar12), iVar17 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar17 != 0)) {
          uVar18 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar18;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar12);
      }
      while( true ) {
        if (plVar21 == (long *)0x0) goto LAB_01f8e480;
        if (plVar21 == (long *)PTR_DAT_043796e8) break;
        plVar21 = (long *)*plVar21;
      }
      iVar17 = *piVar2;
      if (iVar17 == iVar15) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar22 = *(long *)(lVar22 + 0x18);
          plVar21 = (long *)(lVar22 + -0x50);
          if (lVar22 != 0) {
            FUN_0199ce28(&local_180,plVar21);
            puVar27 = local_180;
            puVar12 = PTR_DAT_0437a668;
            if (local_180 == (undefined8 *)0x0) goto LAB_01f8f328;
            if (*(int *)((long)local_180 + 0xc) == 0) goto LAB_01f8f4ac;
            piVar2 = (int *)((long)local_180 + 0xc);
            iVar15 = *(int *)((long)local_180 + 0xc);
            goto LAB_01f8f3f8;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar15 = iVar17;
    } while (iVar17 != 0);
  }
  goto LAB_01f8e480;
  while (iVar15 = iVar17, iVar17 != 0) {
LAB_01f8f3f8:
    plVar24 = (long *)puVar27[2];
    if (((*puVar12 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar12), iVar17 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar17 != 0)) {
        uVar18 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar18;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_0437a660 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar12);
    }
    plVar8 = (long *)0x0;
    puVar9 = local_180;
    if (plVar24 == (long *)0x0) goto joined_r0x01f8f4d0;
    while (plVar24 != (long *)PTR_DAT_0437a660) {
      plVar24 = (long *)*plVar24;
      if (plVar24 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto joined_r0x01f8f4d0;
      }
    }
    iVar17 = *piVar2;
    if (iVar17 == iVar15) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar23 = puVar27[3];
        plVar8 = (long *)0x0;
        if (lVar23 != 0) {
          plVar8 = (long *)(lVar23 + -0x50);
        }
        goto joined_r0x01f8f4d0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_01f8f4ac:
  plVar8 = (long *)0x0;
  puVar9 = local_180;
joined_r0x01f8f4d0:
  local_180 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar9 + 1);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_88[0] = (long *)*puVar9;
      FUN_02a44274(lVar23 + 0xd8,local_88);
    }
  }
  if (plVar8 != (long *)0x0) {
    FUN_02be88ac(&local_180,local_1f0,0);
    FUN_00ab5ae0(local_78,&local_180);
    puVar27 = local_180;
    if (local_180 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_180 + 1);
      do {
        iVar15 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 + -1 == 0) {
        local_180[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar23 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar23;
        local_88[0] = (long *)*puVar27;
        FUN_02a44274(lVar23 + 0xd8,local_88);
      }
    }
    if (local_78[0] != (long *)0x0) {
      plVar24 = (long *)0x0;
      if (plVar19 != (long *)0x0) {
        plVar24 = plVar19 + 0x3e;
      }
      (**(code **)(*plVar24 + 0x20))(local_88,plVar24);
      local_180 = (undefined8 *)0x0;
      local_178 = (undefined8 *)0x0;
      FUN_01800100(&local_180,local_88);
      plVar14 = local_88[0];
      if (local_88[0] != (long *)0x0) {
        plVar3 = local_88[0] + 1;
        do {
          iVar15 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 == 0) {
          local_88[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar23 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar23;
          local_1c8 = (long *)*plVar14;
          FUN_02a44274(lVar23 + 0xd8,&local_1c8);
        }
      }
      local_1d8 = local_78[0];
      local_170 = plVar24;
      if (local_78[0] != (long *)0x0) {
        lVar23 = local_78[0][0xb];
        if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01f8f87c;
        if (*(long *)(lVar23 + 0x10) == 0) {
          uVar18 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
          *(undefined8 *)(lVar23 + 0x10) = uVar18;
        }
        piVar2 = (int *)(lVar23 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_01e44b74(plVar8,0,&local_1d8,&local_180);
      if (local_1d8 != (long *)0x0) {
        lVar23 = local_1d8[0xb];
        piVar2 = (int *)(lVar23 + 0xc);
        do {
          iVar15 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar23 + 0x18) = 0;
          (**(code **)(*local_1d8 + 0x20))();
        }
      }
      puVar27 = local_180;
      if (local_180 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_180 + 1);
        do {
          iVar15 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          local_180[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar23 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar23;
          local_88[0] = (long *)*puVar27;
          FUN_02a44274(lVar23 + 0xd8,local_88);
        }
      }
      if (local_78[0] != (long *)0x0) {
        lVar23 = local_78[0][0xb];
        piVar2 = (int *)(lVar23 + 0xc);
        do {
          iVar15 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar23 + 0x18) = 0;
          (**(code **)(*local_78[0] + 0x20))();
        }
      }
    }
    lVar23 = plVar8[0xb];
    piVar2 = (int *)(lVar23 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
LAB_01f8f328:
  lVar22 = *(long *)(lVar22 + 8);
  piVar2 = (int *)(lVar22 + 0xc);
  do {
    iVar15 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar22 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
  }
LAB_01f8e480:
  uVar18 = *param_4;
  uVar26 = *(undefined8 *)(param_1 + 8);
  local_1e0 = local_90;
  if (local_90 != (long *)0x0) {
    lVar22 = local_90[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_01f8f87c;
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar20;
    }
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_1e8 = plVar19;
  if (plVar19 != (long *)0x0) {
    lVar22 = plVar19[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) {
LAB_01f8f87c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar20;
    }
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_01f8660c(uVar18,uVar26,&local_1e0,&local_1e8,param_3);
  if (local_1e8 != (long *)0x0) {
    lVar22 = local_1e8[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_1e8 + 0x20))();
    }
  }
  if (local_1e0 != (long *)0x0) {
    lVar22 = local_1e0[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_1e0 + 0x20))();
    }
  }
  (**(code **)(*local_90 + 0x98))(local_90,0);
  plVar21 = local_1a8;
  if (local_198 != (long *)0x0) {
    lVar22 = local_198[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_198 + 0x20))();
      plVar21 = local_1a8;
    }
  }
  local_1a8 = plVar21;
  if (plVar21 != (long *)0x0) {
    plVar24 = plVar21 + 1;
    do {
      iVar15 = (int)*plVar24 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      plVar21[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_180 = (undefined8 *)*plVar21;
      FUN_02a44274(lVar22 + 0xd8,&local_180);
    }
  }
  if (local_1f0 != (long *)0x0) {
    lVar22 = local_1f0[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_1f0 + 0x20))();
    }
  }
  if (local_90 != (long *)0x0) {
    lVar22 = local_90[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (local_1f8 != (long *)0x0) {
    lVar22 = local_1f8[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_1f8 + 0x20))();
    }
  }
  lVar22 = *(long *)(lVar25 + 8);
  piVar2 = (int *)(lVar22 + 0xc);
  do {
    iVar15 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar22 + 0x18) = 0;
    (**(code **)(*(long *)(lVar25 + -0x50) + 0x20))();
  }
  return;
}


