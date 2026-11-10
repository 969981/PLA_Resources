/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018e0d5c; name: FUN_018e0d5c
 */


bool FUN_018e0d5c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  long *local_18;
  
  FUN_01b39678(&local_18);
  if (local_18 == (long *)0x0) {
    bVar5 = false;
  }
  else {
    uVar6 = FUN_02c5fbd4();
    uVar7 = FUN_02c5e2ec(local_18);
    uVar8 = FUN_0143c52c(uVar6,uVar7);
    bVar5 = (uVar8 & 0xfffffffe) == 2;
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 10;
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
        (**(code **)(*local_18 + 0x10))();
      }
    }
  }
  return bVar5;
}


