/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018562dc; name: FUN_018562dc
 */


void FUN_018562dc(ulong param_1)

{
  int *piVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *local_78 [2];
  long local_68;
  
  puVar11 = PTR_DAT_04379e90;
  puVar10 = PTR_DAT_04379e88;
  puVar9 = PTR_DAT_043795e0;
  puVar8 = PTR_DAT_043795d8;
  puVar7 = PTR_DAT_043794d0;
  if (*(int *)(param_1 + 0x70) == 2) {
    lVar16 = *(long *)(param_1 + 0x78);
    if (lVar16 == 0) {
      return;
    }
    if (*(int *)(lVar16 + 0xc) == 0) {
      return;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    iVar13 = *(int *)(lVar16 + 0xc);
    do {
      plVar21 = *(long **)(lVar16 + 0x10);
      if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
            uVar15 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar15;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar9 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar11 = puVar9;
        __cxa_guard_release(puVar10);
      }
      while( true ) {
        if (plVar21 == (long *)0x0) {
          return;
        }
        if (plVar21 == (long *)puVar11) break;
        plVar21 = (long *)*plVar21;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar13) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 == 0) {
            return;
          }
          lVar19 = *(long *)(param_1 + 0x98);
          plVar21 = (long *)(lVar16 + -0x50);
          if ((lVar19 == 0) || (*(uint *)(lVar19 + 0xc) == 0)) goto LAB_01856464;
          puVar2 = (uint *)(lVar19 + 0xc);
          uVar18 = param_1;
          uVar20 = *(uint *)(lVar19 + 0xc);
          goto LAB_018564d8;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar12;
      if (iVar12 == 0) {
        return;
      }
    } while( true );
  }
  if (*(int *)(param_1 + 0x70) != 3) {
    return;
  }
  if (*(long *)(param_1 + 0x88) == 0) {
    return;
  }
  FUN_01857de4(local_78,*(long *)(param_1 + 0x88));
  if (local_78[0] == (long *)0x0) {
    return;
  }
  if ((char)local_78[0][0x3e] != '\0') {
    *(undefined4 *)(local_78[0] + 0x72) = 2;
    *(undefined1 **)(*(long *)(*(long *)(local_78[0][0x6c] + 0x100) + 0x38) + 8) =
         &DAT_cbf29ce484222645;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  lVar16 = local_78[0][0xb];
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar13 + -1 != 0) {
    return;
  }
  *(undefined8 *)(lVar16 + 0x18) = 0;
  pcVar17 = *(code **)(*local_78[0] + 0x20);
  plVar21 = local_78[0];
  goto LAB_018563f4;
LAB_018564d8:
  do {
    plVar22 = *(long **)(lVar19 + 0x10);
    lVar14 = FUN_00ab38cc(uVar18);
    while( true ) {
      if (plVar22 == (long *)0x0) goto LAB_01856464;
      if (plVar22 == (long *)lVar14) break;
      plVar22 = (long *)*plVar22;
    }
    uVar4 = *puVar2;
    uVar18 = (ulong)uVar4;
    if (uVar4 == uVar20) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = uVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar19 = *(long *)(lVar19 + 0x18);
        if (lVar19 != 0) {
          FUN_01a82160(local_78,plVar21);
          plVar22 = local_78[0];
          if (local_78[0] == (long *)0x0) goto LAB_0185653c;
          if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_018566b0;
          piVar1 = (int *)((long)local_78[0] + 0xc);
          iVar13 = *(int *)((long)local_78[0] + 0xc);
          goto LAB_018565e0;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    uVar20 = uVar4;
  } while (uVar4 != 0);
  goto LAB_01856464;
LAB_018565e0:
  do {
    plVar23 = (long *)plVar22[2];
    if (((*PTR_DAT_0437a3c8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a3c8), iVar12 != 0)) {
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar15;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar9 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar8);
      }
      *(undefined **)PTR_DAT_0437a3d0 = puVar9;
      __cxa_guard_release(PTR_DAT_0437a3c8);
    }
    while( true ) {
      if (plVar23 == (long *)0x0) goto LAB_018566b0;
      if (plVar23 == (long *)PTR_DAT_0437a3d0) break;
      plVar23 = (long *)*plVar23;
    }
    iVar12 = *piVar1;
    if (iVar12 == iVar13) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar14 = plVar22[3];
        plVar22 = (long *)0x0;
        plVar23 = local_78[0];
        if (lVar14 != 0) {
          plVar22 = (long *)(lVar14 + -0x50);
        }
        goto joined_r0x018566d4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar13 = iVar12;
  } while (iVar12 != 0);
LAB_018566b0:
  plVar22 = (long *)0x0;
  plVar23 = local_78[0];
joined_r0x018566d4:
  local_78[0] = plVar23;
  if (plVar23 != (long *)0x0) {
    plVar3 = plVar23 + 1;
    do {
      iVar13 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 == 0) {
      plVar23[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *plVar23;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  if (plVar22 != (long *)0x0) {
    uVar18 = FUN_01a81368(plVar21);
    if ((((uVar18 & 1) != 0) && (uVar18 = FUN_01c35a88((long *)(lVar19 + -0x50)), (uVar18 & 1) != 0)
        ) && (uVar18 = FUN_01a4e8b0(plVar22), (uVar18 & 1) != 0)) {
      if (*(long *)(param_1 + 0x88) == 0) {
        local_78[0] = (long *)0x0;
      }
      else {
        FUN_01857de4(local_78);
        if (local_78[0] != (long *)0x0) {
          FUN_00b6bdec();
          *(undefined4 *)(param_1 + 0x70) = 1;
          if (local_78[0] != (long *)0x0) {
            lVar14 = local_78[0][0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*local_78[0] + 0x20))();
            }
          }
        }
      }
    }
    lVar14 = plVar22[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
LAB_0185653c:
  lVar14 = *(long *)(lVar19 + 8);
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*(long *)(lVar19 + -0x50) + 0x20))();
  }
LAB_01856464:
  lVar16 = *(long *)(lVar16 + 8);
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    pcVar17 = *(code **)(*plVar21 + 0x20);
LAB_018563f4:
    (*pcVar17)(plVar21);
  }
  return;
}


