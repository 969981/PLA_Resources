/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009743b0; name: FUN_009743b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009743b0(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *local_130 [32];
  undefined8 local_28;
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar7 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar7;
  plVar6 = *(long **)(lVar7 + 0xb0);
  if (plVar6 == (long *)0x0) {
    lVar7 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar7 = plVar6[0x1c];
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  local_28 = 0x102000101;
  FUN_009346d8(local_130,*(undefined8 *)(lVar7 + 0xd0),&local_28);
  FUN_00931034(local_130,*(undefined8 *)(param_1 + 0x58));
  if (local_130[0][0xd1] != 0) {
    FUN_011dce68(local_130[0][0xd1]);
  }
  if (local_130[0] != (long *)0x0) {
    lVar7 = local_130[0][0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_130[0] + 0x20))();
    }
  }
  return;
}


