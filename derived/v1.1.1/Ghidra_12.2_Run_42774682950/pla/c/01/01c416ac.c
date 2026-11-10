/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c416ac; name: FUN_01c416ac
 */


void FUN_01c416ac(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *local_60;
  undefined8 uStack_58;
  long local_48;
  
  puVar7 = PTR_DAT_0437aea0;
  puVar6 = PTR_DAT_0437ae98;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0xc);
  iVar9 = *(int *)(param_1 + 0xc);
  do {
    plVar14 = *(long **)(param_1 + 0x10);
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      uVar11 = FUN_00ab38cc();
      *(undefined8 *)puVar7 = uVar11;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar14 == (long *)0x0) {
        return;
      }
      if (plVar14 == (long *)puVar7) break;
      plVar14 = (long *)*plVar14;
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
        lVar12 = *(long *)(param_1 + 0x18);
        plVar14 = (long *)(lVar12 + -0x50);
        if (lVar12 == 0) {
          return;
        }
        local_60 = (long *)0x0;
        uStack_58 = 0;
        FUN_00aeb228(&local_60,lVar12 + 0x358);
        plVar5 = local_60;
        puVar7 = PTR_DAT_0437a6e0;
        puVar6 = PTR_DAT_0437a6d8;
        if (local_60 == (long *)0x0) goto LAB_01c417a8;
        if (*(int *)((long)local_60 + 0xc) == 0) goto LAB_01c418d4;
        piVar1 = (int *)((long)local_60 + 0xc);
        iVar9 = *(int *)((long)local_60 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar8;
    if (iVar8 == 0) {
      return;
    }
  } while( true );
LAB_01c41874:
  plVar15 = (long *)plVar5[2];
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
    uVar11 = FUN_00ad3750();
    *(undefined8 *)puVar7 = uVar11;
    __cxa_guard_release(puVar6);
  }
  while( true ) {
    if (plVar15 == (long *)0x0) goto LAB_01c418d4;
    if (plVar15 == (long *)puVar7) break;
    plVar15 = (long *)*plVar15;
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
      lVar10 = plVar5[3];
      plVar5 = (long *)0x0;
      plVar15 = local_60;
      if (lVar10 != 0) {
        plVar5 = (long *)(lVar10 + -0x50);
      }
      goto joined_r0x01c418f8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar9 = iVar8;
  if (iVar8 == 0) {
LAB_01c418d4:
    plVar5 = (long *)0x0;
    plVar15 = local_60;
joined_r0x01c418f8:
    local_60 = plVar15;
    if (plVar15 != (long *)0x0) {
      plVar2 = plVar15 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        plVar15[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = *plVar15;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    if (plVar5 != (long *)0x0) {
      FUN_02c90d40(plVar5);
      lVar10 = plVar5[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
    }
LAB_01c417a8:
    FUN_009c69bc(&local_60,plVar14);
    lVar10 = FUN_009aff90(local_60 + 0x1e,&local_48);
    if (local_60 != (long *)0x0) {
      lVar13 = local_60[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
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
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
    if (lVar10 != 0) {
      FUN_01836814(lVar10,0);
    }
    lVar12 = *(long *)(lVar12 + 8);
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    return;
  }
  goto LAB_01c41874;
}


