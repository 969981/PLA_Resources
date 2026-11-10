/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a23420; name: FUN_01a23420
 */


void FUN_01a23420(long param_1)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined1 local_78 [4];
  uint local_74;
  long *local_70 [2];
  undefined8 local_58;
  
  puVar7 = PTR_DAT_04382430;
  puVar6 = PTR_DAT_04382428;
  if (*(char *)(param_1 + 0x204) != '\0') {
    return;
  }
  lVar15 = *(long *)(param_1 + 0x1f0);
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar8 = *(int *)(lVar15 + 0xc);
    do {
      plVar16 = *(long **)(lVar15 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        uVar12 = FUN_00ab38cc();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01a23454;
        if (plVar16 == (long *)puVar7) break;
        plVar16 = (long *)*plVar16;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 != 0) {
            plVar14 = (long *)(lVar15 + -0x50);
            FUN_01bd4154(local_70,plVar14);
            plVar16 = local_70[0];
            puVar7 = PTR_DAT_0437a558;
            puVar6 = PTR_DAT_0437a550;
            if (local_70[0] == (long *)0x0) goto LAB_01a236c4;
            if (*(int *)((long)local_70[0] + 0xc) == 0) goto LAB_01a2387c;
            piVar1 = (int *)((long)local_70[0] + 0xc);
            iVar8 = *(int *)((long)local_70[0] + 0xc);
            goto LAB_01a23768;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar11;
    } while (iVar11 != 0);
  }
  goto LAB_01a23454;
LAB_01a23768:
  do {
    plVar17 = (long *)plVar16[2];
    if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
      uVar12 = FUN_00aa0310();
      *(undefined8 *)puVar7 = uVar12;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) goto LAB_01a2387c;
      if (plVar17 == (long *)puVar7) break;
      plVar17 = (long *)*plVar17;
    }
    iVar11 = *piVar1;
    if (iVar11 == iVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar13 = plVar16[3];
        plVar16 = (long *)0x0;
        plVar17 = local_70[0];
        if (lVar13 != 0) {
          plVar16 = (long *)(lVar13 + -0x50);
        }
        goto joined_r0x01a237ac;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar11;
  } while (iVar11 != 0);
LAB_01a2387c:
  plVar16 = (long *)0x0;
  plVar17 = local_70[0];
joined_r0x01a237ac:
  local_70[0] = plVar17;
  if (plVar17 != (long *)0x0) {
    plVar2 = plVar17 + 1;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      plVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_58 = *plVar17;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  if (plVar16 == (long *)0x0) {
LAB_01a236c4:
    bVar5 = true;
    *(undefined1 *)(param_1 + 0x204) = 1;
  }
  else {
    lVar13 = plVar16[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 1) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
      bVar5 = false;
    }
    else {
      bVar5 = false;
    }
  }
  lVar15 = *(long *)(lVar15 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (bVar5) {
    return;
  }
LAB_01a23454:
  FUN_01a23a44(local_70,param_1);
  if (local_70[0] != (long *)0x0) {
    iVar8 = (**(code **)(*local_70[0] + 0x40))(local_70[0]);
    if (iVar8 != 0) {
      uVar9 = 0;
      do {
        local_58 = CONCAT44(uVar9,(undefined4)local_58);
        local_58 = CONCAT71(local_58._1_7_,1);
        uVar12 = (**(code **)(*local_70[0] + 0x50))(local_70[0],&local_58);
        local_78[0] = 1;
        local_74 = uVar9;
        FUN_01a23f90(param_1 + 0x208,uVar12,local_78);
        uVar9 = uVar9 + 1;
        uVar10 = (**(code **)(*local_70[0] + 0x40))(local_70[0]);
      } while (uVar9 < uVar10);
    }
    iVar8 = (**(code **)(*local_70[0] + 0x90))(local_70[0]);
    if (iVar8 != 0) {
      local_58._1_7_ = (uint7)((ulong)local_58 >> 8) & 0xffffff;
      local_58 = CONCAT71(local_58._1_7_,1);
      uVar12 = (**(code **)(*local_70[0] + 0xa0))(local_70[0],&local_58);
      local_74 = 0;
      local_78[0] = 1;
      FUN_01a23f90(param_1 + 0x270,uVar12,local_78);
      uVar9 = (**(code **)(*local_70[0] + 0x90))(local_70[0]);
      if (1 < uVar9) {
        uVar9 = 1;
        do {
          local_58 = CONCAT44(uVar9,(undefined4)local_58);
          local_58 = CONCAT71(local_58._1_7_,1);
          uVar12 = (**(code **)(*local_70[0] + 0xa0))(local_70[0],&local_58);
          local_78[0] = 1;
          local_74 = uVar9;
          FUN_01a23f90(param_1 + 0x270,uVar12,local_78);
          uVar9 = uVar9 + 1;
          uVar10 = (**(code **)(*local_70[0] + 0x90))(local_70[0]);
        } while (uVar9 < uVar10);
      }
    }
    iVar8 = (**(code **)(*local_70[0] + 0xc0))(local_70[0]);
    if (iVar8 != 0) {
      uVar9 = 0;
      do {
        local_58 = CONCAT44(uVar9,(undefined4)local_58);
        local_58 = CONCAT71(local_58._1_7_,1);
        uVar12 = (**(code **)(*local_70[0] + 0xd0))(local_70[0],&local_58);
        local_78[0] = 1;
        local_74 = uVar9;
        FUN_01a23f90(param_1 + 0x2d8,uVar12,local_78);
        uVar9 = uVar9 + 1;
        uVar10 = (**(code **)(*local_70[0] + 0xc0))(local_70[0]);
      } while (uVar9 < uVar10);
    }
    *(undefined1 *)(param_1 + 0x204) = 1;
    (**(code **)(*local_70[0] + 0x18))(local_70[0]);
  }
  return;
}


