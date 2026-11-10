/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a20d6c; name: FUN_00a20d6c
 */


void FUN_00a20d6c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *local_20;
  undefined4 local_18 [2];
  
  if (*(char *)(param_1 + 0x89) == '\0') {
    *(undefined1 *)(param_1 + 0x89) = 1;
    local_18[0] = 6;
    if (((*PTR_DAT_04379578 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379578), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
    FUN_00954934(&local_20);
    FUN_00a20f10(local_20,local_18);
    if (local_20 != (long *)0x0) {
      plVar1 = local_20 + 10;
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
        (**(code **)(*local_20 + 0x10))();
      }
    }
  }
  return;
}


