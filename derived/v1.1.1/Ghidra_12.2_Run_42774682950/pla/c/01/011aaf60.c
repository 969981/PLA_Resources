/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011aaf60; name: FUN_011aaf60
 */


void FUN_011aaf60(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (**(int **)(param_1 + 0x5b0) == 0) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar8 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar8;
    plVar5 = *(long **)(lVar8 + 0xd0);
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
      plVar5 = (long *)(**(code **)(*plVar5 + 0x10))();
      cVar2 = (char)plVar9[0x11];
    }
    else {
      cVar2 = (char)plVar9[0x11];
    }
    if (cVar2 != '\0') {
      uVar10 = 0;
      lVar8 = 0x418;
      do {
        lVar11 = *(long *)(param_1 + 0x5c0);
        uVar6 = FUN_011a9a80(plVar5,uVar10 & 0xffffffff,param_2);
        lVar11 = lVar11 + lVar8;
        puVar12 = (undefined8 *)(lVar11 + -0x410);
        if ((uVar6 & 1) == 0) {
          FUN_0283b430(*puVar12,lVar11);
          uVar7 = *puVar12;
          lVar11 = lVar11 + 0x20;
        }
        else {
          FUN_0283b430(*puVar12,lVar11 + 0x20);
          uVar7 = *puVar12;
        }
        plVar5 = (long *)FUN_0283b1e8(uVar7,lVar11);
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x500;
      } while (uVar10 < *(byte *)(plVar9 + 0x11));
    }
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
                    /* WARNING: Could not recover jumptable at 0x011ab0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      return;
    }
  }
  return;
}


