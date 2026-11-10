/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cdd378; name: FUN_00cdd378
 */


void FUN_00cdd378(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x70);
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar1 = plVar5 + 10;
  *(undefined8 *)(param_1 + 0x70) = 0;
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
  }
  if (((*PTR_DAT_0437b0c8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b0c8), iVar4 != 0))
  {
    FUN_00100250(&LAB_00cdf99c,PTR_DAT_0437b0d0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b0c8);
  }
  DAT_043ab400 = *(undefined8 *)PTR_DAT_0437b0d0;
  FUN_00ce0650(DAT_043ab400,param_1 + 0x78,param_1 + 0x80);
  return;
}


