/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019494d4; name: FUN_019494d4
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_019494d4(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  byte bVar11;
  undefined4 uVar12;
  int iVar13;
  long *plVar14;
  undefined4 *puVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong *puVar21;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  long *local_80;
  ulong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  uVar16 = 0;
  if (*(int *)*param_1 != 0) {
    uVar17 = 0;
    do {
      lVar19 = *(long *)param_1[1];
      FUN_00956dac(&local_80,*param_2 + 0x1a8);
      (**(code **)(*local_80 + 0x10))(&local_c0);
      local_78 = (ulong *)0x0;
      uStack_70 = 0;
      FUN_0087f944(&local_78,&local_c0);
      puVar9 = local_c0;
      if (local_c0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_c0 + 1);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          local_c0[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar18 = *(long *)puVar7;
          *(long *)puVar8 = lVar18;
          local_68 = *puVar9;
          FUN_02a44274(lVar18 + 0xd8,&local_68);
        }
      }
      puVar10 = local_78;
      puVar21 = *(ulong **)(lVar19 + uVar17 * 0x60 + 8);
      if (local_78 != (ulong *)0x0) {
        puVar3 = local_78 + 1;
        do {
          iVar13 = (int)*puVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar5) {
            *(int *)puVar3 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          local_78[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar19 = *(long *)puVar7;
          *(long *)puVar8 = lVar19;
          local_c0 = (undefined8 *)*puVar10;
          FUN_02a44274(lVar19 + 0xd8,&local_c0);
        }
      }
      if (local_80 != (long *)0x0) {
        lVar19 = local_80[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_80 + 0x20))();
        }
      }
      if (puVar21 == puVar10) {
        return false;
      }
      uVar17 = uVar17 + 1;
      uVar16 = *(uint *)*param_1;
    } while (uVar17 < uVar16);
  }
  lVar19 = *(long *)(*param_2 + 0x5e8);
  if (lVar19 != 0) {
    piVar1 = (int *)(lVar19 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar16 = *(uint *)*param_1;
  }
  plVar20 = (long *)(*(long *)param_1[1] + (long)(int)uVar16 * 0x60);
  plVar14 = (long *)*plVar20;
  *plVar20 = 0;
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      iVar13 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  *plVar20 = lVar19;
  FUN_00956dac(&local_80,*param_2 + 0x1a8);
  (**(code **)(*local_80 + 0x10))(&local_c0);
  local_78 = (ulong *)0x0;
  uStack_70 = 0;
  FUN_0087f944(&local_78,&local_c0);
  puVar9 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_c0 + 1);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      local_c0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_68 = *puVar9;
      FUN_02a44274(lVar19 + 0xd8,&local_68);
    }
  }
  FUN_0087fcf0(*(long *)param_1[1] + (long)*(int *)*param_1 * 0x60 + 8,&local_78);
  puVar10 = local_78;
  if (local_78 != (ulong *)0x0) {
    puVar21 = local_78 + 1;
    do {
      iVar13 = (int)*puVar21 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar21,0x10);
      if (bVar5) {
        *(int *)puVar21 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_c0 = (undefined8 *)*puVar10;
      FUN_02a44274(lVar19 + 0xd8,&local_c0);
    }
  }
  if (local_80 != (long *)0x0) {
    lVar19 = local_80[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  puVar15 = (undefined4 *)FUN_01ba2308(*param_2);
  lVar19 = *(long *)param_1[1] + (long)*(int *)*param_1 * 0x60;
  *(undefined4 *)(lVar19 + 0x1c) = *puVar15;
  *(undefined2 *)(lVar19 + 0x20) = 0;
  FUN_01ba0258(&local_c0,*param_2);
  if ((char)local_c0 == '\0') {
    FUN_00956dac(&local_78,*param_2 + 0x1a8);
    uVar17 = local_78[0x1a];
    lVar19 = *(long *)param_1[1] + (long)*(int *)*param_1 * 0x60;
    *(ulong *)(lVar19 + 0x38) = local_78[0x1b];
    *(ulong *)(lVar19 + 0x30) = uVar17;
    if (local_78 != (ulong *)0x0) {
      uVar17 = local_78[0xb];
      piVar1 = (int *)(uVar17 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(uVar17 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
        goto joined_r0x01949a40;
      }
    }
  }
  else {
    lVar19 = *(long *)param_1[1] + (long)*(int *)*param_1 * 0x60;
    *(undefined8 *)(lVar19 + 0x38) = local_a8;
    *(undefined8 *)(lVar19 + 0x30) = local_b0;
    FUN_01ba0244(*param_2);
  }
joined_r0x01949a40:
  if ((char)local_c0 != '\0') {
    local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffffffffff00);
  }
  uVar12 = FUN_01b9a164(*param_2);
  *(undefined4 *)(*(long *)param_1[1] + (long)*(int *)*param_1 * 0x60 + 0x50) = uVar12;
  if (*(char *)param_1[2] == '\0') {
    bVar11 = FUN_01ba07b0(*param_2);
    bVar11 = bVar11 & 1;
  }
  else {
    bVar11 = 0;
  }
  *(byte *)(*(long *)param_1[1] + (long)*(int *)*param_1 * 0x60 + 0x54) = bVar11;
  (**(code **)(*(long *)*param_2 + 0x18))(&local_c0);
  local_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  FUN_00946790(&local_d0,&local_c0);
  puVar9 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_c0 + 1);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      local_c0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_78 = (ulong *)*puVar9;
      FUN_02a44274(lVar19 + 0xd8,&local_78);
    }
  }
  FUN_01b99bcc(&local_c0,&local_d0);
  puVar9 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_d0 + 1);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_78 = (ulong *)*puVar9;
      FUN_02a44274(lVar19 + 0xd8,&local_78);
    }
  }
  *(undefined1 *)(*(long *)param_1[1] + (long)*(int *)*param_1 * 0x60 + 0x55) = local_c0._7_1_;
  uVar16 = *(uint *)*param_1;
  if (3 >= uVar16) {
    *(uint *)*param_1 = uVar16 + 1;
  }
  return 3 < uVar16;
}


