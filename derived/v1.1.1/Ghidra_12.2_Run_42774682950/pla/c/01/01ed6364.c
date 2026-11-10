/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed6364; name: FUN_01ed6364
 */


uint FUN_01ed6364(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *local_18;
  
  FUN_01b39678(&local_18);
  if (local_18 == (long *)0x0) {
LAB_01ed63b8:
    iVar4 = FUN_01b9a198(param_1);
    if (iVar4 != 3) {
      uVar5 = FUN_01ba3fb0(param_1);
      goto LAB_01ed63d0;
    }
  }
  else {
    iVar4 = FUN_02c6849c(local_18[0x13]);
    if (iVar4 != 0x1a5) {
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
      goto LAB_01ed63b8;
    }
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
  uVar5 = 1;
LAB_01ed63d0:
  return uVar5 & 1;
}


