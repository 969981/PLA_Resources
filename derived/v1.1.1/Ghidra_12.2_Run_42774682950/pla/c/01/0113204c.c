/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113204c; name: FUN_0113204c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0113204c(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar9 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar9;
  plVar10 = _DAT_000001c8;
  plVar7 = *(long **)(lVar9 + 0xd0);
  if (plVar7 == (long *)0x0) {
    if (_DAT_000001c8 != (long *)0x0) {
      plVar7 = _DAT_000001c8 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar10 = (long *)plVar7[0x39];
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  uVar8 = FUN_013e245c(plVar10);
  uVar5 = FUN_013f6c68(uVar8,param_2);
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  return uVar5;
}


