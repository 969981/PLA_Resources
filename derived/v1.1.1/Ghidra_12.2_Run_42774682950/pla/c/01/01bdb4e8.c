/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bdb4e8; name: FUN_01bdb4e8
 */


void FUN_01bdb4e8(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  
  lVar13 = *(long *)(param_1 + 0x1f0);
  if (lVar13 == 0) {
    return;
  }
  if (*(int *)(lVar13 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar13 + 0xc);
  iVar8 = *(int *)(lVar13 + 0xc);
  do {
    plVar15 = *(long **)(lVar13 + 0x10);
    lVar9 = FUN_00a3edb8();
    while( true ) {
      if (plVar15 == (long *)0x0) {
        return;
      }
      if (plVar15 == (long *)lVar9) break;
      plVar15 = (long *)*plVar15;
    }
    iVar4 = *piVar1;
    if (iVar4 == iVar8) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 == 0) {
          return;
        }
        plVar15 = (long *)(lVar13 + -0x50);
        FUN_02a9d180(plVar15,*(int *)(param_1 + 0x210) == 0);
        if (((*(char *)(param_1 + 0x230) == '\0') ||
            (lVar9 = *(long *)(param_1 + 0x238), lVar9 == 0)) || (*(int *)(lVar9 + 0xc) == 0))
        goto LAB_01bdb5bc;
        piVar1 = (int *)(lVar9 + 0xc);
        iVar8 = *(int *)(lVar9 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar4;
    if (iVar4 == 0) {
      return;
    }
  } while( true );
  while (iVar8 = iVar4, iVar4 != 0) {
    plVar16 = *(long **)(lVar9 + 0x10);
    lVar10 = FUN_01bde044();
    while( true ) {
      if (plVar16 == (long *)0x0) goto LAB_01bdb5bc;
      if (plVar16 == (long *)lVar10) break;
      plVar16 = (long *)*plVar16;
    }
    iVar4 = *piVar1;
    if (iVar4 == iVar8) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        puVar14 = *(undefined8 **)(lVar9 + 0x18);
        if (puVar14 != (undefined8 *)0x0) {
          plVar16 = puVar14 + -10;
          if (((*PTR_DAT_0437a780 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437a780);
          }
          lVar9 = *(long *)PTR_DAT_0437a788;
          *(long *)PTR_DAT_0437a790 = lVar9;
          uVar2 = *(uint *)(lVar9 + 0x88);
          uVar3 = *(uint *)(param_1 + 0x210);
          FUN_0290d05c(plVar16,(uVar3 & uVar2) != 0);
          puVar11 = (undefined8 *)(**(code **)*puVar14)(puVar14);
          puVar7 = PTR_DAT_0437e378;
          if (((*PTR_DAT_0437e370 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_0437e370), iVar8 != 0)) {
            uVar12 = FUN_01bde044();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(PTR_DAT_0437e370);
          }
          if (puVar11 == (undefined8 *)0x0) goto LAB_01bdb6e8;
          goto LAB_01bdb6d4;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  goto LAB_01bdb5bc;
  while (puVar11 = (undefined8 *)*puVar11, puVar11 != (undefined8 *)0x0) {
LAB_01bdb6d4:
    if (puVar11 == (undefined8 *)puVar7) {
      if ((uVar3 & uVar2) == 0) {
        FUN_029231ac();
      }
      else {
        FUN_02923174(plVar16);
      }
      break;
    }
  }
LAB_01bdb6e8:
  lVar9 = puVar14[1];
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
LAB_01bdb5bc:
  lVar13 = *(long *)(lVar13 + 8);
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01bdb5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x20))(plVar15);
    return;
  }
  return;
}


