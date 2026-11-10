/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af475c; name: FUN_00af475c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00af475c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int *piVar14;
  long *plVar15;
  ulong uVar16;
  float *pfVar17;
  undefined8 *puVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  ulong *puVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long *local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_68;
  
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  lVar21 = *(long *)(param_1 + 0x200);
  if ((lVar21 != 0) && (*(int *)(lVar21 + 0xc) != 0)) {
    piVar14 = (int *)(lVar21 + 0xc);
    iVar11 = *(int *)(lVar21 + 0xc);
    do {
      plVar23 = *(long **)(lVar21 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
        uVar13 = FUN_00aa0310();
        *(undefined8 *)puVar6 = uVar13;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar23 == (long *)0x0) goto LAB_00af478c;
        if (plVar23 == (long *)puVar6) break;
        plVar23 = (long *)*plVar23;
      }
      iVar12 = *piVar14;
      if (iVar12 == iVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar21 = *(long *)(lVar21 + 0x18);
          plVar23 = (long *)(lVar21 + -0x50);
          if (lVar21 != 0) {
            FUN_00a9ecd4(&local_90,plVar23);
            puVar18 = local_90;
            puVar8 = PTR_DAT_0437a130;
            puVar7 = PTR_DAT_0437a128;
            puVar6 = PTR_DAT_043795d8;
            puVar5 = PTR_DAT_043794d0;
            if (local_90 == (undefined8 *)0x0) goto LAB_00af4dec;
            if (*(int *)((long)local_90 + 0xc) == 0) goto LAB_00af51f0;
            piVar14 = (int *)((long)local_90 + 0xc);
            iVar11 = *(int *)((long)local_90 + 0xc);
            goto LAB_00af4e8c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
  goto LAB_00af478c;
joined_r0x00af4d80:
  if (plVar15 == (long *)0x0) goto LAB_00af4c90;
  if (plVar15 == (long *)PTR_DAT_0437a630) {
    uVar10 = FUN_02daba6c(plVar23);
    *(undefined4 *)(param_1 + 0x2c8) = uVar10;
    uVar10 = FUN_02dabb68(plVar23);
    *(undefined4 *)(param_1 + 0x2cc) = uVar10;
    uVar10 = FUN_02dabc64(plVar23);
    *(undefined4 *)(param_1 + 0x2d0) = uVar10;
    if (*(char *)(param_1 + 0x25c) != '\0') {
      fVar25 = 0.0;
      if ((0xc < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
         (uVar16 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[6], uVar16 != 0)) {
        fVar25 = *(float *)((long)piVar14 + uVar16);
      }
      fVar24 = (float)FUN_02daafec(plVar23);
      *(float *)(param_1 + 0x2c8) = *(float *)(param_1 + 0x2c8) * (fVar25 / fVar24);
      fVar24 = (float)FUN_02daafec(plVar23);
      *(float *)(param_1 + 0x2cc) = *(float *)(param_1 + 0x2cc) * (fVar25 / fVar24);
      fVar24 = (float)FUN_02daafec(plVar23);
      *(float *)(param_1 + 0x2d0) = *(float *)(param_1 + 0x2d0) * (fVar25 / fVar24);
    }
    goto LAB_00af4c90;
  }
  plVar15 = (long *)*plVar15;
  goto joined_r0x00af4d80;
LAB_00af4c90:
  lVar21 = puVar18[1];
  piVar14 = (int *)(lVar21 + 0xc);
  do {
    iVar11 = *piVar14;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
    if (bVar4) {
      *piVar14 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  goto LAB_00af4834;
LAB_00af4e8c:
  do {
    plVar15 = (long *)puVar18[2];
    if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar13;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar6);
      }
      *(undefined **)puVar8 = PTR_DAT_043795e0;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar15 == (long *)0x0) goto LAB_00af51f0;
      if (plVar15 == (long *)puVar8) break;
      plVar15 = (long *)*plVar15;
    }
    iVar12 = *piVar14;
    if (iVar12 == iVar11) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar4) {
        *piVar14 = iVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar19 = puVar18[3];
        plVar15 = (long *)0x0;
        puVar18 = local_90;
        if (lVar19 != 0) {
          plVar15 = (long *)(lVar19 + -0x50);
        }
        goto joined_r0x00af4ee0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar12;
  } while (iVar12 != 0);
LAB_00af51f0:
  plVar15 = (long *)0x0;
  puVar18 = local_90;
joined_r0x00af4ee0:
  local_90 = puVar18;
  if (puVar18 != (undefined8 *)0x0) {
    piVar14 = (int *)(puVar18 + 1);
    do {
      iVar11 = *piVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar4) {
        *piVar14 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      puVar18[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_a0 = (long *)*puVar18;
      FUN_02a44274(lVar19 + 0xd8,&local_a0);
    }
  }
  if (plVar15 != (long *)0x0) {
    FUN_02a4754c(&local_90,PTR_DAT_0437a3d8);
    lVar19 = FUN_0289e9f4(plVar15,&local_90);
    if (lVar19 == 0) {
      local_a8 = (long *)0x0;
    }
    else {
      FUN_009cda48(&local_a8,lVar19,&local_a0);
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    (**(code **)(*local_a8 + 0x18))(&local_90);
    local_a0 = (long *)0x0;
    uStack_98 = 0;
    FUN_00af8310(&local_a0,&local_90);
    puVar18 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      piVar14 = (int *)(local_90 + 1);
      do {
        iVar11 = *piVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_68 = (long *)*puVar18;
        FUN_02a44274(lVar19 + 0xd8,&local_68);
      }
    }
    FUN_00af8610(param_1 + 0x210,&local_a0);
    plVar9 = local_a0;
    if (local_a0 != (long *)0x0) {
      plVar2 = local_a0 + 1;
      do {
        iVar11 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_90 = (undefined8 *)*plVar9;
        FUN_02a44274(lVar19 + 0xd8,&local_90);
      }
    }
    if (local_a8 != (long *)0x0) {
      lVar19 = local_a8[0xb];
      piVar14 = (int *)(lVar19 + 0xc);
      do {
        iVar11 = *piVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_a8 + 0x20))();
      }
    }
    lVar19 = plVar15[0xb];
    piVar14 = (int *)(lVar19 + 0xc);
    do {
      iVar11 = *piVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar4) {
        *piVar14 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
LAB_00af4dec:
  lVar21 = *(long *)(lVar21 + 8);
  piVar14 = (int *)(lVar21 + 0xc);
  do {
    iVar11 = *piVar14;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
    if (bVar4) {
      *piVar14 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
LAB_00af478c:
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar13 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar13;
  piVar14 = (int *)FUN_010aa4a0(uVar13,*(undefined4 *)(param_1 + 0x250),
                                *(undefined2 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 600));
  fVar24 = 0.0;
  fVar25 = 0.0;
  if (0x24 < *(ushort *)((long)piVar14 - (long)*piVar14)) {
    uVar16 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0x12];
    fVar25 = 0.0;
    if (uVar16 != 0) {
      fVar25 = *(float *)((long)piVar14 + uVar16);
    }
  }
  *(float *)(param_1 + 0x27c) = fVar25;
  if ((0x26 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar16 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0x13], uVar16 != 0)) {
    fVar24 = *(float *)((long)piVar14 + uVar16);
  }
  *(float *)(param_1 + 0x280) = fVar24;
  if (*(char *)(param_1 + 0x25c) != '\0') {
    fVar26 = 0.0;
    if ((0xc < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
       (uVar16 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[6], uVar16 != 0)) {
      fVar26 = *(float *)((long)piVar14 + uVar16);
    }
    *(float *)(param_1 + 0x27c) = fVar25 * fVar26;
    if (((0xc < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
        (uVar16 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[6], uVar16 != 0)) &&
       (fVar25 = *(float *)((long)piVar14 + uVar16), 0.0 < fVar25)) {
      *(float *)(param_1 + 0x280) = fVar24 / fVar25;
    }
  }
  lVar21 = *(long *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x2d4) = 0x3f800000;
  puVar5 = PTR_DAT_0437a640;
  if ((lVar21 != 0) && (*(int *)(lVar21 + 0xc) != 0)) {
    piVar1 = (int *)(lVar21 + 0xc);
    iVar11 = *(int *)(lVar21 + 0xc);
    do {
      plVar23 = *(long **)(lVar21 + 0x10);
      FUN_00af9180();
      while( true ) {
        if (plVar23 == (long *)0x0) goto LAB_00af4834;
        if (plVar23 == (long *)puVar5) break;
        plVar23 = (long *)*plVar23;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          puVar18 = *(undefined8 **)(lVar21 + 0x18);
          plVar23 = puVar18 + -10;
          if (puVar18 != (undefined8 *)0x0) {
            plVar15 = (long *)(**(code **)*puVar18)();
            if (((*PTR_DAT_0437a628 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a628), iVar11 != 0)) {
              FUN_00af9180();
              *(undefined **)PTR_DAT_0437a630 = puVar5;
              __cxa_guard_release(PTR_DAT_0437a628);
            }
            goto joined_r0x00af4d80;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
LAB_00af4834:
  FUN_00af55ec(&local_90,param_1);
  FUN_00af5c18(&local_68,&local_90);
  puVar18 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    piVar14 = (int *)(local_90 + 1);
    do {
      iVar11 = *piVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar4) {
        *piVar14 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_a0 = (long *)*puVar18;
      FUN_02a44274(lVar21 + 0xd8,&local_a0);
    }
  }
  plVar23 = local_68;
  if (local_68 != (long *)0x0) {
    local_90 = (undefined8 *)0x604e8982213ac74b;
    pcStack_88 = "00150_jumpup01_start";
    local_80 = 0x14;
    local_78 = (long *)0x0;
    uVar13 = (**(code **)(*local_68 + 200))(local_68,&local_90);
    *(undefined8 *)(param_1 + 0x294) = uVar13;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    local_90 = (undefined8 *)0x9e09b790d4b29cf4;
    pcStack_88 = "00155_land02";
    local_80 = 0xc;
    local_78 = (long *)0x0;
    uVar13 = (**(code **)(*plVar23 + 200))(plVar23,&local_90);
    *(undefined8 *)(param_1 + 0x29c) = uVar13;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    local_90 = (undefined8 *)0xe4bf545f9b457713;
    pcStack_88 = "00155_land02_to_ex1";
    local_80 = 0x13;
    local_78 = (long *)0x0;
    uVar13 = (**(code **)(*plVar23 + 200))(plVar23,&local_90);
    *(undefined8 *)(param_1 + 0x2a4) = uVar13;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    local_90 = (undefined8 *)0x9e09b790d4b29cf4;
    pcStack_88 = "00155_land02";
    local_80 = 0xc;
    local_78 = (long *)0x0;
    uVar13 = (**(code **)(*plVar23 + 200))(plVar23,&local_90);
    *(undefined8 *)(param_1 + 0x2ac) = uVar13;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    local_90 = (undefined8 *)0xbc071098b7443d50;
    pcStack_88 = "poke_state_int";
    local_80 = 0xe;
    local_78 = (long *)0x0;
    uVar16 = (**(code **)(*plVar23 + 0x48))(plVar23,&local_90);
    puVar22 = (ulong *)(param_1 + 0x2b4);
    *puVar22 = uVar16;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))(local_78);
      uVar16 = (ulong)*(byte *)puVar22;
    }
    if ((uVar16 & 0xff) != 0) {
      uVar10 = (**(code **)(*plVar23 + 0x60))(plVar23,puVar22);
      *(undefined4 *)(param_1 + 0x244) = uVar10;
      *(undefined4 *)(param_1 + 0x248) = uVar10;
    }
    (**(code **)(*plVar23 + 0x18))(plVar23);
  }
  FUN_00af5224(param_1,*(undefined4 *)(param_1 + 0x24c));
  fVar25 = *(float *)(param_1 + 0x27c);
  if (*(char *)(param_1 + 0x2c4) == '\0') {
    pfVar20 = (float *)(param_1 + 700);
    pfVar17 = (float *)(param_1 + 0x290);
  }
  else {
    pfVar17 = (float *)(param_1 + 0x2d4);
    pfVar20 = (float *)(param_1 + 0x2c0);
    fVar25 = fVar25 * *(float *)(param_1 + 0x290);
  }
  *(float *)(param_1 + 0x2d8) = *pfVar20 + fVar25 * *pfVar17;
  return;
}


