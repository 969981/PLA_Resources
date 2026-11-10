/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019c0a74; name: FUN_019c0a74
 */


void FUN_019c0a74(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *local_90 [2];
  undefined8 *local_80 [2];
  long *local_70;
  undefined8 local_68;
  
  puVar17 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar17 != (undefined8 *)*param_2) {
    return;
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_80[0] = (undefined8 *)*puVar17;
      FUN_02a44274(lVar15 + 0xd8,local_80);
    }
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  puVar9 = PTR_DAT_04381fd8;
  puVar8 = PTR_DAT_04381fd0;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar15 = *(long *)(param_1 + 0x88);
  if (lVar15 == 0) {
    return;
  }
  if (*(int *)(lVar15 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar15 + 0xc);
  iVar12 = *(int *)(lVar15 + 0xc);
  do {
    plVar19 = *(long **)(lVar15 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
      if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar4), iVar11 != 0)) {
        uVar14 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar14;
        __cxa_guard_release(puVar4);
      }
      *(undefined **)puVar9 = puVar5;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar19 == (long *)0x0) {
        return;
      }
      if (plVar19 == (long *)puVar9) break;
      plVar19 = (long *)*plVar19;
    }
    iVar11 = *piVar1;
    if (iVar11 == iVar12) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar7 = PTR_DAT_04379fd0;
      puVar6 = PTR_DAT_04379fc8;
      if (cVar2 == '\0') {
        lVar15 = *(long *)(lVar15 + 0x18);
        if (lVar15 == 0) {
          return;
        }
        plVar19 = (long *)(lVar15 + -0x50);
        lVar18 = *(long *)(param_1 + 0x68);
        if ((lVar18 == 0) || (*(int *)(lVar18 + 0xc) == 0)) goto LAB_019c0bf8;
        piVar1 = (int *)(lVar18 + 0xc);
        iVar12 = *(int *)(lVar18 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar11;
    if (iVar11 == 0) {
      return;
    }
  } while( true );
LAB_019c0c98:
  plVar20 = *(long **)(lVar18 + 0x10);
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
    if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar4), iVar11 != 0)) {
      uVar14 = FUN_0087f8f0();
      *(undefined8 *)puVar5 = uVar14;
      __cxa_guard_release(puVar4);
    }
    *(undefined **)puVar7 = puVar5;
    __cxa_guard_release(puVar6);
  }
  while( true ) {
    if (plVar20 == (long *)0x0) goto LAB_019c0bf8;
    if (plVar20 == (long *)puVar7) break;
    plVar20 = (long *)*plVar20;
  }
  iVar11 = *piVar1;
  if (iVar11 == iVar12) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar18 = *(long *)(lVar18 + 0x18);
      if (lVar18 != 0) {
        plVar20 = (long *)(lVar18 + -0x50);
        FUN_018f98bc(local_80,plVar20);
        if (local_80[0] == (undefined8 *)0x0) {
          local_70 = (long *)0x0;
        }
        else {
          FUN_009b8630(&local_70);
          puVar17 = local_80[0];
          if (local_80[0] != (undefined8 *)0x0) {
            piVar1 = (int *)(local_80[0] + 1);
            do {
              iVar12 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 == 0) {
              local_80[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar16 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar16;
              local_68 = *puVar17;
              FUN_02a44274(lVar16 + 0xd8,&local_68);
            }
          }
        }
        if (local_70 != (long *)0x0) {
          FUN_01a4b9a4(local_90);
          FUN_0256b8f0(plVar19,local_90);
          if (local_90[0] != (undefined8 *)0x0) {
            piVar1 = (int *)(local_90[0] + 1);
            do {
              iVar12 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 == 0) {
              local_90[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar16 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar16;
              local_80[0] = (undefined8 *)*local_90[0];
              FUN_02a44274(lVar16 + 0xd8,local_80);
            }
          }
          plVar10 = local_70;
          if ((local_70 != (long *)0x0) && (uVar13 = FUN_02a43a5c(local_70[0xb]), (uVar13 & 1) != 0)
             ) {
            (**(code **)(*plVar10 + 0x20))(plVar10);
          }
        }
        uVar13 = FUN_02a43a5c(*(undefined8 *)(lVar18 + 8));
        if ((uVar13 & 1) != 0) {
          (**(code **)(*plVar20 + 0x20))(plVar20);
        }
      }
      goto LAB_019c0bf8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar12 = iVar11;
  if (iVar11 == 0) {
LAB_019c0bf8:
    uVar13 = FUN_02a43a5c(*(undefined8 *)(lVar15 + 8));
    if ((uVar13 & 1) != 0) {
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
    return;
  }
  goto LAB_019c0c98;
}


