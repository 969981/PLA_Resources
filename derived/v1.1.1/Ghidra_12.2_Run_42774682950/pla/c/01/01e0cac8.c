/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e0cac8; name: FUN_01e0cac8
 */


void FUN_01e0cac8(long param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 local_88;
  long *local_80 [2];
  long *local_70;
  long local_68;
  
  iVar9 = *(int *)(param_1 + 0x90) + 1;
  *(int *)(param_1 + 0x90) = iVar9;
  if (iVar9 < 0x708) {
    return;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  FUN_01e0f488(&local_70,*(long *)(param_1 + 0x80));
  puVar6 = PTR_DAT_0437c680;
  puVar5 = PTR_DAT_0437c678;
  if (local_70 == (long *)0x0) {
    return;
  }
  lVar16 = *(long *)(param_1 + 0x70);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar9 = *(int *)(lVar16 + 0xc);
    do {
      plVar19 = *(long **)(lVar16 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar11 = FUN_009311a8();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar19 == (long *)0x0) goto joined_r0x01e0cc38;
        if (plVar19 == (long *)puVar6) break;
        plVar19 = (long *)*plVar19;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 != 0) {
            plVar15 = (long *)(lVar16 + -0x50);
            FUN_01e564f8(local_80,plVar15);
            plVar19 = local_80[0];
            puVar7 = PTR_DAT_0437c670;
            puVar6 = PTR_DAT_0437c668;
            puVar5 = PTR_DAT_043794d0;
            if (local_80[0] == (long *)0x0) goto LAB_01e0cc04;
            if (*(int *)((long)local_80[0] + 0xc) == 0) goto LAB_01e0ce58;
            piVar1 = (int *)((long)local_80[0] + 0xc);
            iVar9 = *(int *)((long)local_80[0] + 0xc);
            goto LAB_01e0cca4;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
  goto joined_r0x01e0cc38;
LAB_01e0cca4:
  do {
    plVar18 = (long *)plVar19[2];
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar11 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar11;
        __cxa_guard_release(puVar5);
      }
      *(undefined **)puVar7 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar18 == (long *)0x0) goto LAB_01e0ce58;
      if (plVar18 == (long *)puVar7) break;
      plVar18 = (long *)*plVar18;
    }
    iVar8 = *piVar1;
    if (iVar8 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar20 = plVar19[3];
        if (lVar20 != 0) {
          plVar17 = (long *)(lVar20 + -0x50);
          plVar12 = (long *)FUN_0196bd20(plVar17);
          plVar18 = local_70;
          plVar19 = (long *)PTR_DAT_04379c88;
          if (*plVar12 != 0) {
            plVar19 = (long *)(*plVar12 + 0x58);
          }
          lVar21 = *plVar19;
          FUN_01106ab0(local_70);
          iVar9 = FUN_01106bc8(plVar18);
          while ((uVar13 = FUN_01106bdc(plVar18,iVar9), (uVar13 & 1) == 0 &&
                 (uVar13 = FUN_01106bf0(plVar18,*(undefined8 *)(param_1 + 0x98),iVar9),
                 (uVar13 & 1) != 0))) {
            lVar14 = FUN_01106c14(plVar18,iVar9);
            lVar2 = *(long *)(lVar14 + 8);
            local_88 = *(undefined8 *)(lVar14 + 0x10);
            local_68 = lVar2;
            uVar13 = FUN_01e0cef4(param_1,lVar21 == lVar2,&local_68,&local_88);
            if ((uVar13 & 1) == 0) {
              local_68 = *(long *)(lVar14 + 8);
              local_88 = *(undefined8 *)(lVar14 + 0x10);
              FUN_01e0d7c8(param_1,lVar21 == lVar2,&local_68,&local_88);
              FUN_01106b34(plVar18,iVar9);
            }
            uVar10 = FUN_01106bd4(plVar18);
            iVar8 = 0;
            if (iVar9 + 1U < uVar10) {
              iVar8 = iVar9 + 1;
            }
            iVar9 = iVar8;
          }
          lVar20 = *(long *)(lVar20 + 8);
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar8;
  } while (iVar8 != 0);
LAB_01e0ce58:
  if (local_80[0] != (long *)0x0) {
    plVar19 = local_80[0] + 1;
    do {
      iVar9 = (int)*plVar19 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(int *)plVar19 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      local_80[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_68 = *local_80[0];
      FUN_02a44274(lVar20 + 0xd8,&local_68);
    }
  }
LAB_01e0cc04:
  lVar16 = *(long *)(lVar16 + 8);
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
joined_r0x01e0cc38:
  if (local_70 != (long *)0x0) {
    lVar16 = local_70[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
}


