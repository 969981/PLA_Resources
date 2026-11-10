/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01223ab8; name: FUN_01223ab8
 */


undefined8 FUN_01223ab8(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((**(int **)(param_1 + 0x1648) != 1) || (param_2 != 1)) {
    return 1;
  }
  iVar4 = (*(int **)(param_1 + 0x1648))[0x14];
  if (iVar4 == 0) {
    return 0;
  }
  if (iVar4 != 1) {
    return 1;
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar7 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar7;
  plVar5 = *(long **)(lVar7 + 0xd0);
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)plVar5[0xb];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plVar5 + 10;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 0x10))();
    uVar6 = (uint)*(byte *)(plVar9 + 0x11);
    if (uVar6 != 0) goto LAB_01223b90;
  }
  else {
    uVar6 = (uint)*(byte *)(plVar9 + 0x11);
    if (*(byte *)(plVar9 + 0x11) != 0) {
LAB_01223b90:
      uVar8 = 0;
      uVar10 = 1;
      if (param_3 != 0) goto LAB_01223bb4;
      do {
        do {
          uVar8 = uVar8 + 1;
          if (uVar6 == uVar8) goto LAB_01223be4;
        } while (param_3 == uVar8);
LAB_01223bb4:
      } while ((*(uint *)(param_1 + 0x171c) & 1 << (ulong)(uVar8 & 0x1f)) != 0);
      goto LAB_01223be8;
    }
  }
LAB_01223be4:
  uVar10 = 0;
LAB_01223be8:
  if (plVar9 != (long *)0x0) {
    plVar5 = plVar9 + 10;
    do {
      iVar4 = (int)*plVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  return uVar10;
}


