/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01442340; name: FUN_01442340
 */


void FUN_01442340(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  puVar5 = PTR_DAT_0437f498;
  puVar4 = PTR_DAT_0437f490;
  if (*(long *)(param_1 + 0x168) == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x168) + 0x58) & 1) == 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x198);
  if (lVar10 == 0) {
    return;
  }
  if (*(int *)(lVar10 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar10 + 0xc);
  iVar12 = *(int *)(lVar10 + 0xc);
  do {
    plVar13 = *(long **)(lVar10 + 0x10);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar8 = FUN_01443f54();
      *(undefined8 *)puVar5 = uVar8;
      __cxa_guard_release(puVar4);
    }
    while( true ) {
      if (plVar13 == (long *)0x0) {
        return;
      }
      if (plVar13 == (long *)puVar5) break;
      plVar13 = (long *)*plVar13;
    }
    iVar6 = *piVar1;
    if (iVar6 == iVar12) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar10 = *(long *)(lVar10 + 0x18);
        if (lVar10 == 0) {
          return;
        }
        lVar11 = *(long *)(lVar10 + 0x1a0);
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0xc) == 0)) goto LAB_0144240c;
        piVar1 = (int *)(lVar11 + 0xc);
        iVar12 = *(int *)(lVar11 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar6;
    if (iVar6 == 0) {
      return;
    }
  } while( true );
LAB_01442478:
  plVar13 = *(long **)(lVar11 + 0x10);
  lVar9 = FUN_01091efc();
  while( true ) {
    if (plVar13 == (long *)0x0) goto LAB_0144240c;
    if (plVar13 == (long *)lVar9) break;
    plVar13 = (long *)*plVar13;
  }
  iVar6 = *piVar1;
  if (iVar6 == iVar12) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar11 = *(long *)(lVar11 + 0x18);
      if (lVar11 != 0) {
        local_70 = *param_2;
        uStack_68 = param_2[1];
        local_60 = param_2[2];
        plVar13 = (long *)(lVar11 + -0x50);
        local_58 = (long *)0x0;
        FUN_0290b66c(plVar13,&local_70,0);
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        uVar7 = FUN_02a43a5c(*(undefined8 *)(lVar11 + 8));
        if ((uVar7 & 1) != 0) {
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
      goto LAB_0144240c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar12 = iVar6;
  if (iVar6 == 0) {
LAB_0144240c:
    uVar7 = FUN_02a43a5c(*(undefined8 *)(lVar10 + 8));
    if ((uVar7 & 1) != 0) {
      (**(code **)(*(long *)(lVar10 + -0x50) + 0x20))();
    }
    return;
  }
  goto LAB_01442478;
}


