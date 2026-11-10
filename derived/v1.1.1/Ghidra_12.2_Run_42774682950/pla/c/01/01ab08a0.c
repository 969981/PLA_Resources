/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ab08a0; name: FUN_01ab08a0
 */


void FUN_01ab08a0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  puVar6 = PTR_DAT_0437aea0;
  puVar5 = PTR_DAT_0437ae98;
  lVar13 = *(long *)(param_1 + 0x1f8);
  if (lVar13 == 0) {
    return;
  }
  if (*(int *)(lVar13 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar13 + 0xc);
  iVar8 = *(int *)(lVar13 + 0xc);
  do {
    plVar14 = *(long **)(lVar13 + 0x10);
    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
      uVar11 = FUN_00ab38cc();
      *(undefined8 *)puVar6 = uVar11;
      __cxa_guard_release(puVar5);
    }
    while( true ) {
      if (plVar14 == (long *)0x0) {
        return;
      }
      if (plVar14 == (long *)puVar6) break;
      plVar14 = (long *)*plVar14;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar8) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 == 0) {
          return;
        }
        local_60 = (undefined8 *)0x0;
        uStack_58 = 0;
        FUN_00aeb228(&local_60,lVar13 + 0x358);
        if (local_60 == (undefined8 *)0x0) goto LAB_01ab09ec;
        uVar10 = FUN_02a43a8c();
        puVar7 = local_60;
        puVar6 = PTR_DAT_0437a6e0;
        puVar5 = PTR_DAT_0437a6d8;
        puVar4 = local_60;
        if ((uVar10 & 1) != 0) goto joined_r0x01ab0b3c;
        if (local_60 == (undefined8 *)0x0) goto LAB_01ab09ec;
        if (*(int *)((long)local_60 + 0xc) == 0) goto joined_r0x01ab0b3c;
        piVar1 = (int *)((long)local_60 + 0xc);
        iVar8 = *(int *)((long)local_60 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar9;
    if (iVar9 == 0) {
      return;
    }
  } while( true );
LAB_01ab0aac:
  plVar14 = (long *)puVar7[2];
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
    uVar11 = FUN_00ad3750();
    *(undefined8 *)puVar6 = uVar11;
    __cxa_guard_release(puVar5);
  }
  while( true ) {
    puVar4 = local_60;
    if (plVar14 == (long *)0x0) goto joined_r0x01ab0b3c;
    if (plVar14 == (long *)puVar6) break;
    plVar14 = (long *)*plVar14;
  }
  iVar9 = *piVar1;
  if (iVar9 == iVar8) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar12 = puVar7[3];
      plVar14 = (long *)(lVar12 + -0x50);
      if (lVar12 != 0) {
        FUN_02c91f14(plVar14);
        lVar12 = *(long *)(lVar12 + 8);
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar4 = local_60;
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
          puVar4 = local_60;
        }
      }
      goto joined_r0x01ab0b3c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar8 = iVar9;
  if (iVar9 == 0) {
joined_r0x01ab0b3c:
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
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
LAB_01ab09ec:
    lVar12 = *(long *)(lVar13 + 8);
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*(long *)(lVar13 + -0x50) + 0x20))((long *)(lVar13 + -0x50));
    }
    return;
  }
  goto LAB_01ab0aac;
}


