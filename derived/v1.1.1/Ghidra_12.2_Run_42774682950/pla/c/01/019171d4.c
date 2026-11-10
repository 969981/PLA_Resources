/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019171d4; name: FUN_019171d4
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_019171d4(undefined8 *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  puVar6 = PTR_DAT_0437aea0;
  puVar5 = PTR_DAT_0437ae98;
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (*(int *)((long)param_1 + 0xc) == 0) {
    return (undefined8 *)0x0;
  }
  piVar1 = (int *)((long)param_1 + 0xc);
  iVar9 = *(int *)((long)param_1 + 0xc);
  do {
    plVar13 = (long *)param_1[2];
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
      uVar10 = FUN_00ab38cc();
      *(undefined8 *)puVar6 = uVar10;
      __cxa_guard_release(puVar5);
    }
    while( true ) {
      if (plVar13 == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      if (plVar13 == (long *)puVar6) break;
      plVar13 = (long *)*plVar13;
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
        lVar11 = param_1[3];
        plVar13 = (long *)(lVar11 + -0x50);
        if (lVar11 == 0) {
          return (undefined8 *)0x0;
        }
        FUN_01a0ad5c(local_60,plVar13);
        puVar7 = local_60[0];
        puVar6 = PTR_DAT_0437a6e0;
        puVar5 = PTR_DAT_0437a6d8;
        bVar4 = false;
        if (local_60[0] == (undefined8 *)0x0) goto LAB_019172b0;
        if (*(int *)((long)local_60[0] + 0xc) == 0) goto LAB_0191737c;
        piVar1 = (int *)((long)local_60[0] + 0xc);
        iVar9 = *(int *)((long)local_60[0] + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar8;
    if (iVar8 == 0) {
      return (undefined8 *)0x0;
    }
  } while( true );
LAB_01917340:
  plVar14 = (long *)puVar7[2];
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
    uVar10 = FUN_00ad3750();
    *(undefined8 *)puVar6 = uVar10;
    __cxa_guard_release(puVar5);
  }
  while( true ) {
    if (plVar14 == (long *)0x0) goto LAB_0191737c;
    if (plVar14 == (long *)puVar6) break;
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
      lVar12 = puVar7[3];
      plVar14 = (long *)0x0;
      param_1 = local_60[0];
      if (lVar12 != 0) {
        plVar14 = (long *)(lVar12 + -0x50);
      }
      goto joined_r0x019173a0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar9 = iVar8;
  if (iVar8 == 0) {
LAB_0191737c:
    plVar14 = (long *)0x0;
    param_1 = local_60[0];
joined_r0x019173a0:
    if (param_1 != (undefined8 *)0x0) {
      piVar1 = (int *)(param_1 + 1);
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
        param_1[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *param_1;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    bVar4 = false;
    if (plVar14 != (long *)0x0) {
      param_1 = (undefined8 *)FUN_02c90d14(plVar14);
      lVar12 = plVar14[0xb];
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
      if (iVar9 == 1) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      bVar4 = true;
    }
LAB_019172b0:
    lVar11 = *(long *)(lVar11 + 8);
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if (bVar4) {
      return param_1;
    }
    return (undefined8 *)0x0;
  }
  goto LAB_01917340;
}


