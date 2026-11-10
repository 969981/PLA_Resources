/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d8fd0; name: FUN_027d8fd0
 */


void FUN_027d8fd0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0xb8) == 6) {
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa2) = 0;
    plVar5 = *(long **)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (plVar5 != (long *)0x0) {
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
      }
    }
    plVar5 = *(long **)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (plVar5 != (long *)0x0) {
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
      }
    }
    *(undefined8 *)(param_1 + 0xb8) = 0x200000002;
    if (*(char *)(param_1 + 0xc0) != '\0') {
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    lVar6 = *(long *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (lVar6 != 0) {
      FUN_027dade4(param_1 + 0xe0);
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  return;
}


