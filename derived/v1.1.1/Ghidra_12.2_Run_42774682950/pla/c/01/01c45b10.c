/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c45b10; name: FUN_01c45b10
 */


void FUN_01c45b10(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  puVar6 = PTR_DAT_0437aea0;
  puVar5 = PTR_DAT_0437ae98;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0xc);
  iVar8 = *(int *)(param_1 + 0xc);
  do {
    plVar12 = *(long **)(param_1 + 0x10);
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
      uVar9 = FUN_00ab38cc();
      *(undefined8 *)puVar6 = uVar9;
      __cxa_guard_release(puVar5);
    }
    while( true ) {
      if (plVar12 == (long *)0x0) {
        return;
      }
      if (plVar12 == (long *)puVar6) break;
      plVar12 = (long *)*plVar12;
    }
    iVar7 = *piVar1;
    if (iVar7 == iVar8) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar10 = *(long *)(param_1 + 0x18);
        if (lVar10 == 0) {
          return;
        }
        local_60 = (undefined8 *)0x0;
        uStack_58 = 0;
        FUN_00aeb228(&local_60,lVar10 + 0x358);
        puVar4 = local_60;
        puVar6 = PTR_DAT_0437a6e0;
        puVar5 = PTR_DAT_0437a6d8;
        if (local_60 == (undefined8 *)0x0) goto LAB_01c45c0c;
        if (*(int *)((long)local_60 + 0xc) == 0) goto LAB_01c45ccc;
        piVar1 = (int *)((long)local_60 + 0xc);
        iVar8 = *(int *)((long)local_60 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar7;
    if (iVar7 == 0) {
      return;
    }
  } while( true );
LAB_01c45c6c:
  plVar12 = (long *)puVar4[2];
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
    uVar9 = FUN_00ad3750();
    *(undefined8 *)puVar6 = uVar9;
    __cxa_guard_release(puVar5);
  }
  while( true ) {
    if (plVar12 == (long *)0x0) goto LAB_01c45ccc;
    if (plVar12 == (long *)puVar6) break;
    plVar12 = (long *)*plVar12;
  }
  iVar7 = *piVar1;
  if (iVar7 == iVar8) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar11 = puVar4[3];
      plVar12 = (long *)0x0;
      puVar4 = local_60;
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + -0x50);
      }
      goto joined_r0x01c45cf0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar8 = iVar7;
  if (iVar7 == 0) {
LAB_01c45ccc:
    plVar12 = (long *)0x0;
    puVar4 = local_60;
joined_r0x01c45cf0:
    local_60 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0x5d];
      if ((*(long *)(lVar11 + 0xe8) != 0) &&
         (*(int *)(lVar11 + 0xf0) == *(int *)(*(long *)(lVar11 + 0xe8) + 0x2c))) {
        FUN_002669c8(lVar11 + 0xe8);
        FUN_002667b4();
      }
      lVar11 = plVar12[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
LAB_01c45c0c:
    lVar11 = *(long *)(lVar10 + 8);
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*(long *)(lVar10 + -0x50) + 0x20))((long *)(lVar10 + -0x50));
    }
    return;
  }
  goto LAB_01c45c6c;
}


