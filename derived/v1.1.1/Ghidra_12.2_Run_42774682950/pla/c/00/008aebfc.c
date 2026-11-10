/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008aebfc; name: FUN_008aebfc
 */


void FUN_008aebfc(long param_1,undefined2 param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_28;
  undefined2 local_18;
  undefined1 local_16;
  
  local_18 = param_2;
  local_16 = param_3;
  FUN_008aed2c(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd8),&local_18);
  plVar5 = *(long **)(param_1 + 0xb60);
  *(undefined8 *)(param_1 + 0xb60) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0xb60) = local_28;
  return;
}


