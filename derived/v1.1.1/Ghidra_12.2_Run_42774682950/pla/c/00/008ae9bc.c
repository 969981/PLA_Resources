/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ae9bc; name: FUN_008ae9bc
 */


void FUN_008ae9bc(long param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined1 local_28;
  
  local_28 = 0;
  plVar5 = (long *)FUN_0294d664(*(undefined8 *)(*(long *)(param_1 + 0x78) + 8),0);
  local_30 = *(undefined1 *)(*plVar5 + 0x7d);
  local_2c = 1;
  local_2f = param_2;
  FUN_008aea68(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd8),&local_30);
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
  *(undefined8 *)(param_1 + 0xb60) = local_38;
  return;
}


