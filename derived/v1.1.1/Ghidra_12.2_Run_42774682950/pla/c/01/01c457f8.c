/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c457f8; name: FUN_01c457f8
 */


void FUN_01c457f8(long param_1,long *param_2)

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
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *local_68;
  undefined8 uStack_60;
  long local_58;
  
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
    plVar13 = *(long **)(param_1 + 0x10);
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      uVar10 = FUN_00ab38cc();
      *(undefined8 *)puVar7 = uVar10;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar13 == (long *)0x0) {
        return;
      }
      if (plVar13 == (long *)puVar7) break;
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
        lVar11 = *(long *)(param_1 + 0x18);
        plVar13 = (long *)(lVar11 + -0x50);
        if (lVar11 == 0) {
          return;
        }
        local_68 = (long *)0x0;
        uStack_60 = 0;
        FUN_00aeb228(&local_68,lVar11 + 0x358);
        plVar5 = local_68;
        puVar7 = PTR_DAT_0437a6e0;
        puVar6 = PTR_DAT_0437a6d8;
        if (local_68 == (long *)0x0) goto LAB_01c458fc;
        if (*(int *)((long)local_68 + 0xc) == 0) goto LAB_01c459bc;
        piVar1 = (int *)((long)local_68 + 0xc);
        iVar9 = *(int *)((long)local_68 + 0xc);
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
LAB_01c4595c:
  plVar14 = (long *)plVar5[2];
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
    uVar10 = FUN_00ad3750();
    *(undefined8 *)puVar7 = uVar10;
    __cxa_guard_release(puVar6);
  }
  while( true ) {
    if (plVar14 == (long *)0x0) goto LAB_01c459bc;
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
      lVar12 = plVar5[3];
      plVar5 = (long *)0x0;
      plVar14 = local_68;
      if (lVar12 != 0) {
        plVar5 = (long *)(lVar12 + -0x50);
      }
      goto joined_r0x01c459e0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar9 = iVar8;
  if (iVar8 == 0) {
LAB_01c459bc:
    plVar5 = (long *)0x0;
    plVar14 = local_68;
joined_r0x01c459e0:
    local_68 = plVar14;
    if (plVar14 != (long *)0x0) {
      plVar2 = plVar14 + 1;
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
        plVar14[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_58 = *plVar14;
        FUN_02a44274(lVar12 + 0xd8,&local_58);
      }
    }
    if (plVar5 != (long *)0x0) {
      FUN_009c69bc(&local_68,plVar13);
      lVar12 = param_2[1];
      local_68[0x1a] = *param_2;
      local_68[0x1b] = lVar12;
      *(undefined1 *)(local_68 + 0x1c) = 1;
      if (local_68 != (long *)0x0) {
        lVar12 = local_68[0xb];
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
          (**(code **)(*local_68 + 0x20))();
        }
      }
      FUN_02c90b50(plVar5,1);
      lVar12 = plVar5[0xb];
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
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
    }
LAB_01c458fc:
    lVar11 = *(long *)(lVar11 + 8);
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    return;
  }
  goto LAB_01c4595c;
}


