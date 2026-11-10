/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c5c78; name: FUN_010c5c78
 */


long * FUN_010c5c78(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  
  if (((*PTR_DAT_0437b1a0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b1a0), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437e390,PTR_DAT_0437b1a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b1a0);
  }
  uVar5 = *(undefined8 *)PTR_DAT_0437b1a8;
  *(undefined8 *)PTR_DAT_0437b1b0 = uVar5;
  plVar6 = (long *)FUN_010caa60(uVar5,param_2);
  if (plVar6 == (long *)0x0) {
    FUN_00938764(param_1 + 0x140,0,param_2,0,*(undefined8 *)(param_1 + 0x188),0);
    local_30 = *(undefined8 *)(*(long *)(param_1 + 0x148) + 0x250);
    plVar6 = (long *)FUN_00d12804(auStack_28,*(undefined8 *)(param_1 + 0x188),&local_30);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return plVar6;
}


