/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008aeb48; name: FUN_008aeb48
 */


void FUN_008aeb48(long param_1,undefined1 param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3c;
  byte local_38;
  undefined8 uStack_28;
  
  plVar5 = (long *)FUN_0294d664(*(undefined8 *)(*(long *)(param_1 + 0x78) + 8),0);
  local_40 = *(undefined1 *)(*plVar5 + 0x7d);
  local_3c = 2;
  local_3f = param_2;
  local_38 = param_3 & 1;
  FUN_008aea68(&uStack_28,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd8),&local_40);
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
  *(undefined8 *)(param_1 + 0xb60) = uStack_28;
  return;
}


